//
//  Meteor.h
//  Meteor_02
//
//  Created by Susse Sønderby Jensen on 10/20/13.
//
//

#pragma once
#include "ofMain.h"
#include "stars.h"

class Meteor {
public:
    void init();
    void update();
    void draw();
    
    ofPoint position;
    float sizeMeteor;
    float speedx;
    float speedy;
    
    bool exploded;
    
};
