#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
    ofSetBackgroundColor(ofColor::black);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(ofColor::white);
    

    for (int y= 0; y<ofGetHeight(); y+=100) {
        for (int x=0; x<ofGetHeight(); x+=100) {
            ofRect((x*2), (y*2), 100, 100);
        }
        
    }
    for (int y= 0; y<ofGetWidth(); y+=100) {
        for (int x=0; x<ofGetWidth(); x+=100) {
            ofRect((x*2)+100, (y*2)+100, 100, 100);
        }
        
        
    }
    
    /*//nested forloop
    for (int y = 0; y<ofGetHeight(); y+=40) {
        for (int x=0; x<ofGetWidth(); x+=40){
            ofRect(x, y+40, 30, 30);
        }
    }*/

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
