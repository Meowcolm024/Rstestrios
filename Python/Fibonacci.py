arr = [ 1 for i in range(20)]
print(arr[1])
for i in range(2,20):
    arr[i] = arr[i-1] + arr[i-2]
    print(arr[i])