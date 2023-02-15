// include kelas database
#include "Database.cpp"

int main()
{
    int stop = 0; // untuk menandai berhentinya program, 0 untuk masih berjalan, dan 1 untuk berhenti

    // variabel untuk menampung sementara masukan data mahasiswa dari user
    string nama, prodi, fakultas;
    int nim;

    list<Mahasiswa> mhs;           // list of mahasiswa
    list<Mahasiswa>::iterator itr; // iterator untuk list mahasiswa

    Database op; // instansiasi objek op (operation) dari kelas database

    // perulangan program database mahasiswa
    while (stop == 0)
    {
        int input = 0; // input nomor menu dari user
        int nomor;     // nomor data yang dipilih

        // daftar menu program
        cout << "=== Database Mahasiswa ===" << endl;
        cout << endl;
        cout << "Pilihan menu :" << endl;
        cout << "1. Create New Data Mahasiswa" << endl;
        cout << "2. Show All Data Mahasiswa" << endl;
        cout << "3. Update Data Mahasiswa" << endl;
        cout << "4. Delete Data Mahasiswa" << endl;
        cout << "5. Keluar Program" << endl;
        cout << endl;

        // meminta masukan nomor perintah
        cout << "Pilih Nomor Menu : ";
        cin >> input;

        if (input == 2) // jika perintahnya adalah menampilkan semua data mahasiswa dalam list
        {
            // menggunakan method read data dari kelas database melalui objek op
            op.readAllMhs(mhs);
        }
        else if (input == 4) // jika perintahnya adalah menghapus semua data mahasiswa dalam list
        {
            op.readAllMhs(mhs); // menampilkan data mahasiswa yang ada dalam list

            // meminta masukan nomor data yang ingin dihapus
            cout << "Pilih Nomor Data : ";
            cin >> nomor;

            // mencari alamat data tersebut
            itr = mhs.begin();
            for (int i = 1; i < nomor; i++)
            {
                itr++;
            }

            // menggunakan method dari kelas database melalui objek op untuk menghapus objek
            op.deleteMhs(mhs, itr);
        }
        else if (input == 5) // jika perintahnya adalah keluar dari program
        {
            stop = 1; // tandai berhenti pada stop
        }
        else // jika perintahnya adalah create atau update data mahasiswa
        {
            if (input == 3) // jika perintahnya update
            {
                op.readAllMhs(mhs); // menampilkan data mahasiswa yang ada dalam list

                // meminta masukan nomor data yang ingin di-update
                cout << "Pilih Nomor Data : ";
                cin >> nomor;

                // mencari alamat data tersebut
                itr = mhs.begin();
                for (int i = 1; i < nomor; i++)
                {
                    itr++;
                }
            }

            // meminta masukan data mahasiswa
            cout << "== Input Data ==" << endl;
            cout << endl;
            cout << "Nama     : ";
            cin >> nama;
            cout << "NIM      : ";
            cin >> nim;
            cout << "Prodi    : ";
            cin >> prodi;
            cout << "Fakultas : ";
            cin >> fakultas;

            if (input == 1) // jika perintahnya untuk create data baru mahasiswa
            {
                // masukkan objek yang di-return dari method createMhs ke dalam list mahasiswa
                mhs.push_back(op.createMhs(nama, nim, prodi, fakultas));
            }
            else // jika perintahnya untuk update data baru mahasiswa
            {
                // objek yang di-return dari method updateMhs di assign ke alamat data yang dipilih sebelumnya
                *itr = op.updateMhs(*itr, nama, nim, prodi, fakultas);
            }
        }
    }

    return 0;
}