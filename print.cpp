 #include <bits/stdc++.h>

using namespace std;

#define type1 int
#define type2 int

#define equal(a,b) (fabsl(a-b) < EPS)
#define less(a,b) (a + EPS < b)
#define less_equal(a,b) (a <= b + EPS)
#define isZero(x) (equal(0.0L,x))
#define arcsin(x) (asin(min(max(x,-1.0L),1.0L)))
#define arccos(x) (acos(min(max(x,-1.0L),1.0L)))
#define root(x) (sqrtl(max(x,0.0L)))
#define trail0(x) (setprecision(x))
#define len2(p) (p.X * p.X + p.Y * p.Y) //uses a structure of x and y values, square of the length
#define len(p) (root(len2(p)))
#define dot(p,q) (p.X*q.X + p.Y*q.Y)
#define angle(p,q) (dot(p,q)/(len(p) * len(q)))
#define ortho(p,q) (isZero(dot(p,q)))
#define accute(p,q) (less(0.0L,dot(p,q)))
#define obtuse(p,q) (less(dot(p,q),0.0L))
#define det(p,q) (p.X * q.Y - p.Y * q.X)
#define collinear(p,q) (isZero(det(p,q)))
#define triArea(p,q) (det(p,q)/2.0L)

 int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

type2 DFS(auto root, type2 graph)
{
    vector < type1 > children;
    children = getchildren(graph,root,children);
    for(auto i = children.begin(); i<children.end();++i)
        if (goalCheck)
            return i;
        vector < type1 > children_temp = getchildren(graph,i,children);
        children.insert(i+1,children_temp.begin(),children_temp.end());
    return -1
}

type2 BFS(auto root, type2 graph)
{
    vector < type1 > children;
    children = getchildren(graph,root,children);
    for(auto i = children.begin(); i<children.end();++i)
        if (goalCheck)
            return i;
        vector < type1 > children_temp = getchildren(graph,i,children);
        children.insert(children.end(),children_temp.begin(),children_temp.end());
    return -1
}

#define dMult(n,c) (n/gcd(c,n)) // number of distinct multiples of c modulo n
//only iff gcd(c,n) = 1, there are n different numbers modulo n

#define fameMod (7 + 1E9)
#define fameMod2 (9 + 1E3)
#define coPrime(a,b) (__gcd(a,b) == 1)
long long GCD (long long x, long long y)
{
    // return __gcd(x,y);
    if(x<y) swap(x,y);
    if(y<1)
        return x;
    return GCD(y,x%y);
}
vector <int> binary;
//reverse it before using
void int2bin(unsigned long long x)
{
    if(x<=1){
        binary.push_back(x);
        return;
    }
    binary.push_back(x%2);
    int2bin(x/2);
}

long long power(long long base,long long exp,long long modulo)
{
    if(!modulo || base < 0 || exp < 0)
        return -1;
    if(!exp)
        return 1;
    if(exp<=1)
        return base%modulo;
    if(!(exp%2))
        return power((base*base)%modulo,exp/2,modulo)%modulo;
    return (base * power((base*base)%modulo,(exp-1)/2,modulo))%modulo;
}

long long remMod(long long a,long long b,long long modulo)
{
    if(!modulo)
        return -1;
    a %= modulo;
    b %= modulo;
    return (long long)(a*pow(b,modulo-2)) % (long long)modulo;
}

pair <long long> diophantine(long long a, long long b, long long c)
{
    long long g = __gcd(a,b);
    if(!(g%c))
    {
        a /= g;
        b/= g;
        c/= g;
        return make_pair(-b/c,a/c)
    }
    return make_pair(0,0)
}


