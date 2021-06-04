#include "ofApp.h"

int background = 0;
int play = 1000;
int growth = 0;
int w = 0; 
int r = 0;
int ww = 0;
int rr = 0;
int tt = 0;
int gt = 0;
int wdraw = 0;
int rdraw = 0;
int bands = 512;
int glow = 0;
int k = 0;
int kk = 0;


//--------------------------------------------------------------
void ofApp::setup() {
    home = 0;
    ofBackground(135, 206, 235);
    cloud.load("cloud.png");
    read.load("read.png");
    big.load("big.png");
    date.load("date.png");
    water.load("water.png");
    small.load("small.png");
    tree.load("tree.png");
    grass.load("grass.png");
    heart.load("heart.png");
    swater.setMultiPlay(true);
    swater.load("water.mp3");   
    swater.setVolume(0.5);
    sound1.setMultiPlay(true);
    sound1.load("grow.mp3");
    sound2.setMultiPlay(true);
    sound2.load("nature.mp3");
    sound3.setMultiPlay(true);
    sound3.load("final.mp3");
    sound4.setMultiPlay(true);
    sound4.load("read.mp3");
}

//--------------------------------------------------------------
void ofApp::update() {
    ofSoundUpdate(); // update the sound playing system:
}

//--------------------------------------------------------------
void ofApp::draw() {
    float elapsedtime = ofGetElapsedTimef(); // get float time system has been running
    time = int(elapsedtime);  // time running in int 

        if (home == 0) {
            if (play == 1000) {
                sound2.play();
                sound2.setLoop(true);
                ofBackground(135, 206, 235, 255);
                play = 0;
            }

            ofNoFill();

            for (int i = 0; i < ofGetScreenWidth(); i += 600) {
                cloud.draw(i - 20, 20);
                cloud.draw(i + 300, 120);
            }

            if (ww != w and time > tt and kk != k) {
                growth = ww / 2;
                ww = w+r;
                w = ww;
                rr = ww;
                tt = time + 2;
                swater.play();
                kk = k;
                wdraw = 1;
            }

            if (rr != r and time > tt and kk != k) {
                growth = rr / 2;
                rr = r+w;
                r = rr; 
                ww = rr;
                tt = time + 4;
                rdraw = 1;
                kk = k;
                sound4.setVolume(0.4);
                sound4.play();
            }

            if (time < tt) {
                if (wdraw == 1) {
                    water.draw(900, 700);
                    rdraw = 0;
                }
                else {
                    read.draw(400, 760);
                    wdraw = 0;
                }
            }
            else {
                wdraw = 0;
                rdraw = 0;
            }
            
            if (growth == 0) {
                big.draw(900, 1000);
                big.draw(900, 950);
                big.draw(900, 900);
                tree.draw(800, 800);
            }

            else if (growth == 1) {
                if (play == 0) {
                    sound1.play();
                    play = 1;
                    gt = time + 2;
                }
                if (time < gt) {
                    heart.draw(1100, 500);
                }

                big.draw(900, 1000);
                big.draw(900, 950);
                big.draw(900, 900);
                big.draw(900, 850);
                tree.draw(800, 750);
                grass.draw(750, 970);
            }

            else if (growth == 2) {
                if (play == 1) {
                    sound1.play();
                    play = 0;
                    gt = time + 2;
                }
                if (time < gt) {
                    heart.draw(1100, 500);
                }
                
                big.draw(900, 1000);
                big.draw(900, 950);
                big.draw(900, 900);
                big.draw(900, 850);
                big.draw(900, 800);
                tree.draw(800, 700);
                grass.draw(750, 970);
            }

            else if (growth == 3) {
                if (play == 0) {
                    sound1.play();
                    play = 1;
                    gt = time + 2;
                }
                if (time < gt) {
                    heart.draw(1100, 500);
                }
                
                big.draw(900, 1000);
                big.draw(900, 950);
                big.draw(900, 900);
                big.draw(900, 850);
                big.draw(900, 800);
                big.draw(900, 750);
                tree.draw(800, 650);
                grass.draw(750, 970);
            }

            else if (growth == 4) {
                if (play == 1) {
                    sound1.play();
                    play = 0;
                    gt = time + 2;
                }
                if (time < gt) {
                    heart.draw(1100, 500);
                }

                big.draw(900, 1000);
                big.draw(900, 950);
                big.draw(900, 900);
                big.draw(900, 850);
                big.draw(900, 800);
                big.draw(900, 750);
                big.draw(900, 700);
                tree.draw(800, 600);
                grass.draw(750, 970);
            }

            else if (growth == 5) {
                if (play == 0) {
                    sound1.play();
                    play = 1;
                    gt = time + 2;
                }
                if (time < gt) {
                    heart.draw(1100, 500);
                }
                
                big.draw(900, 1000);
                big.draw(900, 950);
                big.draw(900, 900);
                big.draw(900, 850);
                big.draw(900, 800);
                big.draw(900, 750);
                big.draw(900, 700);
                big.draw(900, 650);
                tree.draw(800, 550);
                grass.draw(750, 970);
            }

            else if (growth == 6) {
                if (play == 1) {
                    sound1.play();
                    play = 0;
                    gt = time + 2;
                }
                if (time < gt) {
                    heart.draw(1100, 500);
                }
                
                big.draw(900, 1000);
                big.draw(900, 950);
                big.draw(900, 900);
                big.draw(900, 850);
                big.draw(900, 800);
                big.draw(900, 750);
                big.draw(900, 700);
                big.draw(900, 650);
                big.draw(900, 600);
                tree.draw(800, 500);
                grass.draw(750, 970);
            }

            else if (growth == 7) {
                if (play == 0) {
                    sound1.play();
                    play = 1;
                    gt = time + 2;
                }
                if (time < gt) {
                    heart.draw(1100, 500);
                }
                
                big.draw(900, 1000);
                big.draw(900, 950);
                big.draw(900, 900);
                big.draw(900, 850);
                big.draw(900, 800);
                big.draw(900, 750);
                big.draw(900, 700);
                big.draw(900, 650);
                big.draw(900, 600);
                big.draw(900, 550);
                tree.draw(800, 450);
                grass.draw(750, 970);
            }

            else if (growth == 8) {
                if (play == 1) {
                    sound1.play();
                    play = 0;
                    gt = time + 2;
                }
                if (time < gt) {
                    heart.draw(1100, 500);
                }
                
                big.draw(900, 1000);
                big.draw(900, 950);
                big.draw(900, 900);
                big.draw(900, 850);
                big.draw(900, 800);
                big.draw(900, 750);
                big.draw(900, 700);
                big.draw(900, 650);
                big.draw(900, 600);
                big.draw(900, 550);
                tree.draw(800, 450);
                grass.draw(750, 970);
            }

            else if (growth == 9) {
                if (play == 0) {
                    sound1.play();
                    play = 1;
                    gt = time + 2;
                }
                if (time < gt) {
                    heart.draw(1100, 500);
                }
                
                big.draw(900, 1000);
                big.draw(900, 950);
                big.draw(900, 900);
                big.draw(900, 850);
                big.draw(900, 800);
                big.draw(900, 750);
                big.draw(900, 700);
                big.draw(900, 650);
                big.draw(900, 600);
                big.draw(900, 550);
                big.draw(900, 500);
                tree.draw(800, 400);
                grass.draw(750, 970);
            }

            else if (growth >= 10) {
                if (growth == 10) {
                    sound1.play();
                    play = 1;
                    sound3.play();
                    growth = 11;
                }

                heart.draw(1100, 500);
                heart.draw(100, 200);
                heart.draw(200, 800);
                heart.draw(300, 500);
                heart.draw(700, 150);
                heart.draw(900, 700);
                heart.draw(1300, 100);
                heart.draw(1500, 800);
                
                big.draw(900, 1000);
                big.draw(900, 950);
                big.draw(900, 900);
                big.draw(900, 850);
                big.draw(900, 800);
                big.draw(900, 750);
                big.draw(900, 700);
                big.draw(900, 650);
                big.draw(900, 600);
                big.draw(900, 550);
                big.draw(900, 500);
                big.draw(900, 450);
                date.draw(920, 420);
                date.draw(870, 460);
                tree.draw(800, 350);
                grass.draw(750, 970);
            }
        }
    }


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'w') {
        w = w + 1;
        tt = time;
        k = k + 1;
    }
    if (key == 'r') {
        r = r + 1;
        tt = time;
        k = k + 1;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}


//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
    mousex = x;
    mousey = y;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    click = true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    click = false;
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
