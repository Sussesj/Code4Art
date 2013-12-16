#pragma once

#include "ofMain.h"
#include "ofxExampleTwitterClient.h"
#include "ofxJSONElement.h"
#include "ofxOAuth.h"
#include "ofxXmlSettings.h"

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
    
        //Twitter Api
        ofxExampleTwitterClient client;
//      bool ableToOpenJSON;
//      ofxJSONElement tweetLookup;
    
        //CameraPixelator
        ofVideoGrabber cam;
        ofShader shader;
        ofPoint divisor;
    
        //font
        ofTrueTypeFont myfont;
        ofTrueTypeFont mySmallerFont;
    
};
