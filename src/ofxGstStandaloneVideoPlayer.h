#pragma once

#include "ofxGstStandaloneUtils.h"

class ofxGstStandaloneVideoPlayer: public ofBaseVideoPlayer, public ofxGstStandaloneAppSink {
public:

	ofxGstStandaloneVideoPlayer();
	~ofxGstStandaloneVideoPlayer();

	// ofBaseVideoPlayer methods
	bool				loadMovie(string name);
	void				close();
	void				update();
	void				play();
	void				stop();		
	bool 				isFrameNew();
	unsigned char * 	getPixels();
	ofTexture *			getTexture(){return NULL;};
	float 				getWidth();
	float 				getHeight();
	bool				isPaused();
	bool				isLoaded();
	bool				isPlaying();
	bool				setPixelFormat(ofPixelFormat pixelFormat);
	ofPixelFormat 		getPixelFormat();


	int		getCurrentFrame();
	int		getTotalNumFrames();
	void 	firstFrame();
	void 	nextFrame();
	void 	previousFrame();
	void 	setFrame(int frame);  // frame 0 = first frame...

	bool	isStream();

	void 	setPaused(bool bPause);

	float	getPosition();
	float 	getSpeed();
	float 	getDuration();
	bool  	getIsMovieDone();

	void 	setPosition(float pct);
	void 	setVolume(int volume);
	void 	setLoopState(ofLoopType state);
	ofLoopType		getLoopState();
	void 	setSpeed(float speed);

	ofPixelsRef		getPixelsRef();


	ofxGstStandaloneVideoUtils * getGstVideoUtils();

	void 				draw(float x, float y, float w, float h);
	void 				draw(float x, float y);

protected:
	bool	allocate();
	void	on_stream_prepared();

	// return true to set the message as attended so upstream doesn't try to process it
	virtual bool on_message(GstMessage* msg){return false;};

private:
	ofPixelFormat		internalPixelFormat;
	guint64				nFrames;
	int 				fps_n, fps_d;
	bool				bIsStream;
	ofxGstStandaloneVideoUtils		videoUtils;
};
