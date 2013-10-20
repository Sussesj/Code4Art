#include "testApp.h"

/**
 NOTE:  Lots of things have changed in this version.  
 Most of them are in Predator.cpp
 Start in the Predator update() function
 One thing you'll notice immediately is that the "goats" now light up if another goat is invading its personal space :)
 */

//--------------------------------------------------------------
void testApp::setup(){

    for(int i=0; i<10; i++) {
        Predator goat;
        goat.init();
        
        goats.push_back(goat);
    }

}

//--------------------------------------------------------------
void testApp::update(){
    for(int i=0; i<goats.size(); i++) {
        goats[i].update(goats, grass);
    }
    
    if(grass.size() < 10)
    {
        Prey bladeOfGrass;
        bladeOfGrass.init();
        grass.push_back(bladeOfGrass);
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(0);
    
    for (int i=0; i<grass.size(); i++) {
        grass[i].draw();
    }
    
    for(int i=0; i<goats.size(); i++) {
        goats[i].draw();
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
