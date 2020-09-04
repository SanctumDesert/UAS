proben = 0

def binarySearch(a,l,r,k):
    global proben
    proben += 1
    if r < l:
        return False
    mid = (l + r) // 2      # // floor divisopn
    if k == a[mid]:
        return mid
    elif k < a[mid]:
        return binarySearch(a,l,mid-1,k)
    else:
        return binarySearch(a,mid+1,r,k)

a = [1,4,6,7,8,13,15,16,18,23,32,33,38,45];
key = 16
print(binarySearch(a,0,len(a),key));
print(proben)