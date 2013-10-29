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
	
//	vector<ofPoint> contour;
    ofPoint pos;
    float xpos = ofGetWidth()/2.0;
    float ypos = ofGetHeight()/2.0;
    float radius1 =5;
    float radius2 = 10;
    bool useRadius1 = true;
    


    
};