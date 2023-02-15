# import kelas database
from Database import Database

# untuk menandai berhentinya program, 0 untuk masih berjalan, dan 1 untuk berhenti
stop = 0

# list of mahasiswa
mhs = []

# instansiasi objek op (operation) dari kelas database
op = Database()

# perulangan program database mahasiswa
while stop == 0:

    # nomor data yang dipilih
    nomor = 0

    # daftar menu program
    print("=== Database Mahasiswa ===")
    print("\n")
    print("Pilihan Menu :")
    print("1. Create New Data Mahasiswa")
    print("2. Show All Data Mahasiswa")
    print("3. Update Data Mahasiswa")
    print("4. Delete Data Mahasiswa")
    print("5. Keluar")

    # meminta masukan nomor perintah
    print("Pilih Nomor Menu : ")
    masukan = int(input())

    # jika perintahnya adalah menampilkan semua data mahasiswa dalam list
    if masukan == 2:

        # menggunakan method read mahasiswa dari kelas database melalui objek op
        op.readAllMhs(mhs)

    # jika perintahnya adalah menghapus semua data mahasiswa dalam list
    elif masukan == 4:

        # menampilkan data mahasiswa yang ada dalam list
        op.readAllMhs(mhs)

        # meminta masukan nomor data yang ingin dihapus
        print("Pilih Nomor Data : ")
        nomor = int(input())

        # menggunakan method delete mahasiswa dari kelas database melalui objek op untuk menghapus objek
        op.deleteMhs(mhs, mhs[(nomor - 1)])

    # jika perintahnya adalah keluar dari program
    elif masukan == 5:

        # tandai berhenti pada stop
        stop = 1

    # jika perintahnya adalah create atau update data mahasiswa
    else:

        # jika perintahnya update
        if masukan == 3:

            # menampilkan data mahasiswa yang ada dalam list
            op.readAllMhs(mhs)

            # meminta masukan nomor data yang ingin di-update
            print("Pilih Nomor Data : ")
            nomor = int(input())

        # meminta masukan data mahasiswa
        print("== Input Data ==")
        print("\n")
        print("Nama :")
        nama = input()
        print("NIM :")
        nim = input()
        print("Prodi :")
        prodi = input()
        print("Fakultas :")
        fakultas = input()

        # jika perintahnya untuk create data baru mahasiswa
        if masukan == 1:

            # masukkan objek yang di-return dari method createMhs ke dalam list mahasiswa
            mhs.append(op.createMahasiswa(nama, nim, prodi, fakultas))

        # jika perintahnya untuk update data baru mahasiswa
        elif masukan == 3:

            # update data mahasiswa yang dipilih melalui method pada objek op
            mhs[nomor - 1] = op.updateMhs(mhs[nomor - 1], nama, nim, prodi, fakultas)
