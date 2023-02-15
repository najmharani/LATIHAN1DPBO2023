// library yang digunakan
#include <iostream>
#include <string>

using namespace std;

// deklarasi kelas Mahasiswa
class Mahasiswa
{

    // atribut-atribut private pada kelas :
private:
    string nama;     // atribut nama
    int nim;         // atribut nim
    string prodi;    // atribut prodi
    string fakultas; // atribut fakultas

    // method-method public pada kelas :
public:
    // constructor kosong
    Mahasiswa()
    {
    }

    // constructor dengan parameter
    Mahasiswa(string s, int n, string p, string f)
    {
        this->nama = s;
        this->nim = n;
        this->prodi = p;
        this->fakultas = f;
    }

    // setter nama
    void setNama(string s)
    {
        this->nama = s;
    }

    // setter nim
    void setNim(int n)
    {
        this->nim = n;
    }

    // setter prodi
    void setProdi(string p)
    {
        this->prodi = p;
    }

    // setter fakultas
    void setFakultas(string f)
    {
        this->fakultas = f;
    }

    // getter nama
    string getNama()
    {
        return this->nama;
    }

    // getter nim
    int getNim()
    {
        return this->nim;
    }

    // getter prodi
    string getProdi()
    {
        return this->prodi;
    }

    // getter fakultas
    string getFakultas()
    {
        return this->fakultas;
    }
};