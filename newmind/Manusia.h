#ifndef Manusia_h
#define Manusia_h
using namespace std;

class manusia {
public:
	string name;
	Jantung  varJantung;

	manusia(string pnama)
		: name(pNmae) {
		cout << name << "hidup\n";

	}
	~manusia() {
		cout << name << " mati\n";
	}
};
#endif