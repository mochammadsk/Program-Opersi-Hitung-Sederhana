#include <stdio.h>
#include <float.h>

//Deklarasi Function
void jumlah(int a, int b);
void kurang(int a, int b);
void kali(int a, int b);
void bagi(int a, int b);

//Program Utama
int main(){
int a, b;
int pilih;

printf("    ================================\n");
printf("    |\tPROGRAM OPERASI HITUNG     |\n");
printf("    |  Mochammad Syahrul Kurniawan |\n");
printf("    ================================\n");

printf("\t___________________\n");
printf("\t| (1) Penjumlahan |\n");
printf("\t| (2) Pengurangan |\n");
printf("\t| (3) Perkalian   |\n");
printf("\t| (4) Pembagian   |\n");
printf("\t~~~~~~~~~~~~~~~~~~~\n");
printf("      Pilih Operasi Hitung : ");
scanf("%d", &pilih);
printf("    ===============================");

printf("\n     Masukkan Bilangan Pertama : ");
scanf("%d", &a);

printf("     Masukkan Bilangan Kedua : ");
scanf("%d", &b);

printf("\t=====================\n");
printf("\t    [Hasil = ");

    switch(pilih){
        case 1:
        jumlah(a, b);
        break;
        
        case 2:
        kurang(a, b);
        break;
        
        case 3:
        kali(a, b);
        break;

        case 4:
        bagi(a, b);
        break;
    }
printf("]");

return 0;
}

void jumlah(int a, int b){
    int jumlah = a+b;
    printf("%d", jumlah);
}

void kurang(int a, int b){
    int kurang = a-b;
    printf("%d", kurang);
}

void kali(int a, int b){
    int kali = a*b;
    printf("%d", kali);
}

void bagi(int a, int b){
    float bagi = (float) a/b;
    printf("%.1f", bagi);
}