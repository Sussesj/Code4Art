//
//  Prey.h
//  predatorPrey
//
//  Created by Joe Student on 10/15/13.
//
//

#pragma once
#include "ofMain.h"

class Prey {
public:
    
    void init() {
        position.x = ofRandomWidth(); // ofRandom(0, ofGetWidth());
        position.y = ofRandomHeight();
    }
    
    void draw() {
        ofSetColor(ofColor::green);
        ofRect(position, 2, 2);
    }
    
    ofPoint position;
};