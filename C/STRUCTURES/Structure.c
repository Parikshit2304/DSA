/*#include<stdio.h>
#include<string.h>


struct pokemon
{
    int attack;
    int speed;
    char name[50];

};
struct legendary_pokemon
{
    int special_attack;
    struct pokemon x;

};


int main(){
    struct legendary_pokemon p;
    

    p.attack=90;
    p.speed=100;
    strcpy(p.name,"Pikachu");
    p.special_attack=200;

    
    

    printf("Speed of the pokemon:%d\n",p.speed);
    printf("Attack of the pokemon:%d\n",p.attack);
    printf("Special Attack of the pokemon:%d\n",p.special_attack);
    printf("Name of the pokemon:%s\n",p.name);
}*/
#include <stdio.h>
#include <string.h>

int main() {
    typedef struct cricketer {
        char name[20];
        int matches;
        float avgmatch;
    } cricketer;

    cricketer arr[20];

    for (int i = 0; i < 20; i++) {
        printf("ENTER THE NAME:\n");
        scanf(" %[^\n]", arr[i].name);
        getchar(); 

        printf("ENTER THE NUMBER OF MATCHES: ");
        scanf("%d", &arr[i].matches);

        printf("ENTER THE AVERAGE RUNS SCORED: ");
        scanf("%f", &arr[i].avgmatch);
    }

    printf("%s", arr[0].name);

    return 0;
}


