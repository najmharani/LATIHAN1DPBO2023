<?php

// include kelas mahasiswa
require('Mahasiswa.php');
class Database
{
    // constructor kelas database
    public function __construct()
    {
    }

    // method untuk create objek mahasiswa
    public function createMhs($nama, $nim, $prodi, $fakultas)
    {
        $newMhs = new Mahasiswa($nama, $nim, $prodi, $fakultas);

        return $newMhs;
    }

    // method untuk read all mahasiswa (menampilkan data mahasiswa)
    public function readAllMhs($arrMhs)
    {
        echo "<h3>Daftar Data Mahasiswa</h3>";

        // menampilkan head dari tabel
        $i = 1;
        echo "<table border='1'>";
        echo "<tr>";
        echo "<th>";
        echo "No";
        echo "</th>";
        echo "<th>";
        echo "NIM";
        echo "</th>";
        echo "<th>";
        echo "Nama";
        echo "</th>";
        echo "<th>";
        echo "Prodi";
        echo "</th>";
        echo "<th>";
        echo "Fakultas";
        echo "</th>";
        echo "</tr>";

        // perulangan menampilkan data mahasiswa
        foreach ($arrMhs as $mhs) {
            echo "<tr>";
            echo "<td>";
            echo $i . ". ";
            echo "</td>";
            echo "<td>";
            echo $mhs->getNim();
            echo "</td>";
            echo "<td>";
            echo $mhs->getNama();
            echo "</td>";
            echo "<td>";
            echo $mhs->getProdi();
            echo "</td>";
            echo "<td>";
            echo $mhs->getFakultas();
            echo "</td>";
            echo "</tr>";
            $i++;
        }
        echo "</table>";
    }
}