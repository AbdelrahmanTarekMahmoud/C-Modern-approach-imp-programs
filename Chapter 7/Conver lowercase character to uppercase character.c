#include <stdio.h>

int main(void) {

    char letter;
    scanf_s("%c", &letter);
    if (letter >= 'a' && letter <= 'z');
    {
        letter = letter - 'a' + 'A';
    }
    printf("%c", letter);

    return 0;
}
