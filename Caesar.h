#include <string>
#include <iostream>
using namespace std;

#ifndef CAESAR_H
#define CAESAR_H

class Caesar
{
	
	private:
		string alphabet = "abcdefghijklmnopqrstuvwxyz"; 
		string message = "";
		int shiftKey = 0;
		
		
	public:
		Caesar(int shiftingKey = 1);
		~Caesar();
		void shiftAlphabet();
		void updateShiftKey(int shiftAmt);
		string encrypt(string msg);
		string decrpyt(string msg);

};


#endif // CAESAR_H
