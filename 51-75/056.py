def sumdigits(nb):
    nb = str(nb)
    i = 0
    sumnb = 0
    while (i < len(nb)):
        sumnb = sumnb + (int(nb[i]) + int('0'))
        i += 1
    return (sumnb)

n = int(raw_input())
z = 0
for i in range(4, n + 1):
    for j in range(4, n + 1):
        nsum = 0
        x = pow(i, j)
        nsum = sumdigits(x)
        if nsum > z:
            z = nsum
print z
