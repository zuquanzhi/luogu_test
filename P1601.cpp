#include <bits/stdc++.h>
using namespace std;
int a[1000001],b[1000001],c[1000001],j;
bool x=false;
char s[1000001],ss[1000001];
int main() {
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));//初始化
	scanf("%s%s",s,ss);//读入两个数
	a[0]=strlen(s);
	b[0]=strlen(ss);//获取长度
	for(int i=1; i<=a[0]; i++) a[i]=s[a[0]-i]-'0';
	for(int i=1; i<=b[0]; i++) b[i]=ss[b[0]-i]-'0';//转化为数字
	for(j=1; j<=max(a[0],b[0])+1; j++) {
		c[j]=a[j]+b[j];
		if(c[j]>=10) {
			c[j]%=10;
			a[j+1]++;
		}
	}//模拟加法
	c[0]=j;
	if(c[j+1]>0) c[0]++;//特判进位
	for(int i=c[0]; i>=1; i--) {//输出（删除前导零）
		if(x==false&&c[i]==0) continue;
		x=true;
		cout<<c[i];
	}
	if(x==false) cout<<0;//一重保险
	printf("\n");//二重保险
	return 0;//三重保险
}