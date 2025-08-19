total = 0
factorial = 1
n=int(input())
for i in range(1, n + 1):
    factorial *= i
    total += factorial
print(total)