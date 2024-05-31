// Fungsi untuk melakukan operasi perkalian dua bilangan bulat
int kali(int a, int b) {
    return a * b;
}

// Fungsi untuk melakukan operasi pembagian dua bilangan bulat dan mengembalikan hasil dalam float
float bagi(int a, int b) {
    return static_cast<float>(a) / static_cast<float>(b);   // Type casting agar hasil pembagian menjadi float
}
