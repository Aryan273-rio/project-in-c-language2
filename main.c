#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int player, computer = (rand()%3);
    printf("Choose 0 for snake, 1 for water and 2 for gun.\n");
    scanf("%d",&player);
    printf("%d\n",computer);
    
    if(player==0 && computer==0){
        printf("Its a Draw!");
    }
    else if(player==0 && computer==1){
        printf("You Win !");
    }
    else if(player==0 && computer==2){
        printf("You Loose !");
    }
    else if (player==1 && computer==0){
        printf("You Loose !");
    }
    else if(player==1 && computer==1){
        printf("Its a Draw!");
    }
    else if(player==1 && computer==2){
        printf("You Win");
    }
    else if(player==2 && computer==0){
        printf("You Win");
    }
    else if(player==2 && computer==1){
        printf("You Loose !");
    }
    else if(player==2 && computer==2){
        printf("Its a Draw!");
    }

    return 0;
}   