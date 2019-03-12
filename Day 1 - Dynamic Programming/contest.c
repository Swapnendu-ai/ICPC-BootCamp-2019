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


void insertionSort(long long arr[], long long n)
{
   long long i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;

       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

long long min (long long a, long long b)
{
    if (a>b) return b;
    return a;
}
long long problem3H(long long* arr, long long len, long long* dp)
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
    long long n;
    scanf("%lld\n",&n);
    long long arr[n], dp[n];
    for(int i =0; i<n; i++)
            dp[i]=0;
    char *chr;
    for(long long i =0; i<n; i++)
    {
        //scanf("%s",chr);
        //arr[i]= atoi(chr);
        scanf("%lld", &arr[i]);
    }
    insertionSort(arr,n);
    printf("%lld\n", problem3H
        (arr, n, dp));
}

int max (int a, int b)
{
    if (a>b) return a;
    return b;
}


int fn(int** arr, int** array, int n,int m)
{
    if(n<=1 || m<=1) return 0;
    if (array[n-1][m-1]) return array[n-1][m-1];
    printf("%s\n", "coming");
    return arr[n-1][m-1] + max(fn(arr, array, n-1,m), fn(arr, array, n,m-1));
}
void problem4()
{
    int N,M,j;
    scanf("%d %d",&N, &M);
    int arr[N][M];
    int array[N][M];
    for (int i=0; i<N;i ++)
    {
        for(int j = 0; j< M; j++)
        {
            scanf("%d",&arr[i][j]);
            array[i][j] = 0;
            printf("%s\n","passed" );
            fflush(stdout);
        }
    }

    printf("%d",  arr[0][0] + max (fn(arr, array, N-1,M), fn(arr, array, N,M-1)));

}


int main()
{

    //problem1();
    //problem2();
    //problem3();
    problem4();
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
