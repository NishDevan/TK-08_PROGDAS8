#include <stdio.h>
#include "multifunc.h"

void addition (int angka1, int angka2);
void subtraction (int angka1, int angka2);
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
            subtraction(angka1, angka2);
            break;
        case 3:
            int result = multiply(angka1, angka2);
            printf("Hasil: \n", result);
            break;
        case 4:
            division(angka1, angka2);
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

void subtraction(int angka1, int angka2) {
    int hasil;

    hasil = angka1 - angka2;
    printf("Hasil dari pengurangan tersebut: %d", hasil);
}

void division(int angka1, int angka2){
    int hasil;
    
    if(angka2 != 0){
        hasil = angka1 / angka2;
        printf("Hasil dari penjumlahan tersebut: %d", hasil);
    }
    else{
        printf("Cant divide by zero");
    }
    
}