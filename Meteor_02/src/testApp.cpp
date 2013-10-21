#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0, 0, 0);
    //Meteor
    for(int i =0; i<30; i++){
        class Meteor theMeteors; //Draw a Meteor
        theMeteors.init(); //assign a reference for us self
        
        Meteor.push_back(theMeteors); //Adding Meteors to the univers
    }
    
    //blink speed
    for(int i=0; i<10; i++){
        Star blink;
        blink.init();
        
        stars.push_back(blink);
    }
    
    //stars
    for (int i = 0; i <10; i++) {
        Star dead;
        dead.init();
        stars.push_back(dead);
    }

}

//--------------------------------------------------------------
void testApp::update(){
    
    if(ofGetElapsedTimef() > addStarAt){
        Star blink;
        blink.init();
        stars.push_back(blink);
        
        addStarAt = ofGetElapsedTimef() + 0.1;
        
    }
    if(stars.size()> killStarAt){
        Star dead;
        dead.init();
        stars.push_back(dead);
        killStarAt = stars.size()  ;
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(0);
    
    for (int i=0; i<Meteor.size(); i++) {
        Meteor[i].draw();
    }
    
    for(int i=0; i<stars.size(); i++){
        stars[i].draw();
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
