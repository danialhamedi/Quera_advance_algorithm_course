n, k = map(int, input().split())
seq = list(map(int, input().split()))
y = []
for i in range(n):
    a = seq[i] - k * i
    x = 0
    for j in range(n):
        x += abs((a + k * j) - seq[j])
    y.append(x)
y.sort()
print(y[0])
