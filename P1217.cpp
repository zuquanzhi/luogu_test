// #include <bits/stdc++.h>
// using namespace std;

// int isPrime(int n) {//判定素数 
// 	if(n==1)//特判1 
// 		return 0;
// 	if(n%2==0)//2的倍数就回家吧 
// 		return 0;
// 	else {//不然就暴力枚举 
// 		int i;
// 		for(i=2; i<=sqrt(n); i++) {
// 			if(n%i==0)
// 				return 0;
// 		}
// 		return 1;
// 	}
// }
// int isPalindrome(int n) {//判定回文，不懂请参考数字反转 
// 	int sum=0;
// 	int k=n;
// 	while(n!=0) {
// 		sum=sum*10+n%10;
// 		n/=10;
// 	}
// 	if(sum==k)//判断是否回文 
// 		return 1;
// 	else
// 		return 0;
// }

// int main() {
//     int i,a, b;
//     cin >> a >> b;
//     for (i = a; i <= b; i++) {
//         if(i==9989900)
// 			break;
//         if (isPrime(i) && isPalindrome(i)) {
//             cout << i << endl;
//         }
//     }
//     return 0;
// }

#include<iostream>
#include<cmath>
using namespace std;
int prime(int n) {//判定素数 
	if(n==1)//特判1 
		return 0;
	if(n%2==0)//2的倍数就回家吧 
		return 0;
	else {//不然就暴力枚举 
		int i;
		for(i=2; i<=sqrt(n); i++) {
			if(n%i==0)
				return 0;
		}
		return 1;
	}
}
int hw(int n) {//判定回文，不懂请参考数字反转 
	int sum=0;
	int k=n;
	while(n!=0) {
		sum=sum*10+n%10;
		n/=10;
	}
	if(sum==k)//判断是否回文 
		return 1;
	else
		return 0;
}
int main() {
	int i,n,sum=0,m;
	cin>>n>>m;  //读入两个数 
	for(i=n; i<=m; i++) {
		if(i==9989900) //如果到了这个数，就break 
			break;
		if(hw(i)&&prime(i))//否则判断是否回文和素数 
			cout<<i<<endl;//输出每个回文质数 
	}
	return 0;//结束程序 
}
//不知道为什么上面我写的超时，两端逻辑完全一样