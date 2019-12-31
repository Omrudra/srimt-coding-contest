test_str = input()
res = [test_str[i: j] for i in range(len(test_str)) 
          for j in range(i + 1, len(test_str) + 1)] 
for i in ((res)):
    print(i)
