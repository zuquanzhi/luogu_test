def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)

a,b,c=map(int,input().split())
ans=min(a,b,c)
bns=max(a,b,c)
print(ans//gcd(ans,bns), "/", bns//gcd(ans,bns), sep="")