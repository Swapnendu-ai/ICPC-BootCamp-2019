#include <bits/stdc++.h>

using namespace std;


void diop (long long a, long long b, long long c){

	if ((c%__gcd(a,b)))
	{
		cout << 0 << " " << 0 <<endl ;
		return;
	}
	cout << "test case " << a << endl;
	for(int i = 0 ; i * a <=c || i * b <= c; i++)
	{
		if (!((c - (i*a))%b)) {
			cout << i << " " << (c- (i*a)) /b <<endl;
			return;
		}
		if (!((c - (i*b))%a)) {
			cout << i << " " << (c- (i*b)) /a <<endl;
			return;
		}
	}
	cout << 0 << " " << 0 ;
	return; 

}
int main(){
	long long n;
	cin >> n;
	long long a1, b1 ,c1 ;
	long long a[n];
	long long b[n];
	long long c[n];
	for (int i = 0 ; i < n ; i ++)
	{
		cin >> a1>> b1>> c1;
		a[i] = a1; b[i] = b1; c[i] = c1;	
	}	
	
	for (int i = 0 ; i < n ; i ++)
	{
		diop(a[i], b[i], c[i]);
	}
	return 0;

}