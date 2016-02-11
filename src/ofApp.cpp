#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    X = mouseX-W;
    Y = mouseY-H;
    W = ofGetWidth()/2;
    H = ofGetHeight()/2;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255, 255, 255);
    ofSetColor(100, 100, 100, 128);
    for (int i = 0; i < ofGetWidth(); i++){
        ofLine(i*ofGetWidth()/30, 0, i*ofGetWidth()/30, ofGetHeight());
    }
    for (int i = 0; i < ofGetHeight(); i++){
        ofLine(0, i*ofGetWidth()/30, ofGetWidth(), i*ofGetWidth()/30);
    }
    double a = atan2(-Y ,X);
    float b = a*180/PI;
    ofColor color;
    if(b > 0){
        color.setHsb(b*255/360, 255, 255);
    }else {
        color.setHsb((b+360)*255/360, 255, 255);
    }
    ofSetColor(color);
    ofLine(W, H, mouseX, mouseY);
    ofNoFill();
    ofCircle(W, H, sqrt(X*X+Y*Y));
    ofFill();
    ofCircle(W, H, sqrt(X*X+Y*Y)/4);
    
    ofSetColor(0, 0, 0, 255);
    ofLine(mouseX, 0, mouseX, ofGetHeight());
    ofLine(0, mouseY, ofGetWidth(), mouseY);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
