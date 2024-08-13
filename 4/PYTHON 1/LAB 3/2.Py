# wap to print twin prime bet 1 and n
n = int(input("Enter the value of n: "))

print("Twin primes between 1 and", n, "are:")
for i in range(2, n):
    prime_flag = True
    for j in range(2, int(i ** 0.5) + 1):
        if i % j == 0:
            prime_flag = False
            break
    if prime_flag:
        for k in range(2, int((i + 2) ** 0.5) + 1):
            if (i + 2) % k == 0:
                prime_flag = False
                break
    if prime_flag:
        print("(", i, ",", i + 2, ")")
