# deklarasi kelas Mahasiswa
class Mahasiswa:

    # constructor
    def __init__(self, nama, nim, prodi, fakultas):
        self.__nama = nama
        self.__nim = nim
        self.__prodi = prodi
        self.__fakultas = fakultas

    # setter nama
    def setNama(self, nama):
        self.__nama = nama

    # setter nim
    def setNim(self, nim):
        self.__nim = nim

    # setter prodi
    def setProdi(self, prodi):
        self.__prodi = prodi

    # setter fakultas
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    # getter nama
    def getNama(self):
        return self.__nama

    # getter nim
    def getNim(self):
        return self.__nim

    # getter prodi
    def getProdi(self):
        return self.__prodi

    # getter fakultas
    def getFakultas(self):
        return self.__fakultas
