#include "testApp.h"

//step 1: declaring a variable, float means it can represent a decimal number.


float xPos; 

//--------------------------------------------------------------
void testApp::setup(){
    //step 2: initialize the variable (give it an initial value)
    ofBackgroundHex(0xFFFFFA);  // Sets the background color to red
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    cout << "draw\r\n";
    
    ofSetHexColor(0xFF00FF);
    ofCircle(100, 100, 30);
    ofFill();
    ofCircle(250,250,100);
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
    ofBackgroundHex(0xFF5900); 
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
