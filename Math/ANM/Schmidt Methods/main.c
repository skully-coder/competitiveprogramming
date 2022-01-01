#include <stdio.h>
#include <math.h>
#define X 8
#define T 5
float fun(int a)
{
    return (4 * a - (a * a) / 2.0);
}
main()
{
    float u[X + 1][T + 1], h = 1.0, k = 0.0125, c, al, us, ue;
    int j, i;
    printf("\n Enter the square of 'c' :");
    scanf("%f", &c);
    al = c * k / pow(h, 2);
    printf(" Enter the value of u[0, t] :");
    scanf("%f", &us);
    printf("  Enter the value of u[%d,t]:", X);
    scanf("%f", &ue);
    for (i = 0; i <= T; i++)
        u[0][i] = u[X][i] = us;
    for (j = 1; j <= X - 1; j++)
        u[j][0] = fun(j);
    for (i = 0; i <= T - 1; i++)
        for (j = 1; j <= X - 1; j++)
            u[j][i + 1] = al * u[j - 1][i] + (1 - 2 * al) * u[j][i] + al * u[j + 1][i];
    printf(" The value of alpha is %4.2f\n", al);
    printf(" The value of u[j,i] are:\n ");
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < X; j++)
            printf("%7.4f\t", u[j][i]);
        printf("\n");
    }
}