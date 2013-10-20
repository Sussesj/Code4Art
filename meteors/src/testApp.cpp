#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetFrameRate(60);
    ofBackgroundHex(0x353438);
    ofEnableAlphaBlending();
}

//--------------------------------------------------------------
void testApp::update(){
    
    ofSetWindowTitle("fps="+ofToString(ofGetFrameRate()));
    
    for(int i=0; i<Meteors.size(); i++)
    {
        Meteors[i].updateMe();
        
        if(Meteors[i].color.a < 2) {
            Meteors.erase( Meteors.begin() + i );
        }
    }
    
    
    mouse.set(mouseX, mouseY);
    mouseVel = mouse-mousePrev;
    mousePrev = mouse;
}

//--------------------------------------------------------------
void testApp::draw(){
    
    for(int i=0; i<Meteors.size(); i++)
    {
        Meteors[i].drawMe();
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
