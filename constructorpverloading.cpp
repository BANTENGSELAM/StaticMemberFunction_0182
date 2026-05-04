#include <iostream>
#include <string> // menyertakan library string
using namespace std;

class mahasiswa{
        private:
        int nim;
        string nama;
        public:
        mahasiswa();
        mahasiswa(int);
        mahasiswa(string);
        mahasiswa(int iNim, string iNama);
        void cetak();
};

mahasiswa :: mahasiswa (){
}
mahasiswa :: mahasiswa (int iNim){
    nim = iNim; // definisi hanya NIM
}
mahasiswa :: mahasiswa (string iNama){
    nama = iNama; //definisi hanya Nama    
}
mahasiswa :: mahasiswa (int iNim, string iNama){
    nama = iNama; //definisi hanya Nama    
    nim = iNim; // definisi hanya NIM
}

void mahasiswa::cetak(){
    cout << "Nim = " << nim << endl;
    cout << "Nama = " << nama << endl;
}

int main(){
    mahasiswa mhs1 (102030);
    mahasiswa mhs2 ("Andi");
    mahasiswa mhs3 (102030, "Andi");

    //tampilkan nilai
    cout << "Mahasiswa 1:"; mhs1.cetak();
    cout << "Mahasiswa 2:"; mhs2.cetak();
    cout << "Mahasiswa 3:"; mhs3.cetak();
    return 0;
}
