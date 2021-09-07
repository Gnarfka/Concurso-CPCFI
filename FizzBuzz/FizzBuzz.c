#include <stdio.h>

int main(){
    int X, Y, N;

    scanf("%d %d %d", &X, &Y, &N);

    for (int i = 1; i<=N; i++){
        if (i%X==0){
            if(i%Y==0){
                printf("FizzBuzz\n");
            }
            else{
                printf("Fizz\n");
            }
        }
        else if(i%Y==0){
            printf("Buzz\n");
        }
        else{
            printf("%d\n", i);
        }
    }

    return 0;
}
