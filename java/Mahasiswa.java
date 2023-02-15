// deklarasi kelas mahasiswa
public class Mahasiswa {

    // atribut-atribut private pada kelas :
    private String nama;
    private int nim;
    private String prodi;
    private String fakultas;

    // constructor kosong
    public Mahasiswa() {

    }

    // constructor dengan parameter
    public Mahasiswa(String nama, int nim, String prodi, String fakultas) {
        this.nama = nama;
        this.nim = nim;
        this.prodi = prodi;
        this.fakultas = fakultas;
    }

    // setter nama
    public void setNama(String nama) {
        this.nama = nama;
    }

    // setter nim
    public void setNim(int nim) {
        this.nim = nim;
    }

    // setter prodi
    public void setProdi(String prodi) {
        this.prodi = prodi;
    }

    // setter fakultas
    public void setFakultas(String fakultas) {
        this.fakultas = fakultas;
    }

    // getter nama
    public String getNama() {
        return nama;
    }

    // getter nim
    public int getNim() {
        return nim;
    }

    // getter prodi
    public String getProdi() {
        return prodi;
    }

    // getter fakultas
    public String getFakultas() {
        return fakultas;
    }

}
