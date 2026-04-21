#include <iostream>
using namespace std;

class barang{
    public:
        string nama;
        int jumlah;
        string kategori;
        string tanggalProduksi;
        void tampilSpek(){
            cout << "nama barang : " << nama << endl;
            cout << "jumlah barang : " << jumlah << endl;
            cout << "kategori barang : " << kategori << endl;
            cout << "tanggal produksi : " << tanggalProduksi << endl;

        }
};

int main(){

    barang elektronik;
    barang nonElectronik;

    elektronik.nama = "Laptop";
    elektronik.jumlah = 1;
    elektronik.kategori = "elektronik";
    elektronik.tanggalProduksi = "1945-08-17";
    elektronik.tampilSpek();
        
    cout << endl;

    nonElectronik.nama = "supersemar";
    nonElectronik.jumlah = 1;
    nonElectronik.kategori = "nonelEctronic";
    nonElectronik.tanggalProduksi = "1970-03-11";
    nonElectronik.tampilSpek();
}