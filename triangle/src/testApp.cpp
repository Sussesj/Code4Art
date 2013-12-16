#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    for(int i=0; i<100; i++) {
        Triangle t;
        t.center.x = ofRandomWidth();
        t.center.y = ofRandomHeight();
        t.radius = ofRandom(20, 40);
        t.startAngle = ofRandom(0, M_TWO_PI);
        t.c.setHsb(ofRandomf()*55, 255, 255);
        tris.push_back(t);
    }
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    for(int i=0; i<tris.size(); i++) {
        tris[i].draw();
    
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
    
    for (int i = 0; i<tris.size(); i++) {
        
        if (ofDist(tris[i].center.x, tris[i].center.y, x, y)<20) {
            
            mouseIsClose = true;
            
        }else{
            
            mouseIsClose = false;
        }
    }

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
