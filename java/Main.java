
// import library yang dibutuhkan
import java.util.Scanner;
import java.util.ArrayList;

// deklarasi kelas main
public class Main {
    public static void main(String[] args) {

        int stop = 0; // untuk menandai berhentinya program, 0 untuk masih berjalan, dan 1 untuk
                      // berhenti

        // variabel untuk menampung sementara masukan data mahasiswa dari user
        String nama, prodi, fakultas;
        int nim = 0;

        // list of mahasiswa
        ArrayList<Mahasiswa> mhs = new ArrayList<Mahasiswa>();

        // instansiasi objek op (operation) dari kelas database
        Database op = new Database();

        // instansiasi scanner untuk meminta input
        Scanner sc = new Scanner(System.in);

        // perulangan program database mahasiswa
        while (stop == 0) {

            int input = 0; // input nomor menu dari user
            int nomor = 0; // nomor data yang dipilih

            // daftar menu program
            System.out.println("Pilihan menu :");
            System.out.println("1. Create New Data Mahasiswa");
            System.out.println("2. Read All Data Mahasiswa");
            System.out.println("3. Update Data Mahasiswa");
            System.out.println("4. Delete Data Mahasiswa");
            System.out.println("5. Keluar");

            // meminta masukan nomor perintah
            System.out.println("Pilih Nomor Menu : ");
            try {
                input = sc.nextInt();
            } catch (Exception e) {
                System.out.println("Input tidak sesuai");
            }

            // jika perintahnya adalah menampilkan semua data mahasiswa dalam list
            if (input == 2) {

                // menggunakan method dari kelas database melalui objek op
                op.readAllMhs(mhs);

                // jika perintahnya adalah menghapus semua data mahasiswa dalam list
            } else if (input == 4) {

                // menampilkan data mahasiswa yang ada dalam list
                op.readAllMhs(mhs);

                // meminta masukan nomor data yang ingin dihapus
                System.out.print("Pilih Nomor Data : ");
                try {
                    nomor = sc.nextInt();
                } catch (Exception e) {
                    System.out.println("Input tidak sesuai");
                }

                // menggunakan method dari kelas database melalui objek op untuk menghapus objek
                op.deleteMhs(mhs, (nomor - 1));

                // jika perintahnya adalah keluar dari program
            } else if (input == 5) {

                stop = 1; // tandai berhenti pada stop

            } else { // jika perintahnya adalah create atau update data mahasiswa

                // jika perintahnya update
                if (input == 3) {

                    // menampilkan data mahasiswa yang ada dalam list
                    op.readAllMhs(mhs);

                    // meminta masukan nomor data yang ingin diupdate
                    System.out.print("Pilih Nomor Data : ");
                    try {
                        nomor = sc.nextInt();
                    } catch (Exception e) {
                        System.out.println("Input tidak sesuai");
                    }
                }

                // meminta masukan data mahasiswa
                System.out.println("== Input Data ==");
                System.out.println();
                System.out.print("Nama : ");
                nama = sc.next();
                System.out.print("NIM : ");
                try {
                    nim = sc.nextInt();
                } catch (Exception e) {
                    System.out.println("Input tidak sesuai");
                }
                System.out.print("Prodi : ");
                prodi = sc.next();
                System.out.print("Fakultas : ");
                fakultas = sc.next();

                if (input == 1) { // jika perintahnya untuk create data baru mahasiswa

                    // masukkan objek yang di-return dari method createMhs ke dalam list mahasiswa
                    mhs.add(op.createMhs(nama, nim, prodi, fakultas));

                } else {// jika perintahnya untuk update data baru mahasiswa

                    // update data mahasiswa yang dipilih melalui method pada objek op
                    op.updateMhs(mhs.get(nomor - 1), nama, nim, prodi, fakultas);
                }
            }
        }
    }
}
