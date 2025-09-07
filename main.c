#include <stdio.h>

int main()
{
    float Panjang, lebar, luas;
    printf("masukan Panjang persegi Panjang :");
    scanf("%f", &Panjang);
    printf("masukan lebar persegi Panjang");
    scanf("%f", &lebar);
    luas = Panjang * lebar;
    printf("luas persegi Panjang = %.2f/n", luas);

    return 0;
}
