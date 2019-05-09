#include <string>
#include <iostream>
using namespace std;

#ifndef CAESAR_H
#define CAESAR_H

class Caesar
{
	
	private:
		string alphabet; 
		string message = ""; //unused var??
		int shiftKey = 0;
		void shiftAlphabet();
		
		
	public:
		Caesar(const int shiftingKey = 1, const string = "abcdefghijklmnopqrstuvwxyz");
		~Caesar();
		
		void updateShiftKey(const int shiftAmt);
		string encrypt(const string msg)const;
		string decrpyt(const string msg)const;

};


#endif // CAESAR_H
