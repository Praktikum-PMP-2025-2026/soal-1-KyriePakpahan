/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1 
 *   Hari dan Tanggal    : Selasa, 14 April 2026 
 *   Nama (NIM)          : Kyrie Eleison Jacob Pakpahan (13224006)
 *   Nama File           : soal1.c
 *   Deskripsi           : Untuk setiap tingkat dari 1 sampai N, cetak warna lampu berdasarkan aturan prioritas tertentu
 * 
 */


#include <stdio.h>
#include <stdlib.h>


int main(){
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
