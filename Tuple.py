#Được giới hạn bởi ()
tup=(i for i in range(10) if i%2==0)
a=tuple(tup)+(2,3,4,5)
a*=5
print(a)

b=len(a)
print(b)