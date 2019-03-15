//CMU Qatar: Sparta
//INteractive number search
#include<stdio.h>
#include<string.h>

int problem1H(int *arr,int index, int len)
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
        int temp = problem1H(arr,index +1 ,len);
        arr[index] = 1;
        return problem1H(arr,index +1 ,len) + temp;
    }
}

void problem1()
{
    int len;
    FILE *f = fopen("zo.in","r");
    fscanf(f,"%d",&len);
    int arr[len];
    arr[0] = 0;
    int temp = problem1H(arr,1 ,len);
    arr[0] = 1;
    f = fopen("zo.out","w");
    fprintf(f,"%d",problem1H(arr,1 ,len) + temp);
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
