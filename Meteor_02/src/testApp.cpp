#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0, 0, 0);
    
    //Meteor
    for(int i =0; i<20; i++){
        Meteor theMeteors; //Draw a Meteor
        theMeteors.init(); //assign a reference for us self
        
        meteors.push_back(theMeteors); //Adding Meteors to the univers
    }
    
    //stars
    for (int i = 0; i<40; i++) {
        Stars theStars; //drawing stars
        theStars.init();
        
        stars.push_back(theStars);
    }
    
}

//--------------------------------------------------------------
void testApp::update(){

    for (int i=0; i<meteors.size(); i++) {
        meteors[i].update();
    }
    
    for(int i=0; i<stars.size(); i++) {
        for (int j=0; j<meteors.size(); j++) {
            
            float d = ofDist(meteors[j].position.x, meteors[j].position.y, stars[i].xpos, stars[i].ypos);
            
//            if (d < meteors[j].sizeMeteor) {
            if (d < 100) {
                //stars.erase(stars.begin()+i);
                cout << "print erase stars : collision between i: " << i << "and j: " << j << endl;
            }
        }
    }
    
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    for (int i=0; i<meteors.size(); i++) {
        meteors[i].draw();
        ofSetColor(255);
        ofDrawBitmapString(ofToString(i), meteors[i].position);
    }
    
    for(int i=0; i<stars.size(); i++){
        stars[i].draw();
        ofSetColor(255);
        ofDrawBitmapString(ofToString(i), stars[i].pos);
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
