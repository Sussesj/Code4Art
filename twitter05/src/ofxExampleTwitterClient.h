//
//  ofxExampleTwitterClient.h
//  twitter05
//
//  Created by Susse Sønderby Jensen on 12/2/13.
//
//


#pragma once


#include "ofxOAuth.h"


class ofxExampleTwitterClient: public ofxOAuth
{
public:
    ofxExampleTwitterClient()
    {
    }
    
    virtual ~ofxExampleTwitterClient()
    {
    }
    
    void setup(const std::string& consumerKey,
               const std::string& consumerSecret)
    {
        ofxOAuth::setup("https://api.twitter.com",
                        consumerKey,
                        consumerSecret);
    }
    
    // Once setup is called, authenticated calls can be made.
    // This method is just an example of whatyour calls might look like.
    
    //My URL's
    std::string exampleMethod()
    {
        //return get("/1.1/search/tweets.json?q=openFrameworks");
        //return get("/1.1/search/tweets.json?q=SusseSonderby");
        return get("/1.1/statuses/user_timeline.json?sussesonderby=twitterapi&count=1");
        
        
    }
    
    //Use http://mytwitterid.com/ to find Id.
    std::string exampleMethod01()
    {
        //return get("/1.1/search/tweets.json?q=openFrameworks");
        //return get("/1.1/search/tweets.json?q=SusseSonderby");
        return get("/1.1/statuses/mentions_timeline.json?count=2&since_id=494276597");
        
    }
    
    //Kevin Bacons URL's
    std::string exampleMethod03()
    {
        //return get("/1.1/search/tweets.json?q=openFrameworks");
        //return get("/1.1/search/tweets.json?q=SusseSonderby");
        return get("/1.1/statuses/user_timeline.json?The_KevinBacon_=twitterapi&count=1");
        
        
    }
    std::string exampleMethod04()
    {
        //return get("/1.1/search/tweets.json?q=openFrameworks");
        //return get("/1.1/search/tweets.json?q=SusseSonderby");
        return get("/1.1/statuses/mentions_timeline.json?count=2&since_id=275681429");
        
        
    }
    
};