#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 10쌍의 서로 다른 동물
// 사용자로부터 2개의 입력값을 받음
// 같은 종류의 동물이라면 카드 뒤집기
// 모든 동물 쌍을 찾으면 게임 종료
// 총 실수 횟수 알려주기
    
int animalArray[5][4];
int checkAnimal[5][4];
char* animalName[10];

void initArray(){
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            animalArray[i][j] = -1;
        }
    }
}
void initAnimalName(){
    animalName[0] = "원숭이";
    animalName[1] = "하마";
    animalName[2] = "강아지";
    animalName[3] = "고양이";
    animalName[4] = "돼지";
    animalName[5] = "코끼리";
    animalName[6] = "기린";
    animalName[7] = "낙타";
    animalName[8] = "타조";
    animalName[9] = "호랑이";
}
int conv_pos_x(int x){
    return x / 4;
}
int conv_pos_y(int y){
    return y % 4;
}
int getEmptyPosition(){
    while(1){
        int randPos = rand() % 20;
        int x = conv_pos_x(randPos);
        int y = conv_pos_y(randPos);

        if(animalArray[x][y] == -1) return randPos;
    }
    return 0;
}
void shuffleAnimal(){
    for (int i=0; i<10; i++){
        for(int j=0; j<2; j++){
            int pos = getEmptyPosition();
            int x = conv_pos_x(pos);
            int y = conv_pos_y(pos);

            animalArray[x][y] = i;
        }
    }
}


void printAnimals(){
    printf("\n============ 답지 출력 ===========\n\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            printf("%8s", animalName[animalArray[i][j]]);
        }
        printf("\n");
    }
    printf("\n==============================\n\n");
} 

void printQuestion(){
    printf("\n\n(문제)\n");
    int seq = 0;
    for(int i=0; i<5; i++){
        for (int j=0; j<4; j++){
            if(checkAnimal[i][j] != 0){
                printf("%8s", animalName[animalArray[i][j]]);
            }
            else printf("%8d", seq);
            seq++;
        }
        printf("\n"); 
    }
}

int foundAllAnimals(){
    for(int i = 0; i<5; i++){
        for(int j=0; j<4; j++){
            if(checkAnimal[i][j] ==0) return 0;
        }
    }
    return 1;
}

int main(void){
    srand(time(NULL));

    initArray();
    initAnimalName();
    shuffleAnimal();

    int failCount = 0;

    while(1){
        int select1 = 0;
        int select2 = 0;

        printAnimals();
        printQuestion();
        printf("뒤집을 카드를 2개 고르세요: ");
        scanf("%d %d", &select1, &select2);

        if(select1 == select2) continue;

        int firstSelect_x = conv_pos_x(select1);
        int firstSelect_y = conv_pos_y(select1);

        int secondSelect_x = conv_pos_x(select2);
        int secondSelect_y = conv_pos_y(select2);

        if((checkAnimal[firstSelect_x][firstSelect_y] == 0
            && checkAnimal[secondSelect_x][secondSelect_y] == 0)
            && animalArray[firstSelect_x][firstSelect_y] == animalArray[secondSelect_x][secondSelect_y]){
                printf("\n\n빙고! : %s 발견\n\n", animalName[animalArray[firstSelect_x][firstSelect_y]]);
                checkAnimal[firstSelect_x][firstSelect_y] = 1;
                checkAnimal[secondSelect_x][secondSelect_y] = 1;
            }
        else{
            printf("\n\n땡! (틀렸거나 이미 뒤집힌 카드입니다)\n");
            printf("%d : %s\n",select1, animalName[animalArray[firstSelect_x][firstSelect_y]]);
            printf("%d : %s\n",select2, animalName[animalArray[secondSelect_x][secondSelect_y]]);
            printf("\n\n");

            failCount++;
        }
        if(foundAllAnimals() == 1){
            printf("\n\n 축하합니다! 모든 동물을 다 찾았네요 \n");
            printf("지금까지 총 %d 번 실수하였습니다\n", failCount);
            break; 
        }
    }

    return 0;
}