#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);

}

//--------------------------------------------------------------
void ofApp::update(){
    X = mouseX-512;
    Y = mouseY-384;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255, 255, 255);
    ofSetColor(100, 100, 100, 128);
    for (int i = 0; i < 33; i++){
        ofLine(32*i, 0, 32*i, 768);
    }
    for (int i = 0; i < 25; i++){
        ofLine(0, 32*i, 1024, 32*i);
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
    ofLine(512, 384, mouseX, mouseY);
    ofNoFill();
    ofCircle(512, 384, sqrt(X*X+Y*Y));
    ofFill();
    ofCircle(512, 384, sqrt(X*X+Y*Y)/4);
    
    ofSetColor(0, 0, 0, 255);
    ofLine(mouseX, 0, mouseX, 768);
    ofLine(0, mouseY, 1024, mouseY);
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
