#include <stdio.h>

int main(){
    int cases, candidates, votes=0, high=0, votesAux, winner=0;

    scanf("%d", &cases);

    for(int i=0; i<cases; i++){
        scanf("%d", &candidates);
        for(int j = 1; j <= candidates; j++){
            scanf("%d", &votesAux);
            votes += votesAux;
            if(votesAux > high){
                winner=j;
                high=votesAux;
            }
            else if(votesAux == high){
                winner = 0;
            }
        }

        if(winner == 0){
            printf("no winner\n");
        }
        else if(high > (votes/2)){
            printf("majority winner %d\n", winner);
        }
        else{
            printf("minority winner %d\n", winner);
        }

        high = 0;
        votes = 0;
        winner = 0;
    }

    return 0;
}
