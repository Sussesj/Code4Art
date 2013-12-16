#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(60);

    cam.initGrabber(320, 240); //passing the size of the image
    colorImage.allocate(320, 240);
    
}

//--------------------------------------------------------------
void testApp::update(){
    cam.update();
    if(cam.isFrameNew()) //only run these if there is a new frame detected
    {
    
        colorImage.setFromPixels(cam.getPixelsRef());
        //greyImage.setFromColorImage(colorImage);
        greyImage = colorImage;
        diffImage.absDiff(greyImage, background);
        diffImage.threshold(80);
        
        contourFinder.findContours(diffImage, 320*240*0.05, 320*240*0.6, 2, false);
    
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    cam.draw(10, 10); //drawing the cam, hehe
    colorImage.draw(340, 10);
    greyImage.draw(670,10);
    
    background.draw(10, 260);
    
    diffImage.draw(340, 260);
    
    //contourFinder.draw(10, 10);

    vector<ofxCvBlob> blobs = contourFinder.blobs;
    for (int i=0; i<blobs.size(); i++) {
        //blobs[i] is a single blob
        //loop over all of the points in the contour blob
        for(int j=0; j<blobs[i].pts.size(); j++){ //looping over all of the points in blob i
            
            float x = ofMap(blobs[i].pts[j].x, 0, 320, 0, ofGetWidth());
            float y = ofMap(blobs[i].pts[j].y, 0, 240, 0, ofGetHeight());
            ofVertex(blobs[i].pts[j]);
        }
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    if( key == ' ') { //if spacebar is pressed
        background = greyImage; //spacebare is taking the picture at the moment the image is there. 
    }

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
