#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    for(int i =0; i<30; i++){
        Pray bladeOfGrass;
        bladeOfGrass.init(); //assign a reference for us self
        
        grass.push_back(bladeOfGrass);
    }
    
    for (int i=0; i<5; i++) {
        Preditor goat; //make got
        goat.init(); //initialize
        
        gots.push_back(goat); //adding goats
    }
}

//--------------------------------------------------------------
void testApp::update(){
    for (int i=0; i<gots.size(); i++) {
        gots[i].update(grass); //each individual got is going to get the  vector grass
    }
    
    if (ofGetElapsedTimef() > AddGrassAt) {
        Pray bladeOfGrass;
        bladeOfGrass.init(); //assign a reference for us self
        grass.push_back(bladeOfGrass);
        
        AddGrassAt = ofGetElapsedTimef()+0.2;
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    
    
    //using the prey.h class
    for (int i=0; i<grass.size(); i++) {
        grass[i].draw();
    }
    //drawing all the gots
    for (int i=0; i<gots.size(); i++) {
        gots[i].draw();
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
