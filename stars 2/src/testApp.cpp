#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0, 0, 0);
    
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
    //this code is not working?: fix it! 
    //step 3: eat
    for(int i=0; i<stars.size(); i++){
        float d = ofDist(pos.x, pos.y, stars[i].pos.x, stars[i].pos.y);
        if(d< size){
            //close enough to eat grass
            //size += 3;
           // speed *=0.8;
            stars.erase(stars.begin()+i);
        }
    }
}

//--------------------------------------------------------------
void testApp::draw(){
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
