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
    alamatDetail alamat;
    int umur;
};

int main()
{
    // deklarasi variable struct
    mahasiswa mhs[3];
    for (int i = 0; i <= 2; i++)
    {
    // mengisi data
    cout << "Isikan data nama : ";
    getline(cin,mhs[i].nama);
    cout << "Isikan data kota : ";
    getline(cin, mhs[i].alamat.kota);
    cout << "Isikan data desa : ";
    getline(cin, mhs[i].alamat.desa);
    cout << "Isikan data usia : ";
    cin >> mhs[i].umur;
    cin.ignore();
    }

    for (int i = 0; i <= 2; i++)
    {
    cout << "Data Mahasiswa ke-" << i + 1 << ":" << endl;
    cout << "Nama : " << mhs[i].nama << endl;
    cout << "Alamat : " << mhs[i].alamat.kota << endl;
     cout << "Alamat : " << mhs[i].alamat.desa << endl;
    cout << "Usia : " << mhs[i].umur << endl;
    }
}