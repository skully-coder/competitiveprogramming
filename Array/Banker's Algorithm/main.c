// Banker's Algorithm
#include <stdio.h>
int main()
{
    // P0, P1, P2, P3, P4 are the Process names here

    int n, m, i, j, k;
    n = 4; // Number of processes
    m = 3; // Number of resources
    int alloc[4][3] = {
        {2, 3, 4}, // P0 // Allocation Matrix
        {4, 2, 3}, // P1
        {1, 4, 4}, // P2
        {3, 3, 4},
    }; // P4

    int max[4][3] = {
        {8, 7, 5}, // P0 // MAX Matrix
        {7, 4, 4}, // P1
        {2, 5, 5}, // P2
        {5, 5, 4},
    }; // P4

    int avail[3] = {2, 2, 0}; // Available Resources

    int f[n], ans[n], ind = 0;
    for (k = 0; k < n; k++)
    {
        f[k] = 0;
    }
    int need[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            need[i][j] = max[i][j] - alloc[i][j];
        printf("P%d\t", i);
        for (j = 0; j < m; j++)
            printf("%d ", need[i][j]);
        printf("\n");
    }
    int y = 0;
    for (k = 0; k < 4; k++)
    {
        for (i = 0; i < n; i++)
        {
            if (f[i] == 0)
            {
                int flag = 0;
                for (j = 0; j < m; j++)
                {
                    if (need[i][j] > avail[j])
                    {
                        printf("Need Greater than Available for P%d\n", i);
                        flag = 1;
                        break;
                    }
                }

                if (flag == 0)
                {
                    printf("P%d is safe\n", i);
                    ans[ind++] = i;
                    for (y = 0; y < m; y++)
                        avail[y] += alloc[i][y];
                    for(int i = 0; i<m; i++)
                        printf("%d ", avail[i]);
                    printf("\n");
                    f[i] = 1;
                }
            }
        }
    }

    printf("Following is the SAFE Sequence\n");
    for (i = 0; i < n - 1; i++)
        printf(" P%d ->", ans[i]);
    printf(" P%d", ans[n - 1]);

    return (0);
}
