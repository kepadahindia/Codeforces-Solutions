    #include <stdio.h>

int main() {
    int n; // Jumlah batu di meja   
    char s[51]; // Urutan warna batu (string). Maksimal batu adalah 50, Tambahan 1 untuk karakter penutup string '\0'

    scanf("%d", &n); // Satu bilangan bulat, Disimpan ke variabel n
    scanf("%s", s); // Membaca string warna batu, Disimpan ke array s

    int count = 0; // Menyimpan jumlah batu yang harus dihapus. Awalnya belum ada batu yang diambil

    for (int i = 1; i < n; i++) { // Iterasi dimulai dari i = 1 hingga i < n.  
        if (s[i] == s[i - 1]) { // Misal i = 1, maka s[1] == s[0], membandingkan batu ke-2 dengan batu ke-1. INI KONSEP ARRAY.
            count++; // Jika warna batu saat ini sama dengan warna batu sebelumnya, maka kita perlu menghapus batu ini. Dan count batu yang terhapus akan bertambah 1.
        }
    }

    printf("%d\n", count);

    return 0;
}
