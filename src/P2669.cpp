#include<iostream>
using namespace std;
int main()
{
	int day,sum=0,c=1,i;//a为天数，b为金币，c为每天比原来每天多获得的金币数 
	cin>>day;
	for(i=1;i<=day;i++)
		day-=i,sum+=c*c,c++;//金币每天加上c的2次方，天数当然要减i了
	cout<<sum+day*c;//最后算上剩余的day乘加的最多一次的c
	return 0;
}