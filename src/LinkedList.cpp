#include "LinkedList.h"

cTextLine::cTextLine() {
	mTxt = "";
	mNextLine = NULL;
	mPrevLine = NULL;
	length = 0;
	position = 0;
}

cTextLine::cTextLine(string sText) {
	mTxt = sText;
	mNextLine = NULL;
	mPrevLine = NULL;
	length = sText.size();
	position = 0;
}

string cTextLine::getText() {
	return mTxt;
}

int cTextLine::getPos() {
	return position;
}

int cTextLine::getLength() {
	return length;
}

cTextLine* cTextLine::next() {
	return mNextLine;
}

cTextLine* cTextLine::prev() {
	return mPrevLine;
}

void cTextLine::setNext(cTextLine* node) {
	mNextLine = node;
}

void cTextLine::setPrev(cTextLine* node) {
	mPrevLine = node;
}

void cTextLine::AppendText(string sText) {
	mTxt.append(sText);
	length += sText.size();
}

void cTextLine::setText(string sText) {
	mTxt = sText;
	length = sText.size();
}

void cTextLine::InsertAt(string sText, int position) {
	if(mTxt.empty())
		return;
		
	try{
		mTxt.insert(position, sText);
		length += sText.size();
	} catch(exception& exp) {
		cout<<"Error occured at InsertAt position"<<endl;
	}
}

void cTextLine::Remove(int start_position, int end_position) {
	if(mTxt.empty())
		return;
		
	try{
		mTxt.erase(start_position, end_position - start_position + 1);
		length -= end_position - start_position + 1;
	} catch(exception& exp) {
		cout<<"Error occured at InsertAt position"<<endl;
	}
}

cLineList::cLineList() {
	mHead = NULL;
	mTail = NULL;
}

cLineList::cLineList(cTextLine* cNode) {
	mHead = cNode;
	mTail = cNode;
}

void cLineList::InsertNewLineAtLast(cTextLine* node) {
	mTail->setNext(node);
	mTail = node;
}

void cLineList::RemoveLastLine() {
	cTextLine* temp = mHead;
	cTextLine* prev = mHead;

	if(mHead == NULL)
		return;

	while(temp != NULL) {
		prev = temp;
		temp = temp->next();
	}

	prev->setNext(NULL);
	delete(mTail);
	mTail = prev;
}

void cLineList::InsertNewLineAtIndex(int iIndex, cTextLine* node) {
	cTextLine* temp = mHead;

	if(mHead == NULL)
		return;

	while(iIndex != 1 && temp != NULL) {
		temp = temp->next();
	}

	if(iIndex > 1) {
		return;
	}

	node->setNext(temp->next());
	temp->setNext(node);
}

cTextLine* cLineList::getLastLine() {
	return mTail;
}

cTextLine* cLineList::getIndexLine(int iIndex) {
	cTextLine* temp = mHead;

	if(mHead == NULL)
		return NULL;

	while(iIndex != 0 && temp != NULL) {
		temp = temp->next();
	}

	if(iIndex > 0) {
		return NULL;
	}

	return temp;
}

void cLineList::removeIndexLine(int iIndex) {
	cTextLine* temp = mHead, *prev = mHead;

	if(mHead == NULL)
		return;

	while(iIndex != 0 && temp != NULL) {
		prev = temp;
		temp = temp->next();
	}

	if(iIndex > 0) {
		return;
	}

	if(temp == NULL)
		return;
	prev = temp->next();
	delete(temp);
}
