//
//  stars.cpp
//  stars
//
//  Created by Jackie Neon on 10/18/13.
//
//

#include "stars.h"

// --------------------------------------
void Stars::init() {
    pos.x = ofRandomWidth();//ofRandom(0, ofGetWidth())
    pos.y = ofRandomHeight();//ofRandom(0, ofGetWidth())
}

// --------------------------------------
void Stars::draw() {
    ofEnableAlphaBlending();    // turn on alpha blending
    ofSetColor((ofRandom(0,225)),(ofRandom(0,225)));
    //ofEllipse(pos.x, pos.y, 4, 5, 5);
    
    ofBeginShape();// star shape
    for (int i=0; i<360; i+=20)
    {
        float radius;
        if (useRadius1) radius = radius1;
        else radius = radius2;
        
        float x = pos.x+cos(ofDegToRad(i))*radius;
        float y = pos.y+sin(ofDegToRad(i))*radius;
        ofVertex(x,y);
        
        useRadius1 = !useRadius1;
    }
    ofEndShape();
}