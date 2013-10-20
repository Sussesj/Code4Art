#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
//    for( int i=0; i<NUM_BOBS; i++){
//        float radius = ofRandom(20,80);
//        ofPoint pos;
//        pos.x = ofRandomWidth();
//        pos.y = ofRandomHeight();
//        ofPoint vel;
//        vel.x = ofRandom(-10,10);
//        vel.y = ofRandom(-10,10);
//        ofColor color;
//        color.setHsb(ofRandom(255), 255, 255);
//        bobs[i].setMeUp(radius, pos, vel, color);
//
//    }
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    ofSetWindowTitle(ofToString(bobs.size()));
    for( int i=0; i<bobs.size(); i++){
        bobs[i].update();
    }
}

//--------------------------------------------------------------
void testApp::draw(){

    for( int i=0; i<bobs.size(); i++){
        bobs[i].draw();
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
        float radius = ofRandom(20,80);
        ofPoint pos;
        pos.x = x;
        pos.y = y;
        ofPoint vel;
        vel.x = ofRandom(-10,10);
        vel.y = ofRandom(-10,10);
        ofColor color;
        color.setHsb(ofRandom(255), 255, 255);
        
        particle p;
        p.setMeUp(radius, pos, vel, color);
         
        bobs.push_back(p); 
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
