#include <stdio.h>
#include <string.h>

struct stats {
    char name[20];
    int age;
    int numMatches;
    int avgRuns;
};

int main() {
    struct stats cricArray[3];
    char name[20];

    printf("Enter the name, age, number of matches, and the average runs of the cricketer\n");

    for (int i = 0; i < 3; i++) {
        scanf("%s %d %d %d", cricArray[i].name, &cricArray[i].age, &cricArray[i].numMatches, &cricArray[i].avgRuns);
    }

    printf("Enter the name: ");
    scanf("%s", name);

    for (int i = 0; i < 3; i++) {
        if (strcmp(cricArray[i].name, name) == 0) {
            printf("The details of the cricketer are: %s %d %d %d\n", cricArray[i].name, cricArray[i].age,
                   cricArray[i].numMatches, cricArray[i].avgRuns);
            break; 
        }
    }

    return 0;
}

