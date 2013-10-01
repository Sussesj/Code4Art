#include "testApp.h"


#define NUM_CIRCLES 100  //# defines the number of circles remember ALL CAPS
float xpos [NUM_CIRCLES]; //10 float instead of 1
float ypos [NUM_CIRCLES];

float xvel[NUM_CIRCLES];
float yvel[NUM_CIRCLES];

float radii[NUM_CIRCLES];

float red[NUM_CIRCLES];
float green[NUM_CIRCLES];
float blue[NUM_CIRCLES];

//--------------------------------------------------------------
void testApp::setup(){

    for(int i=0; i<NUM_CIRCLES; i++){
        xpos[i] = ofRandomWidth();
        ypos[i] = ofRandomHeight();
        
        xvel[i] = ofRandom(-3,3);
        yvel[i] = ofRandom(-3,3);
        
        red[i] = ofRandom(0,255);
        green[i] = ofRandom(0,255);
        blue[i] = ofRandom(0,255);
        
        radii[i] = ofRandom(10,30);
     }
    
}

//--------------------------------------------------------------
void testApp::update(){
    float fps = ofGetFrameRate();
    ofSetWindowTitle("fps="+ofToString(fps));
    
    for(int i =0; i<NUM_CIRCLES; i++){
        xpos[i]+=xvel[i];
        ypos[i]+=yvel[i];
        
        if (xpos[i]>ofGetWidth()-radii[i]) {
            xvel[i] *= -1;
            xpos[i] = ofGetWidth()-radii[i];
        }
        if (xpos[i]>radii[i]) {
            xvel[i] *= -1;
            xpos[i] = radii[i];
        }
        
        if (ypos[i]>ofGetHeight()-radii[i]) {
            yvel[i] *= -1;
            ypos[i]= ofGetHeight()-radii[i];
        }
        if (ypos[i]>radii[i]) {
            yvel[i] *= -1;
            ypos[i] = radii[i];
        }
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    for (int i=0; i<NUM_CIRCLES; i++) {
        ofCircle(xpos[i], ypos[i], radii[i]);
        ofSetColor(red[i], green[i], blue[i]);
        }
    }


//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
