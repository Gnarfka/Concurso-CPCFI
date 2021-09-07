#include <stdio.h>
#include <string.h>

int main(){
    char monsterAtk[1000001];

    fgets(monsterAtk, sizeof(monsterAtk), stdin);

    int stringSize = strlen(monsterAtk);
    int i = 0;

    while(i < stringSize){
        if(i < stringSize-3){
            char one = monsterAtk[i];
            char two = monsterAtk[i+1];
            char three = monsterAtk[i+2];

            if(one!=two && one != three && three != two){
                printf("C");
                i += 3;
                continue;
            }
        }
        char one = monsterAtk[i];
        if (one == 'R'){
            printf("S");
        }
        else if (one == 'B'){
            printf("K");
        }
        else if (one == 'L'){
            printf("H");
        }
        i++;
    }
    printf("\n");
    return 0;
}
