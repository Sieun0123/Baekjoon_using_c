n,r = map(int,input().split(' '))
num_1 = 1
num_2 = 1

for i in range(0,r):
  num_1 *= (n-i)
  i+=1

while (r != 0):
  num_2 *= r
  r-=1

print(int(num_1 / num_2))