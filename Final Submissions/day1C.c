//CMU Qatar: Sparta
//INteractive number search
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int problem1H(int index, int len,int check)
{
    if (index == len)
        return 1;
    if (check)
    {
        return problem1H(index +1 ,len,0);
    }
    else
    {
        return problem1H(index +1 ,len,1) + problem1H(index +1 ,len,0);
    }
}

void problem1()
{
    int len;
    FILE *f = fopen("zo.in","r");
    fscanf(f,"%d",&len);
    f = fopen("zo.out","w");
    fprintf(f,"%d",problem1H(1 ,len,1) + problem1H(1 ,len,0));
}


// void problem2H(int *op, int *prev,int n)
// {
//     int temp;
//     if(n==1)
//         return;
//     else if(n==2 || n==3)
//     {
//         op[n] = 1;
//         prev[n] = 1;
//     }
//     else if(!(n%3))
//     {
//         op[n] = problem2H(op,prev,n/3);
//         prev[n] = n/3;
//     }
//     else if(!(n%2))
//     {
//         int a = problem2H(op,prev,n/2);
//         temp = problem2H(op,prev,n-1);
//         if(a>temp)
//         {
//             op[n] = a;
//             temp = n/2;
//         }
//     }

//     op[n] = temp;
//     prev[n] = n-1;
// }

// void problem2()
// {
//     int n,c=0;
//     scanf("%d",&n);
//     int op[n+1], prev[n+1];
//     num[1] = -1;
//     for(int i = 0; i<=n; i++)
//         op[i] = -1;
//     problem2H(op,num,n);
//     int arr[n];
//     arr[0] = 1;
//     while(c>1)
//     printf("%d\n",n);
// }
int min (int a, int b)
{
    if (a>b) return b;
    return a;
}
int problem3H(int* arr, int len, int* dp)
{

    if (len==2)
    {
        return arr[1]-arr[0];
    }
    else if (len==3)
        return arr[2]-arr[0];
    else
    {
        if (dp[len-1]) return dp[len-1];
        dp[len-1] = arr[len-1]-arr[len-2] + min (problem3H(arr,len-1, dp), problem3H(arr,len-2, dp));
        return dp[len-1];
    }
}

void problem3()
{
    int n;
    scanf("%d\n",&n);
    int arr[n], dp[n];
    for(int i =0; i<n; i++)
            dp[i]=0;
    char *chr;
    for(int i =0; i<n; i++)
    {
        scanf("%s",chr);
        arr[i]= atoi(chr);
    }
    printf("%d\n", problem3H
        (arr, n, dp));
}


// int fn(int* arr, int* array, int n,int m,int M)
// {
//     if (array[n*M+m]) return array[n*M+m];
//     return arr[n*M+m] + max(fn(arr, array, n-1,m,M), fn(arr, array, n,m-1,M));
// }
// void problem4()
// {
//     int N,M,j;
//     char k;

//     FILE *f = fopen("input.txt","r");
//     fscanf(f,"%d %d",&N, &M);
//     int arr[N*M];
//     int array[N*M];
//     for (int i=0; i<N;i ++)
//     {
//         j=0;
//         k =fscanf(f, "%c", k) ;
//         while(!(k=="\n"))
//         {
//             arr[i*N +j] = k;
//             j++;
//             k =fscanf(f, "%c", k) ;
//         }
//     }
//     FILE *ft = fopen("output.txt","w");

//     fprintf(ft,"%d",  arr[N*M - 1] + max (fn(arr, array, N-1,M,M), fn(arr, array, N,M-1,M)));

// }


int main()
{

    //problem1();
    //problem2();
    problem3();
    // problem4();
    // problem5();
    return 0;
}

/*Product
//CMU Qatar: Sparta
#include<stdio.h>

int main()
{
    FILE *f = fopen("product.in","r");
    long long a,b;
    fscanf(f,"%lld %lld",&a,&b);
    f = fopen("product.out","w");
    fprintf(f, "%lld\n",a*b);
    return 0;
}
*/

/*SUm
// CMU Qatar: Sparta
#include<stdio.h>

int main()
{
    FILE *f = fopen("sum.in","r");
    int a,b;
    fscanf(f,"%d %d",&a,&b);
    f = fopen("sum.out","w");
    fprintf(f, "%d\n",a+b);
    return 0;
}
*/

/* Quotient
//CMU Qatar: Sparta
#include<stdio.h>

int main()
{
    FILE *f = fopen("input.txt","r");
    double a,b;
    fscanf(f,"%lf %lf",&a,&b);
    f = fopen("output.txt","w");
    fprintf(f, "%lf\n",a/b);
    return 0;
}
 */

