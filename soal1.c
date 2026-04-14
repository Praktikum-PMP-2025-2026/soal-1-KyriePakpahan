/*
Nama : Kyrie Eleison Jacob Pakpahan
NIM : 13224006
Hari : Selasa
Tanggal : 14 April 2026
*/

#include <stdio.h>
#include <stdlib.h>


int main(void){
    int N;

    // input banyak urutan dari lampu
    if (scanf("%d", &N) != 1) return 0;

    for (int i = 1; i < N+1;i++){
        int digit_satuan = i % 10;
        int digit_puluhan = (i / 10) % 10; 
        int jumlah_digit = digit_puluhan + digit_satuan;

        if ((i % 2 == 0) && (i % 3 == 0)) {
            printf("BIRU\n");
        } else if (i % 3 == 0){
            printf("MERAH\n");
        } else if (i % 2 == 0){
            printf("KUNING\n");
        } else if (jumlah_digit >= 10){
            if (jumlah_digit % 2 == 0) printf("HIJAU\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}
