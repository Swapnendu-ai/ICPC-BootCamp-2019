//CMU Qatar: Sparta
//INteractive number search
#include<stdio.h>
#include<string.h>

long long problem1H(long long *arr,long long index, long long len)
{
    if (index == len)
        return 1;
    if (arr[index-1])
    {
        arr[index] = 0;
        return problem1H(arr,index +1 ,len);
    }
    else
    {
        arr[index] = 0;
        long long temp = problem1H(arr,index +1 ,len);
        arr[index] = 1;
        return problem1H(arr,index +1 ,len) + temp;
    }
}

void problem1()
{
    long long len;
    scanf("%lld",&len);
    long long arr[len];
    arr[0] = 0;
    long long temp = problem1H(arr,1 ,len);
    // arr[0] = 1;
    // printf("%d",problem1H(arr,1 ,len) + temp);
}


int main()
{

    problem1();
    // problem2();
    // problem3();
    // problem4();
    // problem5();
    return 0;
}