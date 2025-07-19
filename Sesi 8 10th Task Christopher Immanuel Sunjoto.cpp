#include <stdio.h>
#include <string.h>

int main() {
    char minat[50];
    float nilaiMatematika, nilaiPemrograman;

    printf("===== Program Penentuan Streaming CS =====\n");
    printf("Masukkan minat Anda (AI / Web / Jaringan / Game): ");
    scanf("%s", minat);

    printf("Masukkan nilai Matematika (0 - 100): ");
    scanf("%f", &nilaiMatematika);

    printf("Masukkan nilai Pemrograman (0 - 100): ");
    scanf("%f", &nilaiPemrograman);

    printf("\n--- Rekomendasi Streaming ---\n");

    // Menentukan streaming berdasarkan minat dan nilai
    if (strcmp(minat, "AI") == 0) {
        if (nilaiMatematika >= 75 && nilaiPemrograman >= 70)
            printf("Direkomendasikan: Streaming Artificial Intelligence\n");
        else
            printf("Perlu peningkatan nilai untuk masuk AI.\n");
    } else if (strcmp(minat, "Web") == 0) {
        if (nilaiPemrograman >= 65)
            printf("Direkomendasikan: Streaming Web Development\n");
        else
            printf("Perlu belajar logika dan praktik pemrograman lebih lanjut.\n");
    } else if (strcmp(minat, "Jaringan") == 0) {
        if (nilaiMatematika >= 60)
            printf("Direkomendasikan: Streaming Jaringan Komputer\n");
        else
            printf("Perlu penguatan dasar logika & sistem.\n");
    } else if (strcmp(minat, "Game") == 0) {
        if (nilaiPemrograman >= 75)
            printf("Direkomendasikan: Streaming Game Development\n");
        else
            printf("Perlu latihan coding lebih lanjut untuk Game Dev.\n");
    } else {
        printf("Minat tidak dikenali. Silakan pilih dari: AI / Web / Jaringan / Game\n");
    }

    return 0;
}
