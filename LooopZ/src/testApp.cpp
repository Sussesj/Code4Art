#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
        ofBackground(ofColor::black);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(ofColor::springGreen);
    
    
    /*//do...while loop
    float x=20; //1. initialization
    
    do {
        ofCircle(x, ofGetHeight()/2, 20); //2. body
        x += 40; //3. increment
    } while ( x < ofGetWidth()); // 4. condition */
    
    
    
    /*//while loop
    float x=20; //1. initialization
    float y= 50; 
    
    do {
        ofCircle(x, y, 20); //2. body
        x += 40; //3. increment
    } while ( x < ofGetWidth()); // 4. condition
    
    y = 100;
    x = 20;
    
    while (x < ofGetWidth()) {
        ofCircle(x, y, 20); // 2. body
        x += 40; // 3. increment 
    }*/
    
    //forloop
    float y = 150;
    for(float x = 20; x < mouseX ; x+= 40){
        ofCircle(x, y, 20);
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
