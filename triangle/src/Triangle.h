//
//  Triangle.h
//  triangle
//
//  Created by Susse Sønderby Jensen on 11/8/13.
//
//

#pragma once
#include "ofMain.h"


class Triangle {
public:
    
    void draw();
    
    // These two numbers describe the circle
    float radius;
    ofPoint center;
    float startAngle;
    ofColor c;
};