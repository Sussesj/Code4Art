#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackgroundHex(0x7CE8D3);
    ofSetColor(ofColor::blue);
    ofFill();
    ofRect( mouseX, mouseY, 30,30);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if (key == 'd') {
        ofColor(255,0,0);
    }
     
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
   
}
//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button)
    {
        
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
