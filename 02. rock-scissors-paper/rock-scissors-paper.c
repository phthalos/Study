#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int score = 0;
int playedTime = 1;

void game(){
    int user;
    printf("\nPlease Enter the Number.\n");
    printf("1. rock   2. scissors   3. paper\n\n");
    printf(">> ");
    scanf("%d", &user);
    int usr = user-1;

    int com = rand() % 3;
    char list[3][10] = {"rock", "scissors", "paper"};
    
        printf("\n     YOU : %s\n",list[usr]);
        printf("COMPUTER : %s\n",list[com]);
    if(com == usr){
        printf("  RESULT : DRAW!\n");
    }else if((com == 0 && usr == 2) || (com == 1 && usr == 0) || (com == 2 && usr == 1)){
        printf("  RESULT : YOU WIN!\n");
        ++score;
    }else if((com == 2 && usr == 0) || (com == 0 && usr == 1) || (com == 1 && usr == 2)){
        printf("  RESULT : YOU LOSE!\n");
        --score;
    }

    int yn;
    printf("\n===============================\n");
    printf("one more time?\n");
    printf("please Enter the number\n1. y / 2. n\n\n");
    printf(">> ");
    scanf("%d", &yn);
    if(yn == 1){
        ++playedTime;
        game();
    }
    else{
        printf("\n===============================\n");
        printf("TOTAL PLAYED TIME : %d\n",playedTime);
        printf("       YOUR SCORE : %d\n", score);
        printf("good bye! :)\n");
    }
}

int main(void){
    srand(time(NULL));
    printf("\n\n===== rock-scissors-paper =====\n");
    game();
    return 0;
}