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
        position.x = ofRandomWidth(); // ofRandom(0, ofGetWidth());
        position.y = ofRandomHeight();
    
        size = 5;
        speedx = ofRandom(-1, 1);
        speedy = ofRandom(-1, 1);
    
    

}

// --------------------------------------
void Meteor::update() {
    if(size < 30) {
        bMeteorSize = true;
    }

    
}

// --------------------------------------
void Meteor::draw() {
        ofSetColor(255, ofRandom(0,255), 0);
        ofEllipse(position, size, size);
        position.x += speedx;
        position.y += speedy;
        speedx += size;
    
    if (position.x >= ofGetWidth()-size) {
        speedx *= -1;
        size += 1;
        //bMeteorSize = true;
    }
    else if (position.x < ofGetWidth()){
        speedx *= 1;
    }
    else if (position.y > ofGetHeight()) {
        speedy *= -1;
        //bMeteorSize = true;
    }
    else if (position.y < ofGetHeight()) {
        speedy *= 1;
        //bMeteorSize = true;
    }
    
    
}


