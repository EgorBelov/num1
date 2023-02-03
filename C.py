n = input()
sets = []
set_num = 1

for k in input().split():
    sets += [set_num] * int(k)
    set_num += 1

k = input()
for j in input().split():
    print(sets[int(j) - 1])