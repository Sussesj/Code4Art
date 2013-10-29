#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    //count.loadImage("lamp.png");
    cam.initGrabber(320, 240);

}

//--------------------------------------------------------------
void testApp::update(){
    ofSetWindowTitle(ofToString(ofGetFrameRate())+"fps");
    
    cam.update();

}

//--------------------------------------------------------------
void testApp::draw(){
    //count.draw(100, 100); //this function draws the image
    float x_offset = (ofGetWidth()/2)-(cam.getWidth()/2.0); // in order to center image
    //float y_offset = (ofGetHeight()/2)-(count.getHeight()/2.0);
    
    ofPushMatrix(); //hitting save on screen. 
    {
    ofTranslate(x_offset, ofGetHeight()/2); //translating the koordinate of the screen to this. So this is the center of the screen
    ofRotateX(ofGetFrameNum()*3); //makes  it rotate over time.
    ofTranslate(0, -(cam.getHeight()/2.0));
    
    
    for (int y=0; y<cam.getHeight(); y+=4) { //this is called a two dimensional transformation
        for (int x = 0; x<cam.getWidth(); x+=4) {
            // (x,y) every pixel in the image
            
            ofColor c =cam.getPixelsRef().getColor(x, y); //returnes an ofcolor object
            float brightness = c.getBrightness();
            float z = ofMap(brightness, 0, 255, -100, 100);
            ofSetColor(c);
            
            ofRect(x, y, z, 4, 4);
        }
      }
    }
    ofPopMatrix(); //reverts to save coordinate system
   
    ofSetColor(0,0,255);
    ofCircle(10, 10, 50);

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
