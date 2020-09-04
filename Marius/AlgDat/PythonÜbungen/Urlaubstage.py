def findeErstenTag(urlaubstage):
    index = 0
    lastDay = urlaubstage[0][1]
    index += 1

    while index is not len(urlaubstage):
        if lastDay >= urlaubstage[index][1]:
            index += 1
        else:
            if urlaubstage[index][0] > lastDay:
                return urlaubstage[index][0]
            else:
                lastDay = urlaubstage[index][1]
                index += 1
    print("es gibt keinen tag !");

urlaubstage = [[1,4],[3,8],[5,6],[9,10]]
print(findeErstenTag(urlaubstage));