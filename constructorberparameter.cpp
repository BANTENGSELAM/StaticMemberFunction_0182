#include <iostream>
#include <string> // menyertakan library string
using namespace std;

class mahasiswa {
    public:    
            mahasiswa(int nim, string nama); // constructor dengan parameter
};

//Definisi Constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama){
        cout << "Constructor dengan Parameter terpanggil" << endl;
        cout << "NIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
}

int main (){
    mahasiswa mhs(12345, "Pascal"); // memanggil constructor dengan parameter
    return 0;
}