//
//  Preditor.h
//  preditorAndPray
//
//  Created by Susse Sønderby Jensen on 10/15/13.
//
//Declarations
#include "ofMain.h"
#include "Prey.h"

class Preditor {

public:
    
    void init() {
        pos.x = ofRandomWidth(); //ofRadon(0,ofGetWidth);
        pos.y = ofRandomHeight();
        
        size = 5;
        speed = 3;
    }
    void update(vector<Pray>& Prey) { //we now have access to all the blades of grass.
        //look around and find the closest grass to eat
        
        if(Prey.size()==0) return; //returns nothing id size == 0
        
        
        //step 1: Identify position of the closest pray
        float shortestDistance = 99999999; //then the first it loops through is going to be shorter than
        //Or you could write FLT_MAX, that's the max your screen can be
        for(int i=0; i<Prey.size(); i++){
            float d = ofDist(pos.x, pos.y, Prey[i].pos.x, Prey[i].pos.y);
            if(d < shortestDistance){
                //this is now the shortest
                shortestDistance = d;
                posOfClosestPrey = Prey[i].pos; //
            }
            
        }
        //shortestDistance is now the distance to the closest prey
        
        //step 2, Move towards closest prey
        ofPoint direction; //difference 
        direction = posOfClosestPrey - pos;
        direction.normalize();
        
        pos += direction * speed; //we can add size so that the goat moves slower as it get's bigger
        
        //step 3: EAT
        
        for(int i=0; i<Prey.size(); i++)
        {
            float d = ofDist(pos.x, pos.y, Prey[i].pos.x, Prey[i].pos.x);
            if(d< size){
                //close enough to eat grass
                size += 3;
                speed *= 0.8;
                Prey.erase( Prey.begin()+i);
            }
        }
        
        
    }
    
    void draw() {
        ofSetColor(ofColor::red);
        ofCircle(pos, size);
        
        ofLine(pos, posOfClosestPrey);
    }
    
    
    ofPoint posOfClosestPrey;
    float size;
    float speed;
    ofPoint pos;
    
};
