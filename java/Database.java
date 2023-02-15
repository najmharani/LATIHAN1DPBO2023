
// import library yang dibutuhkan
import java.util.ArrayList;

// deklaraasi kelas database
public class Database {

    // constructor kosong
    public Database() {
    }

    // method-method public pada kelas :

    /*
     * Create mahasiswa : untuk menginstansiasi objek baru dari kelas mahasiswa
     * dengan atribut mahasiswa sebagai parameter, kemudian engembalikan objek baru
     * tersebut.
     */
    public Mahasiswa createMhs(String nama, int nim, String prodi, String fakultas) {

        Mahasiswa newMhs = new Mahasiswa();

        newMhs.setNama(nama);
        newMhs.setNim(nim);
        newMhs.setProdi(prodi);
        newMhs.setFakultas(fakultas);

        return newMhs;
    }

    /* Read mahasiswa : untuk menampilkan semua data dari list mahasiswa. */
    public void readAllMhs(ArrayList<Mahasiswa> mhs) {

        System.out.println("Format Data : No. NIM - Nama - Prodi - Fakultas");

        int i = 0;
        for (Mahasiswa arr : mhs) {
            System.out.print(++i + ". ");
            System.out
                    .println(arr.getNim() + " - " + arr.getNama() + " - " + arr.getProdi() + " - " + arr.getFakultas());
        }
    }

    /*
     * Update mahasiswa : untuk memperbarui data pada objek mahasiswa yang telah ada
     * berdasarkan parameter masukan.
     */
    public void updateMhs(Mahasiswa mhs, String nama, int nim, String prodi, String fakultas) {

        mhs.setNama(nama);
        mhs.setNim(nim);
        mhs.setProdi(prodi);
        mhs.setFakultas(fakultas);
    }

    /* Delete mahasiswa : menghapus satu data/objek mahasiswa dari list */
    public void deleteMhs(ArrayList<Mahasiswa> mhs, int nomor) {
        mhs.remove(nomor);
    }
}