#include "testApp.h"

float circklx;
float circkly;
float clickx;
float clicky;
//--------------------------------------------------------------
void testApp::setup(){
    circklx = ofGetWidth()/2.0;
    circkly = ofGetHeight()/2.0;
    
    clickx = ofGetWidth()/2.0;
    clicky = ofGetHeight()/2.0;
}

//--------------------------------------------------------------
void testApp::update(){
    
    /*int seconds = ofGetElapsedTimef();
    if(seconds % 2 == 0)
    {
        x += 3;
    }*/
    
    float xdist = clickx-circklx;
    circklx += xdist/10.0;
    
    float ydist = clicky-circkly;
    circkly += ydist/10.0;
}

//--------------------------------------------------------------
void testApp::draw(){
    ofCircle(circklx, circkly, 50);

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
    clickx = x;
    clicky = y;
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
