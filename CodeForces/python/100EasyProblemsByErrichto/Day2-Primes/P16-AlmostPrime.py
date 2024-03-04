import math

def is_prime(x):
    if x < 2:
        return False
    if x == 2:
        return True
    for i in range(2,int(math.sqrt(x)) + 1):
        if x % i == 0:
            return False
    return True

def count_almost_prime(n):
    count = 0
    for i in range(1, n + 1):
        prime_divs = set()
        for j in range(2, i + 1):
            if is_prime(j) and i % j == 0:
                prime_divs.add(j)
        if len(prime_divs) == 2:
            count += 1
    return count

n = int(input())

print(count_almost_prime(n))