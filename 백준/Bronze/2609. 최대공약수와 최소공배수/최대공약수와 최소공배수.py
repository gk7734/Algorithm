from math import gcd

a, b=map(int, input().split())
c=a
d=b

def lcm(x, y):
   return x * y // gcd(x,y)

while b:
    a, b = b, a % b
print(a)
print(lcm(c, d))