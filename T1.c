#include <stdio.h>

int main() {
    int intArr[4];
    char charArr[4];
    short shortArr[4];
    double doubleArr[4];

    printf("Integer Array:\n");
    for (int i = 0; i < 4; i++) {
        printf("%p\n", &intArr[i]);
    }

    printf("\nCharacter Array:\n");
    for (int i = 0; i < 4; i++) {
        printf("%p\n", &charArr[i]);
    }

    printf("\nShort Array:\n");
    for (int i = 0; i < 4; i++) {
        printf("%p\n", &shortArr[i]);
    }

    printf("\nDouble Array:\n");
    for (int i = 0; i < 4; i++) {
        printf("%p\n", &doubleArr[i]);
    }

    return 0;
}
