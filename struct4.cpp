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
    cout << "Data Mahasiswa" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat.kota << endl;
     cout << "Alamat : " << mhs.alamat.desa << endl;
    cout << "Usia : " << mhs.umur << endl;

}