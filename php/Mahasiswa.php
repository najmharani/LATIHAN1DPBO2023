<?php
class Mahasiswa
{
    private $nama; // atribut nama
    private $nim; // atribut nim 
    private $prodi; //atribut prodi
    private $fakultas; // atribut fakultas

    // constructor kelas Mahasiswa
    public function __construct($nama = '', $nim = '', $prodi = '', $fakultas = '')
    {
        $this->nama = $nama;
        $this->nim = $nim;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
    }

    // setter nama
    public function setNama($nama)
    {
        $this->nama = $nama;
    }

    // setter nim
    public function setNim($nim)
    {
        $this->nim = $nim;
    }

    // setter prodi
    public function setProdi($prodi)
    {
        $this->prodi = $prodi;
    }

    // setter fakultas
    public function setFakultas($fakultas)
    {
        $this->fakultas = $fakultas;
    }

    // getter nama
    public function getNama()
    {
        return $this->nama;
    }

    // getter nim
    public function getNim()
    {
        return $this->nim;
    }

    // getter prodi
    public function getProdi()
    {
        return $this->prodi;
    }

    // getter fakultas
    public function getFakultas()
    {
        return $this->fakultas;
    }

}

?>