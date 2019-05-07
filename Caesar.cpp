#include "Caesar.h"
using namespace std;

Caesar:: Caesar(const int shiftingKey, const string alphabet){
	this->alphabet = alphabet;
	cout << this->alphabet <<endl;
	shiftKey = shiftingKey;
	shiftAlphabet();
}

Caesar:: ~Caesar(){
}

void Caesar:: shiftAlphabet(){
	
	unsigned int alphaSize = alphabet.size();
	string newAlphabet = alphabet;
	
	for (unsigned int i = 0; i < alphaSize; i++){
		unsigned int index = (i + shiftKey) <= (alphaSize-1) ? i+shiftKey : (i+shiftKey) - alphaSize;
		newAlphabet[i] = alphabet[index];
	}
	
	alphabet = newAlphabet;
	
	cout << alphabet << endl;
}

void Caesar:: updateShiftKey(int shiftAmt){
	alphabet = "abcdefghijklmnopqrstuvwxyz";
	shiftKey = shiftAmt;
}

string Caesar:: encrypt(const string msg)const{
	
	unsigned int alphaSize = alphabet.size();
	string msg2 = msg;
	
	for (unsigned int u= 0; u < msg2.size(); u++){
		
		if (isalpha(msg2[u])){
			
			for (unsigned int z = 0; z < alphabet.size(); z++){
				
				if (msg2[u] == alphabet[z]){
					//cout << "index = " << z << "index char =" << alphabet[z] << endl;
					
					//if new letter index is not more than alphabet Indexes use it // if not reset
					unsigned int index = (z + shiftKey) <= (alphaSize-1) ? z+shiftKey : (z+shiftKey)- alphaSize;

					//cout << "new Index = " << index << "new char" << alphabet[index]  <<endl;
					msg2[u] = alphabet[index];
					break;
				}
			}
			
		
		}
	}
	
	return msg2;
}

string Caesar::decrpyt (const string msg)const{
	unsigned int alphaSize = alphabet.size();
	string msg2 = msg;
	
	for (unsigned int u= 0; u < msg2.size(); u++){
		
		if (isalpha(msg2[u])){
			
			for (int z = 0; z < alphaSize; z++){
				
				if (msg2[u] == alphabet[z]){
					//cout << "index = " << z << "index char =" << alphabet[z] << endl;
					unsigned int index = (z - shiftKey) > -1 ? z-shiftKey : ((alphaSize) + ( z-shiftKey));
					//cout << "new Index = " << index << "new char" << alphabet[index]  <<endl;
					msg2[u] = alphabet[index];
					break;
				}
			}
			
		
		}
	}
	
	return msg2;
}
