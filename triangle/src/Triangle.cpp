//
//  Triangle.cpp
//  triangle
//
//  Created by Susse Sønderby Jensen on 11/8/13.
//
//

#include "Triangle.h"


void Triangle::draw() {
    ofSetColor(c);
    ofBeginShape();
    for(int i=0; i<3; i++) {
        float angle = ofMap(i, 0, 3, startAngle, startAngle+M_TWO_PI);
        float x = center.x + cos(angle) * radius;
        float y = center.y + sin(angle) * radius;
        ofVertex(x, y);
    }
    ofEndShape();
}