#include <stdio.h>
#include <ctype.h>

int main(void) {
    int freq[100] = { 0 };
    int arr[100];
    int n;
    printf("Enter elements number :");
    scanf_s("%d", &n);
    printf("Enter elements :");
    for (int i = 0; i < n;i++)
    {
        scanf_s("%d", &arr[i]);
        freq[arr[i]] ++;
    }
    for (int i = 1;i < n;i++)
    {
        if (arr[i] != arr[i + 1])
        {
            printf("The freq of %d ---> %d \n", arr[i] , freq[arr[i]]);
        }
    }

    return 0;
}