#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int n;

    while(scanf("%d", &n)==1){
        int values[n];
        bool diffCheck[n];

        for(int i = 0; i < n; i++){
            scanf("%d", &values[i]);
        }

        for(int i = 0; i < n; i++){
            diffCheck[i] = false;
        }

        for(int i = 0; i < n-1; i++){
            int diff = abs(values[i] - values[i+1]);

            if(diff > 0 && diff < n){
                diffCheck[diff] = true;
            }
        }

        bool jollyCheck = true;
        for (int i = 1; i < n; i++){
            if(diffCheck[i] == false){
                jollyCheck = false;
                break;
            }
        }

        if(jollyCheck){
            printf("Jolly\n");
        }
        else{
            printf("Not jolly\n");
        }
    }

    return 0;
}
