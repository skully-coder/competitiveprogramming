# Roman to Integer: to convert a roman number to integer


def romanToInt(string):
        num=0
        for i,s in enumerate(string):
            if s=='I': num+=1
            elif s=='V': 
                if i==0: num+=5
                elif string[i-1]=='I': num+=3
                else:   num+=5
            elif s=='X': 
                if i==0: num+=10
                elif string[i-1]=='I': num+=8
                else:   num+=10
            elif s=='L': 
                if i==0: num+=50
                elif string[i-1]=='X': num+=30
                else:   num+=50
            elif s=='C': 
                if i==0: num+=100
                elif string[i-1]=='X': num+=80
                else:   num+=100
            elif s=='D': 
                if i==0: num+=500
                elif string[i-1]=='C': num+=300
                else:   num+=500
            elif s=='M': 
                if i==0: num+=1000
                elif string[i-1]=='C': num+=800
                else:   num+=1000
        
        return num
      
string = input()
print(romanToInt(string))
