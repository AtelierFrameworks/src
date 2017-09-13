#pragma once
#include "ofMain.h"
#include "ofxTrueTypeFontUC.h"
#include <vector>

class Letter
{
public:
	void setup(int _x,int _y,int _count_s);
	void update(int _count_u);
	void draw();

	int alpha;
	int countBorn;
	int countNow;
	int countGap;
	ofxTrueTypeFontUC myFont;
	int num;
	string text;
	int x, y;
};

