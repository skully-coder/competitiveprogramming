class Solution {
public:
    int squaresum(int x){
        int res=0,temp;
        while(x){
            temp=x%10;
            res+=temp*temp;
            x/=10;
        }
        return res;
    }
    bool isHappy(int n) {
        int slow,fast;
        
        slow=squaresum(n);
        fast=squaresum(n);
        fast=squaresum(fast);

        while(slow!=fast){
            slow=squaresum(slow);
            fast=squaresum(fast);
            fast=squaresum(fast);
        }
        if(slow==1)
            return  true;
        else
            return false;
        
    }
};