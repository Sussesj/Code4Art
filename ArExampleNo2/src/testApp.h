#pragma once

#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"
#include "ofxOpenCv.h"
#include "ofxARToolkitPlus.h"

class testApp : public ofBaseApp {
public:
    
    void setup();
    void update();
    void draw();
    
    void keyPressed  (int key);
    
    ofVideoGrabber mov;
    ofxCvColorImage img;
    ofxCvGrayscaleImage gray;
    
    ofxARToolkitPlus tracker;
};

#endif
