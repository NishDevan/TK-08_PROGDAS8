#include <stdio.h>

void addition (int angka1, int angka2);
void division (int angka1, int angka2);

int main(){
    int angka1, angka2, pilihan;
    printf("Selama datang di kalkulator kelompok 'Javascript'!\n");

    printf("Masukkan angka pertama anda : ");
    scanf("%d", &angka1);

    printf("Masukkan angka kedua anda : ");
    scanf("%d", &angka2);

    printf("Apa yang anda ingin lakukan? (1: Penjumlahan, 2: Pengurangan, 3: Perkalian, 4: Pembagian) : ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            addition(angka1, angka2);
            break;
        case 2:
            // Untuk Pengurangan
            break;
        case 3:
            // Untuk Perkalian
            break;
        case 4:
            
            break;
        default:
            printf("Terjadi kesalahan, mohon untuk mengecek pilihan anda!");
            break;
    }
    return 0;
}

void addition(int angka1, int angka2) {
    int hasil;

    hasil = angka1 + angka2;
    printf("Hasil dari penjumlahan tersebut: %d", hasil);
}

void division(int angka1, int angka2){
    int hasil;
    
    hasil = angka1 / angka2;
}
   