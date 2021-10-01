def baseN_integer(s,n):
    b=0
    k=0
    while s>0:
        d=s%10
        b+=d*(n**k)
        k+=1
        s//=10
    return b
#main 
s=int(input("Enter decimal value : "))
n=int(input("Enter base number : "))
print(baseN_integer(s,n))