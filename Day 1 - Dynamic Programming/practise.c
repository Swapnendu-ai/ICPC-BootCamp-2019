//CMU Qatar: Sparta
//INteractive number search
#include<stdio.h>
#include<string.h>

int main()
{
    long long a,ub,lb=1;
    char x[3];
    scanf("%lld",&ub);
    long long mid;
    while (ub>lb)
    {
        mid = lb+(ub-lb)/2;
        printf("?%lld\n",mid+1);
        fflush(stdout);
        scanf("%s",x);
        if (!strcmp("<",x))
            ub = mid;
        else
            lb = mid + 1;
    }
    printf("!%lld\n",lb);
    fflush(stdout);
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
