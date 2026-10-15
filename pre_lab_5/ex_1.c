#include <stdio.h>

int main(){
    double num;
    double e = 1.0;
    double term = 1.0;


    printf("Type the exponent you want to calculate: ");
    scanf("%lf", &num);
    
    for(int i = 1; i < 1000; i++){
        term = term * num / i;
        e = e + term;
    }

    printf("e^%lf = %lf", num, e);

    return 0;
}