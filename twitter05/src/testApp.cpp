#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(92,92,92);
    ofSetFrameRate(30);
    ofSetLogLevel(OF_LOG_VERBOSE);
    
    // A simplified interface when using the ofxExampleTwitterClient class.
    // Twitter-specific configuration details can be taken care of the
    // ofxOAuth base class.
    client.setup("dmKRe2QLuyZLrJtuBPOOQ","DuZX3UkHBODQSojkjnwHglIs8yuyYlWmN0Vxtu2eCoM");
    
    // Once authenticated, press the spacebar to try a test call.

    //CameraPixelator
    cam.initGrabber(640, 480);
    
    shader.load("shaders/pixelate");
    
    divisor.set(20,20);
    
    myfont.loadFont("helvetica.ttf",32);
    mySmallerFont.loadFont("helvetica.ttf", 14);
}

//--------------------------------------------------------------
void testApp::update(){

    ofSetWindowTitle(ofToString(ofGetFrameRate())+"fps");
    cam.update();
}

//--------------------------------------------------------------
void testApp::draw(){
    if(client.isAuthorized())
    {
        //ofBackground(0,255,0);
        shader.begin();
        shader.setUniform2f("sampleDivisor", divisor.x, divisor.y);
        ofSetColor(255, 255, 255);
        cam.draw(20,20, ofGetWidth()-40, ofGetHeight()-120);
        shader.end();
        
        ofSetColor(64,64,64);
        
        ofSetColor(255,255,255);
        mySmallerFont.drawString("Your Tweets [c]", 70, 720);
        mySmallerFont.drawString("Your Mentions [v]", 220, 720);
        mySmallerFont.drawString("Kevin Bacon's Tweets [b]", 490, 720);
        mySmallerFont.drawString("Kevin Bacon's Mentions [n]", 730, 720);
        

    }
    else
    {
        ofBackground(255,0,0);
    }

    }

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if(key == ' ')
    {
        if(client.isAuthorized())
        {
            std::string s = client.exampleMethod();
            ofLogNotice("testApp::keyPressed") << s;
            
            
            float dist = ofDist(0,0,0,0);
            float max = ofDist(0, 0, ofGetWidth(), ofGetHeight());
            float pixelSize = ofMap(dist, 0, max, 1, 30);
            divisor.x = divisor.y = pixelSize;
            
        }
        
        else
        {
            ofLogWarning("testApp::keyPressed") << "Not authorized yet.";
        }
    }

    if(key == 'c')
    {
        if(client.isAuthorized())
        {
            std::string s = client.exampleMethod();
            ofLogNotice("testApp::keyPressed") << s;
            
            ofxJSONElement obj = ofxJSONElement(s);
            
            //cout <<  obj[0]["user"]["statuses_count"].asInt() << endl;
            
            //calling out the number of tweets
            int numberOfTweets = obj[0]["user"]["statuses_count"].asInt();
            
            cout << numberOfTweets << endl;
            
            float dist = ofDist(0,0,numberOfTweets,numberOfTweets);
            float max = ofDist(0, 0, ofGetWidth(), ofGetHeight());
            float pixelSize = ofMap(dist, 0, max, 1, 30);
            divisor.x = divisor.y = pixelSize;
            
        }
        
        else
        {
            ofLogWarning("testApp::keyPressed") << "Not authorized yet.";
        }
    }
    if(key == 'v')
    {
        if(client.isAuthorized())
        {
            std::string s = client.exampleMethod();
            ofLogNotice("testApp::keyPressed") << s;
            
            ofxJSONElement obj = ofxJSONElement(s);
            
            //cout <<  obj[0]["user"]["statuses_count"].asInt() << endl;
            
            //calling out the number of favorties
            int numberOfFavorites = obj[0]["user"]["favourites_count"].asInt();
            
            //calling out the number of tweets
            int numberOfTweets = obj[0]["user"]["statuses_count"].asInt();
            
            cout << numberOfFavorites << endl;
            
            
            
            float dist = ofDist(0,0,numberOfFavorites+numberOfTweets,numberOfFavorites+numberOfTweets);
            float max = ofDist(0, 0, ofGetWidth(), ofGetHeight());
            float pixelSize = ofMap(dist, 0, max, 1, 30);
            divisor.x = divisor.y = pixelSize;
        }
        
        else
        {
            ofLogWarning("testApp::keyPressed") << "Not authorized yet.";
        }
    }
    if(key == 'b')
    {
        if(client.isAuthorized())
        {
            std::string s = client.exampleMethod();
            ofLogNotice("testApp::keyPressed") << s;
            
            ofxJSONElement obj = ofxJSONElement(s);
            
            //cout <<  obj[0]["user"]["statuses_count"].asInt() << endl;
            
            //calling out the number of favorties
            int numberOfRetweets = obj[0]["retweet_count"].asInt();
            
            //calling out the number of favorties
            int numberOfFavorites = obj[0]["user"]["favourites_count"].asInt();
            
            //calling out the number of tweets
            int numberOfTweets = obj[0]["user"]["statuses_count"].asInt();
            
            cout << numberOfRetweets << endl;
            
            float dist = ofDist(0,0,numberOfRetweets+numberOfFavorites+numberOfTweets,numberOfRetweets+numberOfFavorites+numberOfTweets);
            float max = ofDist(0, 0, ofGetWidth(), ofGetHeight());
            float pixelSize = ofMap(dist, 0, max, 1, 30);
            divisor.x = divisor.y = pixelSize;
        }
        
        else
        {
            ofLogWarning("testApp::keyPressed") << "Not authorized yet.";
        }
    }

    if(key == 'n')
    {
        if(client.isAuthorized())
        {
            std::string s = client.exampleMethod();
            ofLogNotice("testApp::keyPressed") << s;
            
            ofxJSONElement obj = ofxJSONElement(s);
            
            //cout <<  obj[0]["user"]["statuses_count"].asInt() << endl;
            
            //calling out the number of tweets
            int numberOfNewTweets = obj[0]["user"]["statuses_count"].asInt();
            
            cout << numberOfNewTweets << endl;
            
            float dist = ofDist(0,0,numberOfNewTweets,numberOfNewTweets);
            float max = ofDist(0, 0, ofGetWidth(), ofGetHeight());
            float pixelSize = ofMap(dist, 0, max, 1, 30);
            divisor.x = divisor.y = pixelSize;
            
        }
        
        else
        {
            ofLogWarning("testApp::keyPressed") << "Not authorized yet.";
        }
    }



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
