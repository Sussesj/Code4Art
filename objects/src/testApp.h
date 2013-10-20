#pragma once

#include "ofMain.h"
#include "Particle.h"

//#define NUM_BOBS 50

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
    
//    ofPoint pos [10];
//    ofColor color[10];
    
    //particle bobs[NUM_BOBS]; //we are defining this
    vector<particle> bobs; //my vector called bobs is going to hold the parameter of Bob
    

  
};
