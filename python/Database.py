# import kelas mahasiswa
from Mahasiswa import Mahasiswa

# deklarasi kelas database
class Database:

    # constructor
    def __init__(self) -> None:
        pass

    # method-method public pada kelas :

    # Create mahasiswa : untuk menginstansiasi objek baru dari kelas mahasiswa
    # dengan atribut mahasiswa sebagai parameter, kemudian engembalikan objek baru tersebut.
    def createMahasiswa(self, nama, nim, prodi, fakultas):

        newMhs = Mahasiswa(nama, nim, prodi, fakultas)
        return newMhs

    # Read mahasiswa : untuk menampilkan semua data dari list mahasiswa.
    def readAllMhs(self, mhs):

        print("Format Data : No. NIM - Nama - Prodi - Fakultas")
        print("\n")

        i = 0
        for arr in mhs:
            print(i, ". ")
            print(
                arr.getNim(),
                "-",
                arr.getNama(),
                "-",
                arr.getProdi(),
                "-",
                arr.getFakultas(),
            )

    # Update mahasiswa : untuk memperbarui data pada objek mahasiswa yang telah ada
    # berdasarkan parameter masukan, kemudian mengembalikan objek yang telah diperbarui.
    def updateMhs(self, data_mhs, nama, nim, prodi, fakultas):

        data_mhs.setNama(nama)
        data_mhs.setNim(nim)
        data_mhs.setProdi(prodi)
        data_mhs.setFakultas(fakultas)

        return data_mhs

    # Delete mahasiswa : menghapus satu data/objek mahasiswa dari list.
    def deleteMhs(self, mhs, data_mhs):
        mhs.remove(data_mhs)

        return mhs
