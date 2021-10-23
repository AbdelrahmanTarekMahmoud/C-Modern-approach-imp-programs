#include <stdio.h>

int main(void) {

    char ch;
    int length = 0;
    printf("Enter A Character Please : ");
    ch = getchar();
    while (ch != '\n')
    {
        length++;
        ch = getchar();
    }
    printf("%d", length);
}