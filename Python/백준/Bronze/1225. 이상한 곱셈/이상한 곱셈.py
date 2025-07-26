A, B = input().split()

sum_A = 0
for i in A:
    sum_A += int(i)

sum_B = 0
for j in B:
    sum_B += int(j)

result = sum_A * sum_B
print(result)
