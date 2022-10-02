n,k=list(map(int,input().split()))
p,q=[{},{}]
a,b,c,s=[[0]*10000,[0]*1001,[0]*1001,0]
for i in range(1,n+1):
    d=0
    a[i]=list(map(int,input().split()))
    for j in range(0,k):
        d=d*3+a[i][j]
    if not d in p:
        p[d]=1
    else:
        p[d]=p[d]+1
    b[i]=d
for i in range(1,n):
    for j in range(i+1,n+1):
        d=0
        for l in range(0,k):
            d*=3
            if a[i][l]==a[j][l]:
                d+=a[i][l]
            else:
                d+=3-a[i][l]-a[j][l]
        if not d in p:
            continue;
        t=p[d]
        if not b[i] in q:
            q[b[i]]=t
        else:
            q[b[i]]+=t
        if not b[j] in q:
            q[b[j]]=t
        else:
            q[b[j]]+=t
        if not d in q:
            q[d]=t
        else:
            q[d]+=t
for i in q:
    s+=q[i]//3*(q[i]//3-1)//2
print(s)
