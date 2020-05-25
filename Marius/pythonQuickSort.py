def quickSort(array):
    if len(array) is 0:
        return array
    pivot = array[-1]
    less = []
    more = []
    for element in array:
        if element <= pivot and element != pivot :
            less.append(element)
        elif element > pivot and element != pivot:
            more.append(element)
    resultList = []
    resultList += quickSort(less)
    resultList.append(pivot)
    resultList += quickSort(more)
    return resultList
