num=int(input('Enter integer : '))
dig=[1000,900,500,400,100,90,50,40,10,9,5,4,1]    #4,9,40,50,400,900 are included to avoid 4 time repetition
rom=['M','CM','D','CD','C','XC','L','XL','X','IX','V','IV','I']
i=0
roman=''
while num>0:
    for j in range(num//dig[i]):
        roman+=rom[i]
        num-=dig[i]
    i+=1
print('Its Roman Numeral is : ',roman)

#tracing
'''OUTPUT
444 //400 = 1
44 //40 =1
CDXLIV'''

