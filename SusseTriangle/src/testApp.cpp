#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetVerticalSync( true );
    ofBackground( 0 );
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(255);
    ofNoFill();
    ofBeginShape();
    for (int i = 1; i < myPointsA.size(); i++) {
        ofVertex( myPointsA[i] );
        ofVertex( myPointsB[i] );
        ofVertex( myPointsC[i] );
        ofVertex( myPointsC[i-1] );
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
    
    float radius = ofRandom( 10, 25);
    
    ofPoint tmpA;
    tmpA.x = x;
    tmpA.y = y;
    
    ofPoint tmpB;
    tmpB.x = x + ofRandom(-radius, radius);
    tmpB.y = y + ofRandom(-radius, radius);
    
    ofPoint tmpC;
    tmpC.x = x + ofRandom(-radius, radius);
    tmpC.y = y + ofRandom(-radius, radius);
    
    myPointsA.push_back( tmpA );
    myPointsB.push_back( tmpB );
    myPointsC.push_back( tmpC );

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
