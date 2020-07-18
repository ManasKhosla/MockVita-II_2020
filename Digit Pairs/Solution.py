def getBitScore(n):
    lst = list(map(int,list(str(n))))
    a,b = max(lst), min(lst)
    s = str(a*11+b*7)
    return s[-2::]

def getPairCount(diction):
    count=0
    for i in diction:
        if len(diction[i])==2: count += 1
        elif len(diction[i])>2: count += 2
    return count

def removeNonPair(diction):
    newDict = {}
    for i in diction:
        if len(diction[i])>=2:
            newDict[i] = diction[i]
    return newDict

if __name__ == "__main__":
    N = int(input())
    A = list(map(int, input().split()))
    odd,even = {},{}
    lst,count = [],0
    for i in range(N):
        score = getBitScore(A[i])
        lst.append(score)
        k,it = score[0], score[1]
        if i%2==0:
            if k not in even: even[k] = [it]
            else: even[k].append(it)
        else:
            if k not in odd: odd[k] = [it]
            else: odd[k].append(it)
    even, odd = removeNonPair(even), removeNonPair(odd)
    odd.update(even)
    print(getPairCount(odd), end='')
