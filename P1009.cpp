#include <bits/stdc++.h>

using namespace std;
int n,a[90],b[90],c[90],f[90],d=0,len_a,len_b=1,len_c=1,len_ans,m=1;
string s;
int main(){
    cin>>n;
    b[0]=1; //初始化
    for(int i=1;i<=n;i++){ //计算i的阶乘，已经算好了i-1的阶乘
        len_a=0; //i的长度
        int p=i;
        while(p>0){ //把i存进a数组
            a[len_a++]=p%10;
            p/=10;
        }
        for(int j=0;j<len_a;j++) //计算a*b（i*（i-1）的阶乘），即i的阶乘，看不懂的网上查，我也不知道为什么
            for(int k=0;k<=len_b;k++)
                c[j+k]+=a[j]*b[k];
        for(int j=0;j<len_c;j++) //需要进位的就进位
            if(c[j]>9) c[j+1]+=c[j]/10,c[j]%=10;
        if(c[len_c]) len_c++; //看最高位要不要进位
        len_ans=len_b,len_b=len_c,m=max(m,len_c); //把len_b赋值给len_ans，修改len_b的值，m为i阶乘的长度，看有没有进位
        for(int k=len_c-1;k>=0;k--) b[k]=c[k]; //把c存进b数组，即存进i的阶乘，下次循环b为i-1的阶乘
        len_c=len_a+len_ans;
        memset(c,0,sizeof(c)); //清零c数组，准备计算下个阶乘
        for(int j=0;j<m;j++){ //高精加，直接套模板
            f[j]+=b[j];
            if(f[j]>9) f[j+1]+=f[j]/10,f[j]%=10; //进位，注意不要写成f[j+1]++，f[j]-=10;就因为这里wa了一个点
        }
    }
    while(!f[m]&&m>0) m--; //去掉首导零
    for(int i=m;i>=0;i--) cout<<f[i]; //倒序输出
    return 0; //圆满结束
}