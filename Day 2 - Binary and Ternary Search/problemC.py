
def bound(a,target,l,r):
    while(r-l>1):
        mid = l + (r-l)//2
        if (a[mid] < target):
            l = mid
        else:
            r = mid
    print(abs(min(target - a[l], a[r] - target)))

n1 = int(input())
a = input().split(" ")
a = list(map(lambda x: int(x),a))

n2 = int(input())
a.sort()

b = input().split(" ")
b = list(map(lambda x: int(x),b))
for target in b:
    bound(a,target,0,n1-1)
