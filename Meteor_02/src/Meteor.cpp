//
//  Meteor.cpp
//  Meteor_02
//
//  Created by Susse Sønderby Jensen on 10/20/13.
//
//

#include "Meteor.h"

// --------------------------------------
void Meteor::init() {
        position.x = ofRandomWidth(); 
        position.y = ofRandomHeight();
    
        sizeMeteor = 5;
        speedx = ofRandom(-1, 1);
        speedy = ofRandom(-1, 1);
    
        
    exploded = false;
}

// --------------------------------------
void Meteor::update() {
    
    if (position.x >= ofGetWidth()-sizeMeteor) {
        speedx *= -1;
        
    }
    else if (position.x < sizeMeteor){
        speedx *= -1;
    }
    else if (position.y > ofGetHeight()-sizeMeteor) {
        speedy *= -1;
    }
    else if (position.y < sizeMeteor) {
        speedy *= -1;
    }

    position.x += speedx;
    position.y += speedy;

    
    if(sizeMeteor > 50) {
        exploded = true;
    }
    
}
// --------------------------------------
void Meteor::draw() {
    
    if(!exploded)
    {
        ofSetColor(255, ofRandom(0,255), 0);
        ofCircle(position, sizeMeteor);
    }
    else {
        // draw exploded cow
    }
}


