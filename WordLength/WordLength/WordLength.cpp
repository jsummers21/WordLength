// WordLength.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main()
{
	string strWord = " ";
	
	cout << "Type a word to count its letters: " << endl;
	
	cin >> strWord;

	cin.clear();
	cin.ignore(10, '\n');
	getline(cin, strWord);

	cout << "Word: " << strWord << endl;
	cout << "Word Length: " << strWord.length() << endl;
	
	
	

    return 0;
}

