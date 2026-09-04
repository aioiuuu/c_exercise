//
// Created by q_wr2 on 2026/9/4.
//

#include<stdio.h>
typedef struct {
    float Realpart;
    float Imagpart;
}Complex;

void Create(Complex *C,float x,float y) {
    C->Realpart = x;
    C->Imagpart = y;
}

float GetReal(Complex C) {
    return C.Realpart;
}

float GetImag(Complex C) {
    return C.Imagpart;
}

Complex Add(Complex C1,Complex C2) {
    Complex sum;
    sum.Realpart = C1.Realpart + C2.Realpart;
    sum.Imagpart = C1.Imagpart + C2.Imagpart;
    return sum;
}

Complex Sub(Complex C1,Complex C2) {
    Complex difference;
    difference.Realpart = C1.Realpart - C2.Realpart;
    difference.Imagpart = C1.Imagpart - C2.Imagpart;
    return difference;
}

int main() {
    Complex C1;
    Complex C2;
    Create(&C1, 2, 3);
    Create(&C2, 4, 5);
    
    printf("C1: %.1f + %.1fi\n", GetReal(C1), GetImag(C1));
    printf("C2: %.1f + %.1fi\n", GetReal(C2), GetImag(C2));
    
    Complex sum = Add(C1, C2);
    printf("After addition: %.1f + %.1fi\n", GetReal(sum), GetImag(sum));
    
    Complex diff = Sub(C1, C2);
    printf("After subtraction: %.1f + %.1fi\n", GetReal(diff), GetImag(diff));
    
    return 0;
}