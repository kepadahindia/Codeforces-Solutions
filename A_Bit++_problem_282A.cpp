#include <iostream> // Untuk input dan output
#include <string> // Untuk menggunakan tipe data string

using namespace std; // Menggunakan namespace standar

int main() {
    int n; // Deklarasi variabel untuk jumlah instruksi
    cin >> n; // Membaca jumlah instruksi

    int x = 0; // Nilai awal selalu 0
    string s; // Deklarasi string. Deklarasi variabel untuk menyimpan instruksi

    while (n--) { // ARTINYA SAMA AJA. While (n > 0) { n = n - 1; }

        cin >> s; // Membaca instruksi (misal: "++X" atau "X--"). Membaca satu instruksi per loop
        
        // Cukup cek karakter ke-1 (indeks tengah), (indeks di C++ mulai dari 0). 
        // karena di posisi tersebut pasti ada '+' atau '-'
        if (s[1] == '+') {
            x++;
        } else {
            x--;
        }
    }

    cout << x << endl; // Cetak hasil akhir
    return 0;
}
