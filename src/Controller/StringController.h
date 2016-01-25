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
	string word;
public:
	StringController();
	void setWord(string);
	string getWord();

	void start();
};





#endif /* CONTROLLER_STRINGCONTROLLER_H_ */
