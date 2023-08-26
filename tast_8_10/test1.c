#include "stdio.h"
void max(int num[], int Number);
int main()
{
    const int Number = 5;
    int i;
    int num[Number];
    for (i = 0; i < Number; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < Number; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    max(num, Number);
    for (i = 0; i < Number; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}

void max(int num[], int Number)
{
    int i, j, temp;

    for (i = 0; i < Number - 1; i++)
    {
        for (j = 0; j < Number - 1 - i; j++)
        {

            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}
