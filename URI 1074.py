qnt = int(input())
valores = list()
for c in range(0, qnt):
  valores.append(int(input()))
for k in valores:
  if k == 0:
    print('NULL')

  elif k % 2 == 0 and k < 0:
    print('EVEN NEGATIVE')

  elif k % 2 == 0 and k > 0:
    print('EVEN POSITIVE')  

  elif k % 2 != 0 and k > 0:
    print('ODD POSITIVE')    

  elif k % 2 != 0 and k < 0:
    print('ODD NEGATIVE')  

