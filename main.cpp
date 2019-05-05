#include <iostream>
#include "Caesar.h"

using namespace std;

int main()
{
	string msg = "i'm bill gates";
	cout << "Message - " << msg << endl;
	
	Caesar c(5);
	cout << "Message Encrypted - " << c.encrypt(msg) << endl;
	cout << "Encrypted Msg Decrypted - " << c.decrpyt(c.encrypt(msg)) << endl;
	return 0;
}
