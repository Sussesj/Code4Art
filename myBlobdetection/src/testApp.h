#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
        ofVideoGrabber cam; //making a video grabber and calling it cam
    
        ofxCvColorImage colorImage; //this is kind of like an ofImage
    
        ofxCvGrayscaleImage greyImage;
    
        ofxCvGrayscaleImage background; //takes a background picture of the image
    
        ofxCvGrayscaleImage diffImage; //difference between for forground and the background
    
        ofxCvContourFinder contourFinder; //our blob detection
    
};
