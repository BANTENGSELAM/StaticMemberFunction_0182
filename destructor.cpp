#include <iostream>
using namespace std;

class angka {
    private :
    int *arr;
    int panjang;

    public: 
    angka(int); //constructor
    ~angka();   //Destructor
    void cetakData();
    void isiData();
};

//Definisi Constructor
angka::angka(int i) {
    panjang = i; // Constructor
    arr = new int[i];
    isiData();
}

//Definisi Destructor
angka::~angka() {
    cout << endl; // Desstructor
    cetakData();
    delete[] arr; // membersihkan alokasi arry
    cout << "Alamata Array Sudah Dilepaskan" << endl;
}

