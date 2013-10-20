//
//  Meteor.cpp
//  meteors
//
//  Created by Susse Sønderby Jensen on 10/15/13.
//
//

#include "Meteor.h"




// ----------------------------------
void Meteor::initialize(float x, float y, float xvel, float yvel)
{
    radius = ofRandom(5, 60);
    born = ofGetElapsedTimef();
    pos.set(x, y);
    vel.set(xvel, yvel);
    color.setHsb(ofRandom(200,255), 220, ofRandom(0,100));
}


// ----------------------------------
void Meteor::updateMe()
{
    pos += ofGetLastFrameTime() * vel;
    
    // bounce off walls
    if(pos.x > ofGetWidth()-radius) {
        pos.x = ofGetWidth()-radius;
        vel.x *= -1;
    }
    if(pos.x < radius) {
        pos.x = radius;
        vel.x *= -1;
    }
    if(pos.y > ofGetHeight()-radius) {
        pos.y = ofGetHeight()-radius;
        vel.y *= -1;
    }
    if(pos.y < radius) {
        pos.y = radius;
        vel.y *= -1;
    }
    
    float age = ofGetElapsedTimef() - born;
    color.a = ofMap(age, 0, 5, 255, 0);
}


// ----------------------------------
void Meteor::drawMe()
{
    ofSetColor(color);
    ofCircle(pos, radius);
}

