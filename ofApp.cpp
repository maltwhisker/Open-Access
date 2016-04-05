#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	//sender.setup(HOST, PORT);

	//Setup browser render and specify URL
	_browser.setup(ofGetWidth(), ofGetHeight(), "ofxAwesomiumPlus");
	_browser.loadURL("http://randomstreetview.com/#fullscreen");

	//Setup postprocessing and create effect pass
	post.init(ofGetWidth(), ofGetHeight());
	post.createPass<PixelatePass>();

}

//--------------------------------------------------------------
void ofApp::update(){

    _browser.update();

	ofSetWindowTitle("Open Access");

	/*std::stringstream strm;
	strm << "fps: " << ofGetFrameRate();
	ofSetWindowTitle(strm.str());

	//ofxOscMessage m;

	if (_browser.update()) {

		// Load pixels from Browser into Image A
		ofxCvColorImage imageA;
		imageA.setFromPixels(_browser.getFrame().getPixels(), ofGetWidth(), ofGetHeight());
		ofxCvColorImage imageB;
		imageB.allocate(192, 108);

		// Scale down Image A into Image B
		imageB.scaleIntoMe(imageA);

		// Loop through Image B to get the pixel data                  
		int w = ofGetWidth() / 10;
		int h = ofGetHeight() / 10;
		int bpp = 3;

		for (int col = 0; col < w; col++) {
			for (int row = 0; row >= 0; row--) {
				int base = (row * w + col) * bpp;
				unsigned char red = pixels[base];
				unsigned char green = pixels[base + 1];
				unsigned char blue = pixels[base + 2];

				// Add RGB data to outgoing OSC message
				m.setAddress(string(MESSAGE));
				m.addFloatArg((float)red);
				m.addFloatArg((float)green);
				m.addFloatArg((float)blue);
				sender.sendMessage(m, false);
			}
		}
	}*/
}

//--------------------------------------------------------------
void ofApp::draw(){

	post.begin();
    ofSetColor(255);
    _browser.draw(0, 0);
	post.end();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    _browser.keyPressed(key);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    _browser.keyReleased(key);
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    _browser.mouseMoved(x, y);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    _browser.mouseDragged(x, y, button);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    _browser.mousePressed(x, x, button);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    _browser.mouseReleased(x, y, button);
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseScrolled(float x, float y) {
    _browser.mouseScrolled(x, y);
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    _browser.windowResized(w, h);
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
