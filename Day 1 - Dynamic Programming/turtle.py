def move(dp,inp,n,m,N,M):
    if dp[n][m]:
        dp[n][m]
    if n==N and m == M:
        dp[n][m] = inp[n][m]
        return inp[n][m]
    elif n==N:
        dp[n][m] = inp[n][m] + move(dp,inp,n,m+1,N,M)
        return dp[n][m]
    elif m==M:
        dp[n][m] = inp[n][m] + move(dp,inp,n+1,m,N,M)
        return dp[n][m]
    else:
        dp[n][m] = inp[n][m] + max(move(dp,inp,n+1,m,N,M),move(dp,inp,n,m+1,N,M))
        return dp[n][m]

a = list(map(lambda x : int(x),input().split(" ")))
N = a[0]
M = a[1]
inp = []
dp = []
for i in range(N):
    dp.append([0]*M)
    inp.append(list(map(lambda x : int(x),input().split(" "))))
move(dp,inp,0,0,N-1,M-1)
inp = []
for i in dp:
    inp.append(max(i))
print(max(inp))
