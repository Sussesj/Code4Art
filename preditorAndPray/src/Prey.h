//
//  Prey.h
//  preditorAndPray
//
//  Created by Susse Sønderby Jensen on 10/15/13.
//
//
#pragma once //when ever this file appears in a #include statemtn, only include me once
#include "ofMain.h"

class Pray {
    public:
    
    void init() {
        pos.x = ofRandomWidth(); //ofRadon(0,ofGetWidth);
        pos.y = ofRandomHeight();
    }
    
    void draw() {
        ofSetColor(255, 100, 200, 1);
        ofRect(pos, 5, 10);
    }
    
    ofPoint pos;
};
