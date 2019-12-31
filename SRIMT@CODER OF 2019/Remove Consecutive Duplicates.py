from itertools import groupby 

test_list = input()
res = [i[0] for i in groupby(test_list)] 


for i in ((res)) :
    print(i,end="")
