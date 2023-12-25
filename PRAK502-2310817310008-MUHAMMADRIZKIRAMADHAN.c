#include <stdio.h>
#include <math.h>

int mutlak(int angka){
    if (angka < 0){
        return -angka;
    }
    else{
        return angka;
    }
}
int hitung(int nilai1, int nilai2){
    return (nilai1 - nilai2);
}

int main(){
int a, b, c, d, Hasil;

scanf("%d %d %d %d", &a, &c, &b, &d);

Hasil = hitung(a,b) + hitung(c,d);
printf("%d",mutlak(Hasil));

return 0;
}