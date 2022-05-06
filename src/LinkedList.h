#include<iostream>
#include<string>

using namespace std;

class cTextLine {
	
private:
	string mTxt;
	cTextLine* mNextLine, *mPrevLine;
	int length, position;

public:
	cTextLine(); // done
	cTextLine(string sText); // done
	
	string getText(); // done
	int getPos(); // done
	int getLength(); // done

	cTextLine* next(); // done
	cTextLine* prev(); // done
	void setNext(cTextLine* node); // done
	void setPrev(cTextLine* node); // done

	void AppendText(string sText); // done
	void setText(string sText); // done
	void InsertAt(string sText, int position); // done
	void Remove(int start_position, int end_position); // done
};

class cLineList {
	cTextLine* mHead, * mTail;
	
public:
	cLineList(); // done
	cLineList(cTextLine* cNode); // done
	void InsertNewLineAtLast(cTextLine* node); // done
	void RemoveLastLine(); // done
	void InsertNewLineAtIndex(int iIndex, cTextLine* node); //done
	cTextLine* getLastLine(); // done
	cTextLine* getIndexLine(int iIndex); // done
	void removeIndexLine(int iIndex); // done
};
