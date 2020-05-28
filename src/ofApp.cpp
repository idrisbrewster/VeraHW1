#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    //gui.setup();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(199, 118, 92);
    ofSetColor(255);
    
    
    
    ofEnableBlendMode(OF_BLENDMODE_MULTIPLY);
    
    ofNoFill();
    ofSetLineWidth(1);

    ofSetRectMode(OF_RECTMODE_CENTER);
    
    //variables
    float translateX = 250;
    float translateY = 282;
    
    ofEnableAlphaBlending();
    
    
    
    ofSeedRandom(mouseX);
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 6; j++){
            
            ofSetColor(223, 202, 201, 150);
            float x = ofMap(i, 0, 5, 100, 600);
            float y = ofMap(j, 0, 4, 100, 476);
            
            ofLog() << mouseX;
            ofLog() << mouseY;
            
            float offset = 12;
            if (i == 1){
                ofBeginShape();
                ofVertex((x + 162) + ofRandom(-offset-5, offset+10), (y + 122) + ofRandom(-offset-5, offset+5));
                ofVertex(((x+86) + 162) + ofRandom(-offset, offset), (y + 122) + ofRandom(-offset, offset));
                ofVertex(((x+86) + 162) + ofRandom(-offset, offset), ((y+86) + 122) + ofRandom(-offset, offset));
                ofVertex((x + 162) + ofRandom(-offset, offset), ((y+86) + 122) + ofRandom(-offset, offset));
                ofEndShape(true);
            }
            
            if (i == 2){
                for (int l = 0; l < 1; l++){
                ofBeginShape();
                ofVertex((x + 162) + ofRandom(-offset-5, offset+10), (y + 122) + ofRandom(-offset-5, offset+5));
                ofVertex(((x+86) + 162) + ofRandom(-offset, offset), (y + 122) + ofRandom(-offset, offset));
                ofVertex(((x+86) + 162) + ofRandom(-offset, offset), ((y+86) + 122) + ofRandom(-offset, offset));
                ofVertex((x + 162) + ofRandom(-offset, offset), ((y+86) + 122) + ofRandom(-offset, offset));
                ofEndShape(true);
                }
            }
            
            if (i == 3){
                for (int l = 0; l < 4; l++){
                ofBeginShape();
                ofVertex((x + 162) + ofRandom(-offset-5, offset+10), (y + 122) + ofRandom(-offset-5, offset+5));
                ofVertex(((x+86) + 162) + ofRandom(-offset, offset), (y + 122) + ofRandom(-offset, offset));
                ofVertex(((x+86) + 162) + ofRandom(-offset, offset), ((y+86) + 122) + ofRandom(-offset, offset));
                ofVertex((x + 162) + ofRandom(-offset, offset), ((y+86) + 122) + ofRandom(-offset, offset));
                ofEndShape(true);
                }
            }
            
            if (i == 4){
                for (int l = 0; l < 11; l++){
                ofBeginShape();
                ofVertex((x + 162) + ofRandom(-offset-5, offset+10), (y + 122) + ofRandom(-offset-5, offset+5));
                ofVertex(((x+86) + 162) + ofRandom(-offset, offset), (y + 122) + ofRandom(-offset-5, offset+10));
                ofVertex(((x+86) + 162) + ofRandom(-offset, offset), ((y+86) + 122) + ofRandom(-offset-5, offset+10));
                ofVertex((x + 162) + ofRandom(-offset, offset), ((y+86) + 122) + ofRandom(-offset, offset));
                ofEndShape(true);
                }
            }
            
            if (i == 5){
                for (int l = 0; l < 24; l++){
                    
                ofSetColor(223, 202, 201);
                ofBeginShape();
                ofVertex((x + 162) + ofRandom(-offset-5, offset+10), (y + 122) + ofRandom(-offset-6, offset+11));
                ofVertex(((x+86) + 162) + ofRandom(-offset, offset), (y + 122) + ofRandom(-offset - 6, offset +11));
                ofVertex(((x+86) + 162) + ofRandom(-offset, offset), ((y+86) + 122) + ofRandom(-offset-5, offset+10));
                ofVertex((x + 162) + ofRandom(-offset, offset), ((y+86) + 122) + ofRandom(-offset, offset));
                ofEndShape(true);
                }
            }
            
            if (i == 6){
                for (int l = 0; l < 5; l++){
                ofBeginShape();
                ofVertex((x + 162) + ofRandom(-offset-5, offset+10), (y + 122) + ofRandom(-offset-5, offset+10));
                ofVertex(((x+86) + 162) + ofRandom(-offset, offset), (y + 122) + ofRandom(-offset, offset));
                ofVertex(((x+86) + 162) + ofRandom(-offset, offset), ((y+86) + 122) + ofRandom(-offset-5, offset+10));
                ofVertex((x + 162) + ofRandom(-offset, offset), ((y+86) + 122) + ofRandom(-offset, offset));
                ofEndShape(true);
                }
            }
            
            if (i == 7){
                for (int l = 0; l < 1; l++){
                    
                ofBeginShape();
                ofVertex((x + 162) + ofRandom(-offset-5, offset+10), (y + 122) + ofRandom(-offset-5, offset+10));
                ofVertex(((x+86) + 162) + ofRandom(-offset, offset), (y + 122) + ofRandom(-offset, offset));
                ofVertex(((x+86) + 162) + ofRandom(-offset, offset), ((y+86) + 122) + ofRandom(-offset-5, offset+10));
                ofVertex((x + 162) + ofRandom(-offset, offset), ((y+86) + 122) + ofRandom(-offset, offset));
                ofEndShape(true);
                }
            }
            
            ofBeginShape();
            ofVertex((x + 162) + ofRandom(-offset, offset), (y + 122) + ofRandom(-offset, offset));
            ofVertex(((x+86) + 162) + ofRandom(-offset, offset), (y + 122) + ofRandom(-offset, offset));
            ofVertex(((x+86) + 162) + ofRandom(-offset, offset), ((y+86) + 122) + ofRandom(-offset, offset));
            ofVertex((x + 162) + ofRandom(-offset, offset), ((y+86) + 122) + ofRandom(-offset, offset));
            ofEndShape(true);
        }
        
        ofDisableAlphaBlending();
    }
    
//    ofSetColor(0);
//    ofNoFill();
//    ofSetLineWidth(2);
//    ofSetRectMode(OF_RECTMODE_CENTER);
//
//    ofSeedRandom(mouseX);
//    for (int i = 0; i < 5; i++){
//        for (int j = 0; j < 5; j++){
//            float x = ofMap(i, 0, 4, 100, 700);
//            float y = ofMap(j, 0, 4, 100, 700);
//
//            for (int k = 0; k < 10; k++){
//                float width = ofMap(k, 0, 9, 5, 144);
//
//                if(ofRandom(0,1) < 0.95){
//                ofDrawRectangle(x, y, width, width);
//                }
//            }
//
//        }
//    }
    
    
    
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
