//
//  Particle.h
//  objects
//
//  Created by Susse Sønderby Jensen on 10/8/13.
//
//

#include "ofMain.h" //brings in openframeworks

class particle {
    public: //this has to be in it! Defines the visibility level
    
    
    void setMeUp(float _radius, ofPoint _pos, ofPoint _vel, ofColor _color){
        radius = _radius; //it's an argument call radius
        pos = _pos;
        vel = _vel;
        color = _color;
    }
    
    void update(){
        pos.x += vel.x;
        pos.y += vel.y;
        
        
        if (pos.x > ofGetWidth()-radius) {
            pos.x = - radius;
        }
        if (pos.x < -radius) {
            pos.x = ofGetHeight() + radius;
        }
        
        if (pos.y > ofGetHeight()+radius) {
            pos.y = - radius;
        }
        if (pos.x > ofGetWidth()-radius) {
            pos.x = - radius;
        }
        
    }
    
    void draw(){
        
        ofSetColor(color);
        ofCircle(pos, radius);
    }
    
    ofColor color;
    ofPoint pos;
    ofPoint vel;
    float radius;
    
    
};
