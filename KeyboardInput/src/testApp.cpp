#include "testApp.h"

float radius;
float circleX;
float circleY;

//--------------------------------------------------------------
void testApp::setup(){
    radius = 20;
}

//--------------------------------------------------------------
void testApp::update(){
    circleX = ofGetWidth()/2;
    circleY = ofGetHeight()/2;

}

//--------------------------------------------------------------
void testApp::draw(){
    
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    cout << "keypressed" << key << "\n";
    
    if(key == 'g' || key== 'G' || key==OF_KEY_UP)
    {
        radius += 5;
    }
    
    if(key== 's' || key== 'S' || key==OF_KEY_DOWN)
    {
        radius-= 5;
    }
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
