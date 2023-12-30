#include <stdio.h>

int main()
{
    printf("Enter the number of characters: ");
    int a = 0, b = 0;
    scanf("%d", &a);
    int question[a];
    int answer[a];
    char ans;
    printf("Write the given characters: ");
    for (int i = 0; i < a; i++)
    {
        scanf("%c", &ans);
        question[i] = ans;
    }
    getchar();
    printf("write your answer: ");
    for (int i = 0; i < a; i++)
    {
        scanf("%c", &ans);
        answer[i] = ans;
    }
    for (int i = 0; i < a+1; i++)
    {
        if (answer[i] != question[i])
        {
            b++;
        }
    }
    printf("The number of wrong characters is %d", b);
}
