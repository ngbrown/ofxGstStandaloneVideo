#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetFrameRate(0);
	player.setPixelFormat(OF_PIXELS_RGB);
	string file = ofFilePath::getAbsolutePath("fingers.mov", true);
	std::replace(file.begin(), file.end(), '\\', '/');
	file = "file:///" + file;
	if(!player.loadMovie(file)) {
		ofLogError("setup", "movie loading failed: \n" + file);
	}
	player.setLoopState(OF_LOOP_NORMAL);
	player.play();
}

//--------------------------------------------------------------
void testApp::update(){
	player.update();
}

//--------------------------------------------------------------
void testApp::draw(){
	player.draw(0,0);
}

void testApp::exit(){
	ofLogNotice() << "exiting";
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
	switch (key) {
	case 'f':
		ofToggleFullscreen();
		break;
	case 'p':
		player.setPaused(!player.isPaused());
		break;
	default:
		break;
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
