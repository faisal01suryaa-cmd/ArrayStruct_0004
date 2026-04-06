#include <iostream>
using namespace std;

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
    cout << "Isikan data alamat : ";
    cin >> mhs.alamat;
    cout << "Isikan data usia : ";
    cin >> mhs.umur;

    

}