## Kemampuan Teknis Dasar: Source Code Management - Git dan GitHub


### Tujuan

1. Memahami aktivitas pada metodologi agile serta kaitannya dengan source code management
2. Memahami dan mampu menggunakan Git untuk mengelola *repository*.
3. Memahami dan mampu menggunakan Git untuk mengelola *remote repository* di GitHub.
4. Memahami dan mampu menggunakan Git dan GitHub, baik untuk *single person* maupun *team development*.

### Pembahasan

1. Software engineering, software configuration management, version control, dan distributed version control.
2. Git dan perintah-perintah dasarnya
3. *Markdown* sebagai format untuk dokumentasi
4. Git dan *remote repository* (GitHub, GitLab, Assembla, BitBucket)
5. Git untuk single person development
6. Git untuk tim pengembang aplikasi

### Pembelajaran

```
Materi dan Penjelasan
```

1. Ruang lingkup [software engineering](https://en.wikipedia.org/wiki/Software_engineering).
2. Keterkaitan software engineering dengan [SCM - Software Configuration Management](https://en.wikipedia.org/wiki/Software_configuration_management).
3. Keterkaitan SCM dengan [Version Control](https://en.wikipedia.org/wiki/Version_control) dan [Distributed Version Control](https://en.wikipedia.org/wiki/Distributed_version_control).
4. [Git](https://en.wikipedia.org/wiki/Git) dan keterkaitannya dengan Distributed Version Control
5. [Men-*setup* Git - Chapter 1 - Getting Started](https://git-scm.com/book/en/v2/Getting-Started-About-Version-Control), pastikan juga bahwa [git telah terinstall](https://git-scm.com/book/en/v2/Getting-Started-Installing-Git).
6. [Membuat account GitHub](https://git-scm.com/book/en/v2/GitHub-Account-Setup-and-Configuration) serta [membuat repo di GitHub](https://help.github.com/en/articles/creating-a-new-repository). 
7. [README.md](https://www.quora.com/What-is-README-MD-file-and-why-do-I-need-it) serta [mampu menggunakan pemformatan file markdown untuk menuliskan dokumentasi](https://help.github.com/en/articles/basic-writing-and-formatting-syntax). 
8. Penggunaan `git status`, `git add`, `git commit`, `git push` untuk menyimpan ke *remote repo*
9. Penggunaan [branching and merging](https://git-scm.com/book/en/v2/Git-Branching-Basic-Branching-and-Merging).
10. [Pull request](https://help.github.com/en/articles/about-pull-requests) untuk repo di GitHub milik sendiri, [merging](https://help.github.com/en/articles/merging-a-pull-request), kemudian sinkronisasi ke lokal repo di komputer.
11. [Menggunakan Github untuk kolaborasi tim](https://dev.acquia.com/blog/getting-started-collaborative-development-git).

**Persiapan**

Buat repo di account Github anda dengan nama `praktikum_algoritma`. Setelah itu inisialisasi repo tersebut di komputer lokal anda. Repo ini yang akan menjadi hasil dari praktikum algoritma anda. URL dari repo anda ini seharusnya adalah `https://github.com/username/praktikum_algoritma`:

1. Kerjakan [petunjuk pembuatan repo dari Github ini](https://help.github.com/en/articles/create-a-repo). Cukup kerjakan langkah 1 - 6 saja, setelah itu berhenti pada saat repo telah dibuat. Untuk langkah 5, jangan mengaktifkan *checkbox* **Initialize this repository with a README**. Untuk selanjutnya, ini akan kita sebut sebagai **repo GitHub**.
2. Di komputer lokal, kerjakan (lokasi direktori bebas, asal hak akses memenuhi - bisa create dir,
   file, dan seterusnya - lokasi yang anda pilih akan disebut sebagai $LOKASI):
    * git clone https://github.com/username/praktikum_algoritma
    * untuk selanjutnya, lokasi direktori $LOKASI/praxis-academy ini kita sebut sebagai **repo lokal**.
3. Latihan dan kasus berikut seharusnya dikerjakan di repo lokal dan hasilnya di-push ke repo
   Github.

```
Latihan
```

1. Untuk keperluan pengerjaan praktikum algoritma ini, buat direktori di repo lokal dengan nama `praktikum-algoritma`. Setelah itu, masukkan hasil pekerjaan yang telah anda kerjakan pada materi yang sudah di sediakan di atas ke direktori/folder `minggu 1`, begitu juga minggu minggu selanjutnya. Setelah itu, push ke repo GitHub. Struktur direktori dan berbagai file dimana akan menghasilkan struktur file berikut:

```
praktikum-algoritma/
├── minggu-1
│   ├── latihan
│   │   ├── coding latihan .cpp
│   │   └── ... berisi semua file latihan di minggu 1
│   └── kasus
│       ├── berisi kasus yang akan di kerjakan di minggu 1.cpp
│       ├── kausus yang dikerjakan.cpp
│       └── grub.txt
├── minggu-2
│   ├── latihan
│   │   ├── coding latihan .cpp
│   │   └── ... berisi semua file latihan di minggu 2
│   └── kasus
│       ├── berisi kasus yang akan di kerjakan di minggu 2
│       ├── kausus yang dikerjakan.cpp
│       └── grub.txt
│   
└── dan seterusnya
```

