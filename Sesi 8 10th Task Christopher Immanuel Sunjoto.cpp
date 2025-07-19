#include <stdio.h>
#include <string.h>

int main() {
    char minat[50];
    float nilaiMatematika, nilaiPemrograman, nilaiDatabase, nilaiJaringan;

    printf("===== Program Rekomendasi Streaming CS BINUS =====\n");
    printf("Masukkan minat Anda (SE / IS / NT / DB / IM): ");
    scanf("%s", minat);

    printf("Masukkan nilai Matematika (0 - 100): ");
    scanf("%f", &nilaiMatematika);

    printf("Masukkan nilai Pemrograman (0 - 100): ");
    scanf("%f", &nilaiPemrograman);

    printf("Masukkan nilai Database (0 - 100): ");
    scanf("%f", &nilaiDatabase);

    printf("Masukkan nilai Jaringan (0 - 100): ");
    scanf("%f", &nilaiJaringan);

    printf("\n--- Rekomendasi Streaming Anda ---\n");

    if (strcmp(minat, "SE") == 0) {
        if (nilaiPemrograman >= 70)
            printf("Direkomendasikan: Software Engineering\n");
        else
            printf("Perlu meningkatkan kemampuan coding untuk SE.\n");

    } else if (strcmp(minat, "IS") == 0) {
        if (nilaiMatematika >= 75 && nilaiPemrograman >= 70)
            printf("Direkomendasikan: Intelligence System\n");
        else
            printf("Perlu meningkatkan Matematika dan Pemrograman untuk IS.\n");

    } else if (strcmp(minat, "NT") == 0) {
        if (nilaiJaringan >= 70)
            printf("Direkomendasikan: Network Technology\n");
        else
            printf("Perlu memperkuat logika dan networking dasar.\n");

    } else if (strcmp(minat, "DB") == 0) {
        if (nilaiDatabase >= 70)
            printf("Direkomendasikan: Database Technology\n");
        else
            printf("Perlu menguasai konsep basis data lebih baik.\n");

    } else if (strcmp(minat, "IM") == 0) {
        if (nilaiPemrograman >= 65)
            printf("Direkomendasikan: Interactive Multimedia\n");
        else
            printf("Perlu eksplorasi skill multimedia dan pemrograman dasar.\n");

    } else {
        printf("Minat tidak dikenali. Gunakan SE/IS/NT/DB/IM\n");
    }

    return 0;
}
