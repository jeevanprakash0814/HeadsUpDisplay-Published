//
//  textList.hpp
//  HeadsUpDisplay
//
//  Created by Jeevan Prakash on 11/24/18.
//  Copyright © 2018 Jeevan Prakash. All rights reserved.
//

#ifndef TEXTLIST_H
#define TEXTLIST_H

#include <stdio.h>
#include <iostream>
#include <string>
#include <sys/time.h>
#include <time.h>
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

using namespace std;
using namespace cv;

class TextList
{
    
public:
    TextList();
    TextList(int x, int y, int scaleTextSize, int r, int g, int b, int alpha);
    Mat drawList(Mat img);
    string editText(string newText);
    void setX(int x);
    int getX();
    void setY(int y);
    int getY();
    void setColor(int r, int g, int b, Mat img);
    Scalar getColor();
    int getStringLength();
    
    
private:
    int _xPos;
    int _yPos;
    int _scaleTextSize;
    int _r;
    int _g;
    int _b;
    int _thickness;
    Mat _img;
    string _text;
    
    
    //std::string categories[5];//I can have a String array with the length of the number of different things I want to display
    //not sure how to add an array member to this header class without already predefining the length of the array...
    
    void _drawText(Mat img);
    void _drawBorder();

    
};

#endif /* textList_hpp */