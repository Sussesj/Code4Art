//
//  stars.h
//  stars
//
//  Created by Jackie Neon on 10/18/13.
//
//

#pragma once
#include "ofMain.h"
#include "Meteor.h"


class Stars {
public:
	void init();
    void draw();
    

    ofPoint pos;
    float xpos = ofGetWidth()/2.0;
    float ypos = ofGetHeight()/2.0;
    float radius1 =5;
    float radius2 = 10;
    bool useRadius1 = true;
    


    
};