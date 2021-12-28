n = int(input())
p = list(map(int, input().split()))

change = 0
for i in range(n-1) :
    if p[i+1] != p[i]+1:
        if i== 0 :
            if p[p[0]-1] != 1:
                print ('NO')
                break
            elif change != 0:
                change += 2
                print ('NO')
                break
            else :
                change += 1
                y = p[0]
                p[p[0]-1] = p[0]
                p[0] = 1

        else:
            if p[p[i+1]-1] != i+2:
                change += 2
                print ('NO')
                break
            elif change != 0:
                change += 1
                print ('NO')
                break
            else :
                change += 1
                y = p[p[i+1]-1]
                p[p[i+1]-1] = p[i+1]
                p[i+1] = y



if change == 1 :
    print('YES')
elif change == 0:
    print('NO')
