#include <stdio.h>  // Library standar input dan output
#include <conio.h>  // Library untuk fungsi getch()

int main() {
    char nama[50];  // variabel untuk menyimpan nama
    int nim;        // variabel untuk menyimpan NIM
    char kom;       // variabel untuk menyimpan KOM
    float ip;       // variabel untuk menyimpan IP

    printf("Hello World\n");  // Mencetak "Hello World" ke layar

    printf("Masukkan nama : ");
    // scanf("%s", &nama);  
    gets(nama);     // Menggunakan gets untuk membaca string 

    printf("Masukkan NIM : ");
    scanf("%d", &nim);  // Membaca input integer untuk NIM

    printf("Masukkan KOM : ");
    scanf(" %c", &kom);  // Membaca input karakter untuk KOM 

    printf("Masukkan IP : ");
    scanf("%f", &ip);  // Membaca input float untuk IP

    // printf("Nama : %s\n", nama);  
    printf("Nama : ");
    puts(nama);     // Menggunakan puts untuk mencetak string

    printf("NIM : %d\n", nim);  // Mencetak NIM
    printf("KOM : %c\n", kom);  // Mencetak KOM
    printf("IP : %.3f\n", ip);  // Mencetak IP dengan 3 angka desimal

    printf("Press any button to continue...");
    getch();  // Menunggu user menekan tombol apapun sebelum program berakhir
}
