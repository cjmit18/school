string = "2+1"
count = 0
total = 0


for i in string:
    if i.isnumeric():
        count += 1
        total += int(i)
    