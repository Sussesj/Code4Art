//
//  Predator.cpp
//  predatorPrey
//
//  Created by Joe Student on 10/15/13.
//
//

#include "Predator.h"

// --------------------------------------
void Predator::init() {
    position.x = ofRandomWidth();
    position.y = ofRandomHeight();
    
    velocity.x = 0;
    velocity.y = 0;
    
    size = 2;
}

// --------------------------------------
ofPoint Predator::chase(vector<Prey>& prey){
    // Step 1: Identify position of closest prey
    ofPoint posOfClosestPrey;
    float shortestDistance =  FLT_MAX; //ofGetWidth() * ofGetHeight();
    for(int i=0; i<prey.size(); i++)
    {
        float d = ofDist(position.x, position.y, prey[i].position.x, prey[i].position.y);
        if(d < shortestDistance) {
            shortestDistance = d;
            posOfClosestPrey = prey[i].position;
        }
        
    }
    
    // shortestDistance is now the distance to the closest prey
    // *also* posOfClosestPrey will be posOfClosestPrey
    
    // Step 2: Move towards closest prey
    ofPoint direction; // difference
    direction = posOfClosestPrey - position;
    direction.normalize();
    return direction;
}

// --------------------------------------
ofPoint Predator::eat(vector<Prey>& prey){
    
    for(int i=0; i<prey.size(); i++)
    {
        float d = ofDist(position.x, position.y, prey[i].position.x, prey[i].position.y);
        if(d < size)
        {
            // close enough to eat grass
            size += 1.2;
            prey.erase( prey.begin() + i );
        }
    }
}

// --------------------------------------
// This function calculates the direction that the predator should go in order to avoid other predators
ofPoint Predator::avoid(vector<Predator>& predators){
    ofPoint direction;
    int count = 0;
    
    // Loop through all of the predators
    for(int i=0; i<predators.size(); i++) {
        // Measure the distance between this predator and the "other"
        float d = ofDist(position.x, position.y, predators[i].position.x, predators[i].position.y);
        
        // If the distance is less than "size+50", count it as a predator to avoid.
        // Question: why are we also checking if d > 0?  Hint: how would a predator avoid itself?
        if(d < size+50 && d > 0) {
			// Calculate vector pointing away from neighbor
			ofPoint diff = position - predators[i].position;
			diff.normalize();
            direction += diff;
			count++;            // Keep track of how many
        }
    }
    
    // Average -- divide by how many
    if (count > 0) {
		direction /= (float)count;
    }
    
    return direction;
}

// --------------------------------------
void Predator::update(vector<Predator>& predators, vector<Prey>& prey) {
    if(prey.size()==0) return;
    
    // Loose size over time!
    size *= 0.999;
    
    // Predator now has 2 functions that return a direction in the form of an ofPoint
    chaseDirection = chase(prey);       // Which direction should I go in order to move towards food?
    avoidDirection = avoid(predators);  // Which direction should I go to keep my distance from other predators?
    
    // This is where we can "weight" the two "goals". In this case:
    // Idea:  What would happen if we replaced 1.2 and 1.8 with variables like "bravery"
    //        and "caution" and gave each predator different values?
    chaseDirection *= 1.2;  // moving towards food gets a weight (or "importance") of 1.2
    avoidDirection *= 1.8;  // avoiding other predators gets a weight (or "importance") of 1.8
    
    // Modify the velocity based on the 2 "goals"
    velocity += (chaseDirection + avoidDirection);
    // Limit the velocity based on the size
    velocity.limit(ofMap(size, 2, 15, 5, 2));
    // Update the position using the velocity
    position += velocity;
    
    
    // Eat anything close
    eat(prey);
}


// --------------------------------------
void Predator::draw() {
    
    // Make the predators
    if(avoidDirection.length()>0) {
        ofSetColor(ofColor::white, 255*0.05);
        ofCircle(position, size+50);
    }
    
    ofSetColor(ofColor::red);
    ofCircle(position, size);
    
    // Note: change this to true in order to see chaseDirection and avoidDirection drawn on screen
    if(false)
    {
        ofSetColor(ofColor::green);
        ofLine(position, position+(chaseDirection*size));
        
        ofSetColor(ofColor::blue);
        ofLine(position, position+(avoidDirection*size));
    }
}

