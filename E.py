n = int(input())

data = list(map(int, input().split()))

res = 0

while (len(data) != 0):
    res -= -1
    itemmax = max(data)
    itemmin = min(data)
    data.remove(itemmax)

    resdata = data.copy()
    while (itemmax != itemmin):
        itmax = max(resdata)
        if (itmax != itemmax):
            data.remove(itmax)
            itemmax = itmax
        resdata.remove(itmax)

print(res)