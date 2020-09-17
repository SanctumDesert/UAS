def insertionSort(array):
    eusereSchleife = 0
    innereSchleife = 0
    for j in range(1, len(array)):
        eusereSchleife = eusereSchleife + 1
        key = array[j]
        i = j -1
        while i >= 0 and array[i] > key:
            innereSchleife = innereSchleife + 1
            array[i+1] = array[i]
            i = i - 1
        array[i + 1] = key
    print("eusere schleife : " + str(eusereSchleife));
    print("innere schleife : " + str(innereSchleife));
    return array

def invertetInsertionSort(array):
    for j in range(1, len(array)):
        key = array[j]
        i = j -1
        while i >= 0 and array[i] < key:
            array[i + 1] = array[i]
            i = i - 1
        array[i + 1] = key
    return array
a1 = [10,9,8,7,6,5,4,3,2,1]
a2 = [10,9,8,7,6,7]
a3 = [7,8,9,10]
print(invertetInsertionSort(a3))
