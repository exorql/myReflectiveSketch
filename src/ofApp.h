#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        ofEasyCam cam;
        ofImage note;
        ofSoundPlayer sound;
        
        vector<float> fft_smoothed;
        int n_bands_to_get;
};
