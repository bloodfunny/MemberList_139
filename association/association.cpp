#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
    string nama;
    vector<dokter*> daftar_dokter;

};

int main()
{
    std::cout << "Hello World!\n";
}

