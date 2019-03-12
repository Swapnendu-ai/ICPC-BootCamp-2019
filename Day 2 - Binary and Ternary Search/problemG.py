import gc
ar = list(map(lambda x: int(x),input().split(" ")))
n = ar[0]
m = ar[1]
k = ar[2]

a = list(map(lambda x: int(x),input().split(" ")))
b = list(map(lambda x: int(x),input().split(" ")))
c = []
for i in a:
    for j in b:
        c.append(i + j)
gc.collect()
print(sorted(c)[k-1])
