#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m + 1][n + 1];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
        
    }
    
    return 0;
}