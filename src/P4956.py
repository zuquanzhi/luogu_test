n=int(input())
k_x_dict = {}
for x in range(1,100):
    sum=0
    k=0
    while True:
        sum=(7*x+21*k)*52
        if sum>n:
            break
        elif sum==n:
            k_x_dict[k] = x
            break
        k+=1

if 0 in k_x_dict:
    del k_x_dict[0]

max_key = max(k_x_dict, key=k_x_dict.get)
print(k_x_dict[max_key])
print(max_key)

#有一个点没过，不知道为啥子

# #include<bits/stdc++.h>
# using namespace std;
# long long n;
# int x,y;
# int main()
# {
# 	cin>>n;
# 	n/=52;
# 	for(int i=1;i<=n;i++)
# 	{
# 		for(int j=1;j<=100;j++)
# 		{
# 			if(j*7+i*21==n)
# 			{
# 				cout<<j<<endl<<i;
# 				return 0;
# 			}
# 		}
# 	}
# }