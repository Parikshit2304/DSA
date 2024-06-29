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
        scanf("%[^\n]s", arr[i].name);
        getchar(); 

        printf("ENTER THE NUMBER OF MATCHES: ");
        scanf("%d", &arr[i].matches);

        printf("ENTER THE AVERAGE RUNS SCORED: ");
        scanf("%f", &arr[i].avgmatch);
    }

    printf("%s", arr[0].name);

    return 0;
}
