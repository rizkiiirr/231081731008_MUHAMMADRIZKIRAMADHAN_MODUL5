def reverse(x):
    reverse = 0
    while (x != 0):
        digit = x % 10
        reverse = reverse * 10 + digit
        x //= 10
    return reverse

A, B = map(int, input().split())
A=reverse(A)
B=reverse(B)
C = A+B
print(reverse(C))
