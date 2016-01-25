/*
 * StringController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: bkon4208
 */

#include "StringController.h"
#include <iostream>
#include <string>
using namespace std;

StringController :: StringController()
{
	this -> count = 99;
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
	cout << "In the StringController\'s start method" << endl;
	cout << "Type in anything please" << endl;
	string tempWord;
	string tempWord2;
	cin >> tempWord;
	setWord(tempWord);
	cout << getWord() << " is what you typed" << endl;
	cout << tempWord.size() << " is the size of your word" << endl;
	cout << tempWord[1] << " is the second spot in your word" << endl;
	cout << tempWord.empty() << endl;
	cin >> tempWord2;
	setWord(tempWord2);
	cout << tempWord2 << " is your new word.\n" << endl;
	cout << tempWord2.compare(tempWord) << tempWord2 << " is kind of like " << tempWord << endl;

}


