#include<stdio.h>

struct Player {
    char team_name[100];
    char name[100];
    float batting_avg;
};

int main(){
    int NUM_PLAYERS = 5;
    struct Player arr[100];
    struct Player *ptr;
    ptr = arr;
    for(int i = 0; i < NUM_PLAYERS; i++){
        printf("enter player name: ");
        scanf(" %[^\n]", (ptr+i)->name);
        printf("enter team name: ");
        scanf(" %[^\n]", (ptr+i)->team_name);
        printf("enter batting average:  ");
        scanf(" %f", &((ptr+i)->batting_avg));
    }
    int j = 0;
    for(int i = NUM_PLAYERS-1; i >= 0; i--){
        for(int j = 0; j < i; j++){
            if(arr[j].batting_avg < arr[j+1].batting_avg){
                struct Player temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }


    for(int i = 0; i < NUM_PLAYERS; i++){
        printf("\n\nPlayer rank: %d\n", i+1);
        printf("player name: %s\n", (ptr+i)->name);
        printf("team name: %s\n", (ptr+i)->team_name);
        printf("batting average: %.2f\n", (ptr+i)->batting_avg);
    }
}

