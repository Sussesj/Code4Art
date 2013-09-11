#include "testApp.h"
float radius;
float circleX;
float circleY;

bool bCircleIsMoving;

//--------------------------------------------------------------
void testApp::setup(){
    radius = 20;
    circleX = ofGetWidth()/2;
    circleY = ofGetHeight()/2;
    bCircleIsMoving = false;
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackgroundHex(0Xfff);
    
    ofSetColor(200, 200, 50);
    ofCircle(circleX, circleY, radius);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
//    circleX = x;
//    circleY = y;
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    if (bCircleIsMoving) {
        circleY = y;
        circleX = x;
    }

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    float distance = ofDist(x, y, circleY, circleY);
    if(distance < radius)
    {
        //start moving circle
        bCircleIsMoving = true;
        
    }
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
