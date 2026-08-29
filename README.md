# Praktek Dasar Pemrograman (Kelas Reguler)

Folder praktikum ini berisi kode-latihan Bahasa **C** yang disusun mengikuti
[wiki DasarPemrograman - Algoritma dan Pemrograman ITS](https://github.com/Algoritma-dan-Pemrograman-ITS/DasarPemrograman/wiki).

## Struktur Folder

| Folder     | Materi                                |
|------------|---------------------------------------|
| `Modul_0`  | Pengenalan Pemrograman                |
| `Modul_1`  | Percabangan (if, switch-case)         |
| `Modul_2`  | Perulangan, Array, dan String         |
| `Modul_3`  | Fungsi dan Rekursi                    |
| `Modul_4`  | Pointer dan Struct                    |
| `Modul_5`  | Algoritma Sorting dan Searching       |
| `Modul_X`  | Materi Tambahan (Operator-bit)        |

## Cara Menjalankan

Compile dengan gcc, lalu jalankan hasilnya:

```bash
gcc Modul_0/01_hello_world.c -o hello
./hello
```

Perintah compile VSCode (C/C++ Runner) menghasilkan `.exe` di folder yang sama.
File `.exe` dan artefak build **tidak di-track** oleh git (lihat `.gitignore`).

## Catatan

- Semua berkas latihan berbahasa C (`.c`).
