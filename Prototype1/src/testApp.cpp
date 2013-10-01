/*Susse S¿nderby Jensen 
 prototype 1 - adj. Fragmented*/

#include "testApp.h"


float a=0;
float t=0;
float x=0;
float y=0;



//--------------------------------------------------------------
void testApp::setup(){
    

    
    
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
//    ofFill();
//    ofSetColor(255, 0, 0);
//    ofTriangle(x01, y01, x02, y02, x03, y03);
    
    // Loop 4 - purple
//    ofNoFill();
//    ofSetColor(132, 84, 154);
//    
    ofBeginShape();
    
        float t = ofDegToRad(a);
        float r = 200;
        float x = mouseX + cos(t) * r;
        float y = mouseY + sin(t) * r;
        ofVertex(x, y);
    ofEndShape();
    
    float x1 = 400;
    float y1 = 115;
    float x2 = 285;
    float y2 = 135;
    float x3 = 365;
    float y3 = 25;
    
    ofDist(x1, y1, x2, y2);
    
    //draw triangle
    ofSetPolyMode(OF_POLY_WINDING_NONZERO);
    ofBeginShape();
    ofVertex(x1,y1);
    ofVertex(x2,y2);
    ofVertex(x3,y3);
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
