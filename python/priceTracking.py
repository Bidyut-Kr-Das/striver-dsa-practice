import sys

list1 = list(map(int ,input().strip().split()))
print(list1)

temp_min = list1[0]
max_profit = 0
for i in range(1,len(list1)):
    if list1[i] < temp_min:
        temp_min = list1[i]
        max_profit = 0
    else:
        max_profit = max(max_profit,list1[i]-temp_min)

print(max_profit)

