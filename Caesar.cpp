#include "Caesar.h"
using namespace std;

Caesar:: Caesar(int shiftingKey){
	cout << alphabet <<endl;
	shiftKey = shiftingKey;
	shiftAlphabet();
}

Caesar:: ~Caesar(){
}

void Caesar:: shiftAlphabet(){
	
	int alphaSize = alphabet.size();
	string newAlphabet = alphabet;
	int index = 0;
	
	for (int i = 0; i < alphaSize; i++){
		
		if ( (i + shiftKey) <= (alphaSize-1) ){
			index = i+shiftKey;
		}
		
		else{
			index = (( i+shiftKey)- alphaSize );
		}
		
		newAlphabet[i] = alphabet[index];
	}
	
	alphabet = newAlphabet;
	
	cout << alphabet << endl;
}

void Caesar:: updateShiftKey(int shiftAmt){
	alphabet = "abcdefghijklmnopqrstuvwxyz";
	shiftKey = shiftAmt;
}

string Caesar:: encrypt(string msg){
	
	int index = 0;
	int alphaSize = alphabet.size();
	string msg2 = msg;
	
	for (int u= 0; u < msg2.size(); u++){
		
		if (isalpha(msg2[u])){
			
			for (int z = 0; z < alphabet.size(); z++){
				
				if (msg2[u] == alphabet[z]){
					//cout << "index = " << z << "index char =" << alphabet[z] << endl;
					
					
					//if new letter index is not more than alphabet Indexes
					if ( (z + shiftKey) <= (alphaSize-1) ){
						index = z+shiftKey;
						
					}
		
					else{
						index = (( z+shiftKey)- alphaSize );
					
					}
					//cout << "new Index = " << index << "new char" << alphabet[index]  <<endl;
					msg2[u] = alphabet[index];
					break;
				}
			}
			
		
		}
	}
	
	return msg2;
}

string Caesar::decrpyt (string msg){
	int index = 0;
	int alphaSize = alphabet.size();
	string msg2 = msg;
	
	for (int u= 0; u < msg2.size(); u++){
		
		if (isalpha(msg2[u])){
			
			for (int z = 0; z < alphabet.size(); z++){
				
				if (msg2[u] == alphabet[z]){
					//cout << "index = " << z << "index char =" << alphabet[z] << endl;
					if ( (z - shiftKey) > -1 ){
						index = z-shiftKey;
						
					}
		
					else{
						index = ((alphaSize) + ( z-shiftKey));
					
					}
					//cout << "new Index = " << index << "new char" << alphabet[index]  <<endl;
					msg2[u] = alphabet[index];
					break;
				}
			}
			
		
		}
	}
	
	return msg2;
}