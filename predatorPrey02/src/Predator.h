//
//  Predator.h
//  predatorPrey
//
//  Created by Joe Student on 10/15/13.
//
//

// DECLARATIONS

#include "ofMain.h"
#include "Prey.h"

class Predator {
public:
    
    void init();
    ofPoint chase( vector<Prey>& prey );
    ofPoint avoid(vector<Predator>& predators);
    ofPoint eat( vector<Prey>& prey);
    void update(vector<Predator>& predators, vector<Prey>& prey);
    void draw();

    
    float size;
    
    ofPoint position;
    ofPoint velocity;
    
    ofPoint chaseDirection;
    ofPoint avoidDirection;
    
};