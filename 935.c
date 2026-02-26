#include <stdio.h>
#include <ctype.h>

#define MAX 200

int main() {

    char str[MAX];
    int sum = 0;
    int i = 0;

    printf("Enter input: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {

        if(isdigit(str[i])) {
            sum += str[i] - '0';
        }

        i++;
    }

    printf("Sum of digit char: %d\n", sum);

    return 0;
}