#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		int time;

		ofImage cloud;
		ofImage water;
		ofImage dark;
		ofImage big;
		ofImage small;
		ofImage tree;
		ofImage date;
		ofImage grass;
		ofImage heart;
		ofImage read;

		ofSoundPlayer swater;
		ofSoundPlayer sound1;
		ofSoundPlayer sound2;
		ofSoundPlayer sound3;
		ofSoundPlayer sound4;	

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		int home;
		int mousex;
		int mousey;
		bool click;
		ofColor color;
		

};
