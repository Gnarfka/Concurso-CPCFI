#include <stdio.h>
#include <math.h>

int main(){
    int cases, i, aux, j, h, totalmonths;
    double R, B, M, interest, totalB;

    scanf("%d", &cases);
    for(i=0; i<cases; i++){
        scanf("%lf %lf %lf", &R, &B, &M);
        totalmonths = 0;
        R = R/100;
        while(B > 0){
            totalmonths++;
            if(totalmonths > 1200){
                printf("impossible\n");
                break;
            }
            interest = B*R;
            interest = round(interest*100)/100;
            B = B + interest;
            B = round(B*100)/100;
            B = B - M;
            if(B < 0.001){
                printf("%d\n", totalmonths);
                break;
            }
        }
    }
    return 0;
}
