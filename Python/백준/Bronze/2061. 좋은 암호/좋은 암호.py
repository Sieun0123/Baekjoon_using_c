K_str, L = input().split()
K = int(K_str)
L = int(L)

for i in range(2, L):
    if K % i == 0:
        print(f"BAD {i}")
        break
else:
    print("GOOD")
