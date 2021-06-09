def pageCount(n, p):
    a = (p-n)//2
    b = n//2
    return a if a<b else b

p = int(input())
n = int(input())
print(pageCount(n,p))