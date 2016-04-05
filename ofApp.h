
/*
Open Access

Joseph Smith - April 2016

Contact: maltwhisker@gmail.com

This code contains a large amount of work that is commented out. This is due to an unknown environment/conflict error
that stopped me from progressing any further within the allotted timeframe. I am confident that it can be resolved in
the not too distant future, and hope to have fully functional source code available as soon as that day comes. 

This code does still run and display a pixelated version of Google Street view. 

By pressing the spacebar the location will be randomized, and navigation is controlled with the mouse (clicking/movement).

The only addons required for this to run (in it's current state) are:

- ofxAwesomiumPlus
- ofxPostProcessing

In the future it will also require:

- ofxOsc
- ofxOpenCv



*/







#pragma once

#include "ofMain.h"
#include <Awesomium/WebCore.h>
#include "ofxAwesomiumPlus.h"
#include "ofxPostProcessing.h"
//#include "ofxOsc.h"
//#include "ofxOpenCv.h"

//Defaults for OSC:
/*#define HOST "localhost"
#define PORT 6448
#define MESSAGE "/wek/inputs"*/

class ofApp : public ofBaseApp{

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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
        void mouseScrolled(float x, float y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		//ofPixels pixels;

		//ofxCvColorImage imageA, imageB;

		//ofxOscSender sender;

		ofxPostProcessing post;

	protected:
		ofxAwesomiumPlus _browser;
		
};
