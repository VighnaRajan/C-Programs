#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Complete the hourglassSum function below.
int hourglassSum(int arr_rows, int arr_columns, int** arr)
{
    int x,a[2],b[2],c[2],d[2],e[2],f[2],g[2],r[17],k;

    a[0]=b[0]=c[0]=0;a[1]=0;b[1]=1;c[1]=2;
    d[0]=1;d[1]=1;
    e[0]=f[0]=g[0]=2;e[1]=0;f[1]=1;g[1]=2;

    for(k=1;k<=16;k++)
    {
        r[k]=arr[a[0]][a[1]]+arr[b[0]][b[1]]+arr[c[0]][c[1]]+arr[d[0]][d[1]]+arr[e[0]][e[1]]+arr[f[0]][f[1]]+arr[g[0]][g[1]];
        a[1]++;b[1]++;c[1]++;
        d[1]++;
        e[1]++;f[1]++;g[1]++;
        if(k%4 == 0)
        {
            a[0]++;b[0]++;c[0]++;
            d[0]++;
            e[0]++;f[0]++;g[0]++;
            a[0]=b[0]=c[0]=0;a[1]=0;b[1]=1;c[1]=2;
            d[0]=1;d[1]=1;
            e[0]=f[0]=g[0]=2;e[1]=0;f[1]=1;g[1]=2;

        }
    }
    x=r[1];
    for(k=2;k<=16;k++)
    {
        printf("%d \t",&r[k]);
        if(x<r[k])
            x=r[k];
    }
    return x;
}

int main()
{

    int arr_rows = 6;
    int arr_columns = 6;
    int arr[6][6]={1 ,1, 1, 0, 0, 0,
0, 1, 0, 0, 0, 0,
1, 1, 1, 0, 0, 0,
0, 0, 2, 4, 4, 0,
0, 0, 0, 2, 0, 0,
0, 0, 1, 2, 4, 0};
    int result = hourglassSum(arr_rows, arr_columns, arr);

    printf("%d\n", result);



    return 0;
}