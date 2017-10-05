# Reimua

def is_prime(n):
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True


#
# 1. A prime number is not circular if there any of 0, 2, 4 , 6, 8 or 5 digit.
#
# 2. We just try verify if every combination are prime.
#

def is_circular(n):
    str = n.__str__()

    for i in str:
        if int(i) % 2 == 0 or int(i) == 5:  # Rmq: Since we start at 10, "2" and "5" won't be blocked here.
            return False

    i = str.__len__()
    j = 0
    while j < i:
        if not is_prime(int(str[j:] + str[:j])):
            return False
        j += 1
    return True


total = 2 + 3 + 5 + 7  # N start at 10, so we already take in account prime < 10.
i = 10
limit = int(raw_input())

#
# Could be heavily improved by using something like the Sieve of Eratosthenes.
#

while i < limit:
    if is_prime(i) and is_circular(i):
        total += i
    i += 1

print total

