#include <bits/stdc++.h>

using namespace std;



 int main(){

 	long long a, b, m;
 	cin >> a >> b >> m;
 	int cnt = 0, num = 0;
 	int c = 0;
 	for (; c < m && cnt < 2; c ++){
 		if (!((c * b - a) % m)){
 			num = c;
 			cnt ++;
 		}
 	}
 	if (!cnt) {
 		cout << "NO SOLUTION"<<endl;
 		exit(0);
 	} 
 	else if (cnt > 1){
 		cout << "AMBIGUOUS"<<endl;
 		exit(0);
 	}
 	else {
 		cout << num << endl;
 	}
 	return 0;


 }