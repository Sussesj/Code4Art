#include "testApp.h"

bool mouseIsDown;
//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(66,66,66);
   
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(232, 30, 120);
    ofFill();
    ofBeginShape(); //draw shape based on he movement of the mouse
    for (int i = 10; i < myPointsA.size(); i++) {
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
    
    float radius = ofRandom( 10, 50);
    
    ofPoint tmpA; //set point
    
    tmpA.x = x; //create temposrary A
    tmpA.y = y;
    
    
    ofPoint tmpB;
    tmpB.x = x + ofRandom(-radius, radius); //create temposrary A with random radius
    tmpB.y = y + ofRandom(-radius, radius);
    
    
    
    ofPoint tmpC;
    tmpC.x = x + ofRandom(-radius, radius); //create temposrary A with random radius

    tmpC.y = y + ofRandom(-radius, radius);
    
  
    
    myPointsA.push_back( tmpA ); //calling the points as the mouse moves arround
    myPointsB.push_back( tmpB );
    myPointsC.push_back( tmpC );
      

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    mouseIsDown=true;
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

    mouseIsDown=false;
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
