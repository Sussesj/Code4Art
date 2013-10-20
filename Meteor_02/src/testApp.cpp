#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    for(int i =0; i<30; i++){
        class Meteor theMeteors; //Draw a Meteor
        theMeteors.init(); //assign a reference for us self
        
        Meteor.push_back(theMeteors); //Adding Meteors to the univers
    }

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(0);
    
    for (int i=0; i<Meteor.size(); i++) {
        Meteor[i].draw();
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
