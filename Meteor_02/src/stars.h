//
//  stars.h
//  stars
//
//  Created by Jackie Neon on 10/18/13.
//
//

#ifndef __stars__stars__
#define __stars__stars__

#include <iostream>

#endif /* defined(__stars__stars__) */

#pragma once
#include "ofMain.h"


class Star {
public:
	void init(){
        pos.x = ofRandomWidth();//ofRandom(0, ofGetWidth())
        pos.y = ofRandomHeight();//ofRandom(0, ofGetWidth())
        
    }
    void draw(){
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

//	vector<ofPoint> contour;
    ofPoint pos;
    float xpos = ofGetWidth()/2.0;
    float ypos = ofGetHeight()/2.0;
    float radius1 =5;
    float radius2 = 10;
    bool useRadius1 = true;
    


    
};