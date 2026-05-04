#include <iostream>
using namespace std;

class mahasiswa {
    public : 
        mahasiswa(); // contructor
};

mahasiswa::mahasiswa(){
    cout << "Contructor Terpanggil" << endl; //Definisi constructor
};

int main () {
    mahasiswa mhs; //pembuatan object
    return 0;
}