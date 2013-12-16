#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup() {
    ofBackground(0,0,0);
    
    ofEnableAlphaBlending();
    
    mov.initGrabber(ofGetWidth(), ofGetHeight());
    img.allocate(ofGetWidth(), ofGetHeight());
    gray.allocate(ofGetWidth(), ofGetHeight());
    tracker.setup(ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void testApp::update(){
    
    mov.update();
    
    if (mov.isFrameNew()) {
        img.setFromPixels(mov.getPixels(), ofGetWidth(), ofGetHeight());
        gray = img;
        tracker.setFromPixels(gray.getPixels());
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(0xffffff);
    mov.draw(0, 0);
    
    for (int i=0; i<tracker.markers.size(); i++) {
        ARToolKitPlus::ARMarkerInfo &m = tracker.markers[i];
        tracker.loadMarkerModelViewMatrix(m);
        ofSetColor(255, 255, 0, 100);
        ofCircle(0,0,25);
        ofSetColor(0);
        ofDrawBitmapString(ofToString(m.id),0,0);
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if (key == 's') mov.videoSettings();
}

