#include "testApp.h"

//step 1: declaring a variable, float means it can represent a decimal number.


float xPos;
float xSpeed;
float radius;

//--------------------------------------------------------------
void testApp::setup(){
    
    //cout << "setup\r\n";
    ofSetFrameRate(60);
    
    //step 2: initialize the variable (give it an initial value)
    xPos = 100;
    xSpeed = 0.5;
    radius = 30;
    
    ofBackgroundHex(0xFFFFFA);  // Sets the background color
}

//--------------------------------------------------------------
void testApp::update(){
    cout << "update" << xPos << "\n";
    
    //step 3: update the variable
    //xPos = xPos + 0.5;
    xSpeed *= 1.01;
    xPos += xSpeed;
    if (xPos+radius > 1024) {
        cout << "bounce!\n";
        xSpeed = xSpeed *-1;
    }
    if(xPos-radius < 0){
        cout << "bounce!\n";
        xSpeed = xSpeed *-1;
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    
    cout << "draw" << ofGetFrameRate() << "\n";
    
    //step 4: use the variable
    ofSetHexColor(0xFF00FF);
    ofCircle(xPos, 100, 30);
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
