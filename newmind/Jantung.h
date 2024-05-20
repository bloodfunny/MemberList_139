#ifndef Jantung_H
#define Jantung_H
using namespace std;
#include <iostream>

class jantung {
public:
	jantung() {
		cout << "jantung dihidupkan\n";
	}
	~jantung() {
		cout << "Jantung dimatikan\n";
	}

};
#endif