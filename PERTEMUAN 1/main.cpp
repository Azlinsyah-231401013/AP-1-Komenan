#include <iostream>  // Library standar input dan output
#include <string> 
using namespace std; // Menggunakan namespace std untuk menghindari penulisan std:: secara berulang

int main() {
    string nama;  // variabel untuk menyimpan nama
    int nim;      // variabel untuk menyimpan NIM
    char kom;     // variabel untuk menyimpan KOM
    float ip;     // variabel untuk menyimpan IP

    cout << "Hello World" << endl;  // Mencetak "Hello World" ke layar

    cout << "Masukkan Nama : ";
    // cin >> nama;  
    getline(cin, nama);  // Menggunakan getline untuk membaca string dengan spasi

    cout << "Masukkan NIM : ";
    cin >> nim;  // Membaca input integer untuk NIM

    cout << "Masukkan KOM : ";
    cin >> kom;  // Membaca input karakter untuk KOM

    cout << "Masukkan IP : ";
    cin >> ip;  // Membaca input float untuk IP

    cout << "NAMA : " << nama << endl;  // Mencetak nama
    cout << "NIM : " << nim << endl;  // Mencetak NIM
    cout << "KOM : " << kom << endl;  // Mencetak KOM
    cout << "IP : " << ip << endl;  // Mencetak IP

    return 0;  // Mengembalikan nilai 0 menandakan program berakhir dengan sukses
}
