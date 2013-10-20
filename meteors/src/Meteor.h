//
//  Meteor.h
//  classes
//
//  Created by Susse Soenderby Jensen
//
//

#pragma once
#include "ofMain.h"

class Meteor
{
public:
    
    void initialize(float x, float y, float xvel, float yvel);
    void updateMe();
    void drawMe();
    
    ofPoint pos;
    ofPoint vel;
    ofColor color;
    float radius;
    float born;
};
