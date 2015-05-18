#include "Selector.h"

void Selector::setup(ofRectangle rect, int index){
    selecting=false;
    selected=0;
    myIndex=index;
    for(int i=0; i<9; i++){
        rects[i]=ofRectangle(rect.x,(rect.height/9)*i,rect.width,rect.height/9);
    }
    list.setup();
}

void Selector::draw(){
    for(int i=0; i<9; i++){
        ofPushStyle();
        if(i==selected){
            ofSetHexColor(0xFF6600);
            ofFill();
            ofRect(rects[i]);
        }else{
            ofNoFill();
            ofRect(rects[i]);
            ofSetColor(200,200,200,30);
            ofFill();
            ofRect(rects[i]);
        }
        ofPopStyle();
        ofDrawBitmapString(list.files[myIndex][i],rects[i].x+10,rects[i].y+20);
    }
}