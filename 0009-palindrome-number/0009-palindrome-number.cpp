class Solution {
public:
    bool isPalindrome(int x) {
        long original=x;
        long rev;
        long result=0;

        if(x<0)
        {
            return false;
        }

        while(x!=0)
        {
            rev=x;
            x=x/10;
            rev=rev%10;
            result=(result*10)+rev;
        }
        if(result==original)
        {
            return true;
        }
        else{
            return false;
        }
    }
};