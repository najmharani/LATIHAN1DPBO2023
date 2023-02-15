#include "Mahasiswa.cpp" // include kelas Mahasiswa
#include <list>          // include library list untuk list mahasiswa

using namespace std;

// deklarasi kelas database
// kelas ini berisi operasi yang dapat dilakukan pada daftar data mahasiswa
class Database
{

    // method-method public pada kelas :
public:
    // constructor kosong
    Database()
    {
    }

    /* Create mahasiswa : untuk menginstansiasi objek baru dari kelas mahasiswa
    dengan atribut mahasiswa sebagai parameter, kemudian engembalikan objek baru tersebut. */
    Mahasiswa createMhs(string nama, int nim, string prodi, string fakultas)
    {
        Mahasiswa newMhs(nama, nim, prodi, fakultas);

        return newMhs;
    }

    /* Read mahasiswa : untuk menampilkan semua data dari list mahasiswa. */
    void readAllMhs(list<Mahasiswa> mhs)
    {
        cout << "Format Data : No. NIM - Nama - Prodi - Fakultas" << endl;
        cout << endl;

        int i = 0;
        for (Mahasiswa arr : mhs)
        {
            cout << ++i << ". ";
            cout << arr.getNim() << " - " << arr.getNama() << " - " << arr.getProdi() << " - " << arr.getFakultas() << endl;
        }
    }

    /* Update mahasiswa : untuk memperbarui data pada objek mahasiswa yang telah ada
    berdasarkan parameter masukan, kemudian mengembalikan objek yang telah diperbarui. */
    Mahasiswa updateMhs(Mahasiswa mhs, string nama, int nim, string prodi, string fakultas)
    {
        mhs.setNama(nama);
        mhs.setNim(nim);
        mhs.setProdi(prodi);
        mhs.setFakultas(fakultas);

        return mhs;
    }

    /* Delete mahasiswa : menghapus satu data/objek mahasiswa dari list. */
    void deleteMhs(list<Mahasiswa> listMhs, list<Mahasiswa>::iterator itr)
    {
        listMhs.erase(itr);
    }

    // destructor
    ~Database()
    {
    }
};