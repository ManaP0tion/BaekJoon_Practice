n = int(input())
n_list = []
for i in range(n):
    n_list.append(int(input()))
n_list1 = sorted(n_list)

for i in range(len(n_list1)):
    print(n_list1[i])