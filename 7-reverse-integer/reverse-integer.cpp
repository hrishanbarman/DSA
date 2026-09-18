class Solution {
public:
    int reverse(int x) {
        int newno=0;
        while(x!=0)
        {
            if (newno > INT_MAX/10 || newno < INT_MIN/10) {
            return 0;
        }

            int r= x%10;
            newno=newno*10+r;            
            x=x/10;
        }
        
        return newno;
        
    }
};