# wap to enter a 3 digit number and print all the prime factors of the number
num = int(input("Enter a 3 digit number:"))
factors = 2
prime_list = []
while factors < num:  # checking for all the factors under less than num
       if num % factors == 0:
             # print(factors)
              flag = 0
               i = 2
                # checking if the factor is a prime number or not

                while i < factors:
                       if factors % i == 0:
                              flag += 1
                        i += 1
                if flag == 0:
                      prime_list.append(factors)
        factors += 1

if len(prime_list) >= 1:
    print("The prime factors are:")
    for i in prime_list:
         print(i)
else:
       print(num, "is a prime number")