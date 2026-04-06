#include <iostream>
using namespace std;


struct alamatDetail
{
    string desa;
    string kota;
};

struct mahasiswa
{
    string nama;
    string alamat;
    int umur;
};

int main()
{
    // deklarasi variable struct
    mahasiswa mhs;

    // mengisi data
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
    cout << "Isikan data kota : ";
    cin >> mhs.alamat.kota;
    cout << "Isikan data desa : ";
    cin >> mhs.alamat.desa;
    cout << "Isikan data usia : ";
    cin >> mhs.umur;

    cout << "Data Mahasiswa" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat.kota << endl;
     cout << "Alamat : " << mhs.alamat.desa << endl;
    cout << "Usia : " << mhs.umur << endl;

}