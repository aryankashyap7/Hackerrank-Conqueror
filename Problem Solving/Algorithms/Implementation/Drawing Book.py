#def pageCount(n, p):
#    a = (p-n)//2
#    b = n//2
#    return a if a<b else b

#p = int(input())
#n = int(input())
#print(pageCount(n,p))


def solve(n, p):
    if(p<=n):
        return min(p//2, n//2 - p//2)

n = int(input().strip())
p = int(input().strip())
result = solve(n, p)
print(result)
