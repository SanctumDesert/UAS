
def merge(left, right):
    result = []
    while(len(left) > 0 and len(right) > 0):
        if left[0] <= right[0]:
            result.append(left[0])
            left = left[1::]
        else:
            result.append(right[0])
            right = right[1::]
    if len(left) > 0:
        result += left
    else:
        result += right
    return result

def mergeSort(array):
    if(len(array) <= 1):
        return  array;
    middle = len(array) // 2
    left = array[0:middle]
    right = array[middle:len(array)]
    left = mergeSort(left)
    right = mergeSort(right)
    if left[-1] > right[0]:
        return merge(left,right)
    else:
        return left + right
