#include <iostream>
using namespace std;

class Mahasiswa{
public:
    int nim;
    string nama;
    float nilai;

    void printData(){
        cout << "Nim :"<< nim <<endl;
        cout << "Nama :"<< nama <<endl;
        cout << "Nim :"<< nilai <<endl;
    }
};

int main(){
    Mahasiswa mhs;

    mhs.nim = 2024014111;
    mhs.nama = "Riza";
    mhs.nilai = 100;

    cout << "Nim :"<< mhs.nim <<endl;
    cout << "Nama :"<< mhs.nama <<endl;
    cout << "Nim :"<< mhs.nilai <<endl;
};