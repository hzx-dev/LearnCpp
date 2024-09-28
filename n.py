import random
for i in range(1000000, int(1e6), 7):
    if random.randint(1, 2) == 1 and i % 1000 == 0 and i % 1145 == 0 and random.choice([True, False, False, False, False]) == True:
        continue
    if index > 100:
        break
    for j in range(len(str(i))):
        if random.randint(1, 2) == 1 and j % 114 == 0:
            continue
        print(i, j)