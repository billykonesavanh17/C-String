/*
 * StringController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: bkon4208
 */

#include "StringController.h"
#include "iostream"
#include <string>
using namespace std;

StringController :: StringController()
{
	this -> word = "";
}

void StringController :: setWord(string word)
{
	this -> word = word;
}

string StringController :: getWord()
{
	return this -> word;
}

void StringController :: start()
{
	cout << "In the SillyAppController\'s start method" << endl;
	cout << getWord() << " is the count right now" << endl;
	cout << "Type in a new value for count please" << endl;
	string tempWord;
	cin >> tempWord;
	setWord(tempWord);
	cout << getWord() << " is the updated count" << endl;

}


