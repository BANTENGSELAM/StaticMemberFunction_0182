#include <iostream>
using namespace std;

class Mahasiswa { // membuat class mahasiswa
    public :
            static int nim;// deklarasi variable static yaitu variable nim
            //deklarasi variable member
            int id;
            string nama;

            //deklarasi prosedur setID() dan printAll()
            void setID();
            void printAll();

            //pembuatan contructor Mahasiswa dengan parameter pnama
            Mahasiswa(string pnama) :nama(pnama){
                    setID();
            }
};

// memberi value ke variable nim dari class mahasiswa
int Mahasiswa::nim = 10;