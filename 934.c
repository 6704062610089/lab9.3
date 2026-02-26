#include <stdio.h>
#define MAX 50

void countVowel(char []);

int main() {
    char text[MAX];

    printf("Enter text : ");
    scanf("%s", text);

    countVowel(text);

    return 0;
}

void countVowel(char t[]) {

    int i = 0;
    int countA=0, countE=0, countI=0, countO=0, countU=0;

    while (i < MAX && t[i] != '\0') {

        if (t[i]=='A' || t[i]=='a')
            countA++;
        else if (t[i]=='E' || t[i]=='e')
            countE++;
        else if (t[i]=='I' || t[i]=='i')
            countI++;
        else if (t[i]=='O' || t[i]=='o')
            countO++;
        else if (t[i]=='U' || t[i]=='u')
            countU++;

        i++;
    }

    printf("Text : [%s]\n", t);
    printf("A/a = %d\n", countA);
    printf("E/e = %d\n", countE);
    printf("I/i = %d\n", countI);
    printf("O/o = %d\n", countO);
    printf("U/u = %d\n", countU);
}