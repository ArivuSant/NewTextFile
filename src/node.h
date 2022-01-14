#include<iostream>
#include<string>

using namespace std;

class cTextLine {
	
private:
	string mTxt;
	cTextLine* mNextLine, mPrevLine;
	int position;

public:
	cTextLine();
	string getText();
	int getPos();

	cTextLine* next();
	cTextLine* prev();

	void AppendText(string sText);
	void setText(string sText);
};

class cLineList {
	cTextLine* mHead;
	
public:
	int InsertNewLine(cTextLine* node);
	int RemoveLastLine();
	cTextLine* getLastLine();
	cTextLine* getIndexLine(int iIndex);
	cTextLine* 
};