#include <stdio.h>

struct game
{
    char name[7];
    int R1,R2,R3;
};

int main(){
    struct game player;
    double avg;

    printf("선수의 이름은?");
    scanf("%s",&player.name);
    printf("1,2,3 Round Score : ");
    scanf("%d %d %d" , &player.R1,&player.R2,&player.R3);
    avg = (double)(player.R1 + player.R2 + player.R3) / 3;

    printf("%s : %lf",player.name,avg);

    return 0;
}