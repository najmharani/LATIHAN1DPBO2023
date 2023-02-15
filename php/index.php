<?php
// include kelas database
require('Database.php');

$op = new Database(); // membuat objek untuk operasi database

$listMhs = []; // array of objek mahasiswa

// input data ke array
array_push(
    $listMhs,
    $op->createMhs("Najma", 2102843, "Ilkom", "FPMIPA"),
    $op->createMhs("Lulu", 2104326, "Arsitektur", "FPTK"),
    $op->createMhs("Zahra", 2166677, "Matematika", "FPMIPA"),
    $op->createMhs("Kania", 2188567, "Ilkom", "FPMIPA"),
    $op->createMhs("Talitha", 2112345, "Tata_Busana", "FPTK"),
    $op->createMhs("Melva", 2143756, "Ilmu_Gizi", "FPOK")
);

// menampilkan semua data mahasiswa
$op->readAllMhs($listMhs);