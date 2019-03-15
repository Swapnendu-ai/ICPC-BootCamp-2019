#include <bits/stdc++.h>

using namespace std;
 
int gcdExt ( int a, int b, int *x, int*y){
	if (a==0){
		*x=0;
		*y=1;
		return b;
	}
	int x1,y1;
	int gcd = gcdExt(b%a, a, &x1, &y1);

	*x = y1 - (b/a)*x1;
	*y = x1;

	return gcd;
}
long long mod_inverse (int a, int m){
	int x, y; 
	int g = gcdExt(a, m, &x, &y);
	if (g != 1)
		return 0;
	return (x %m + m) % m;
}
 int main(){

 	long long n = 1000000009;
 	int T ;
 	cin >> T;
 	
 	long long a[T];
 	for (int i = 0 ; i < T; i ++)
 		{	
 			cin >> a[i];
 			
 		}
	for (int i = 0 ; i< T; i ++)
 		{	
 			cout << mod_inverse(a[i], n)<<endl;
 			
 		}

 	return 0;


 }
