#pragma once

#include "ofMain.h"
#include "TagManager.h"

class ofApp : public ofBaseApp{

public:

	//define your custom tag categories
	enum TAG_CATEGORIES{
		COLORS = 0,
		SHAPES,
		NUM_TAG_CATEGORIES,
		INVALID_TAG_CATEGORY = -1 // -1 used internally to in default tag constructor!
	};


	void setup();
	void update(){};
	void draw(){};

	void keyPressed(int key){};
	void keyReleased(int key){};

	TagManager<TAG_CATEGORIES> * tm = new TagManager<TAG_CATEGORIES>(NUM_TAG_CATEGORIES);


};
