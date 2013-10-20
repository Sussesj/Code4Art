//
//  Meteor.h
//  Meteor_02
//
//  Created by Susse Sønderby Jensen on 10/20/13.
//
//

#pragma once
#include "ofMain.h"

class Meteor {
public:
    
    void init();
    void update();
    void draw();
    
    ofPoint position;
    float size;
    float speedx;
    float speedy;
    bool bMeteorSize = false;
};
