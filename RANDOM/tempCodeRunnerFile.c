#include <stdio.h>

int DecimalToBinary(int decimal);

int main() {
    int dec;
    printf("Enter a binary: ");
    scanf("%d", &dec);
    printf("\nBinary (%d) converted to Decimal (%d).", dec, BinaryToDecimal(dec));
    return 0;
}

int DecimalToBinary(int decimal) {
    int bin = 0, 
        rem, 
        k = 1;

    while(decimal != 0) {
        rem = decimal % 2;
        decimal = decimal / 2;
        bin = bin + (rem * k);
        k = k * 10;
    }
    return bin;
}

int BinaryToDecimal(int binary) {
    int dec = 0,
        rem,
        k = 1;
    while(binary >  0) {
        rem = binary % 10;
        dec = dec + (rem * k);
        binary = binary / 10;
        k = k * 2;
    }
    return dec;
}