#include <stdio.h>
void pyramid(int n)
{
    int i, j, space;


    for (i = 1; i <= n; i++)
    {

        for (space = i; space < n; space++)
        {
            printf(" ");
        }

        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

}
int main()
{
    int n;
    printf("Enter number ");
    scanf_s("%d", &n);
    pyramid(n);
}