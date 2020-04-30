def linearySarch(array, key):
    for i in range(0,len(array)):
        if array[i] is key:
            return i;
def binarySarchRek(array, key,l,r):
    if r <= l:
        return False
    mid = (l + r) // 2          # // rundet immer ab
    if array[mid] is key:
        return mid
    if key < array[mid]:
        return binarySarchRek(array,key,l,mid-1)
    else:
        return binarySarchRek(array,key, mid+1, r)
def binarySarchIter(array,key):
    l,r = 0,len(array)
    mid = 0
    while( not(r <= l)):
        mid = (l + r) // 2
        if array[mid] is key:
            return mid
        if key < array[mid]:
            r = mid - 1
        else:
            l = mid + 1

array = [2,3,5,9,10,14]
key = 14
index = linearySarch(array, key)
print("Das element " + str(key) + " ist an der stelle " + str(index))

index = binarySarchRek(array, key,0,len(array));
print("Das element " + str(key) + " ist an der stelle " + str(index))

index = binarySarchIter(array,key)
print("Das element " + str(key) + " ist an der stelle " + str(index))
