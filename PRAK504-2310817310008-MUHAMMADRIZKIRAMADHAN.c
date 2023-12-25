#include <stdio.h>
int reverse(int x){
    int reverse = 0;
    while (x > 0) {
        int angka = x % 10;
        reverse = reverse * 10 + angka;
        x /= 10;
    }
    return reverse;
}

int main(){
    int A, B;
    scanf("%d %d",&A,&B);
    A=reverse(A);
    B=reverse(B);
    int C = A+B;
    printf("%d",reverse(C));
}