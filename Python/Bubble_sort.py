b_list = [8, 10, 6, 2, 4]  # list to sort

c = len(b_list)
d = len(b_list)-1

while d:
    for i in range(c - 1):
        if b_list[i] > b_list[i + 1]:
            b_list[i], b_list[i + 1] = b_list[i + 1], b_list[i]
    d-=1

print(b_list)
