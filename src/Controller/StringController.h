/*
 * StringController.h
 *
 *  Created on: Jan 25, 2016
 *      Author: bkon4208
 */
#include <string>
using namespace std;
#ifndef CONTROLLER_STRINGCONTROLLER_H_
#define CONTROLLER_STRINGCONTROLLER_H_

class StringController
{
private:
	int count;
	string word;
public:
	StringController();
	void setWord(string);
	string getWord();
	int getSize();
	void start();
};





#endif /* CONTROLLER_STRINGCONTROLLER_H_ */
