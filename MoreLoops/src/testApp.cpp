#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

    float xpos = ofGetWidth()/2.0;
    float ypos = ofGetHeight()/2.0;
    float radius1 = 100;
    float radius2 = 250;
    bool useRadius1 = true;
    
    ofBeginShape();
    for (int i=0; i<360; i+=10)
    {
        float radius;
        if (useRadius1) radius = radius1;
        else radius = radius2;
        
        float x = xpos+cos(ofDegToRad(i))*radius;
        float y = ypos+sin(ofDegToRad(i))*radius;
        ofVertex(x, y);
        
        useRadius1 = !useRadius1;
    }
    ofEndShape();
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
