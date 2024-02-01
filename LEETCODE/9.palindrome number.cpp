class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        double sum=0;
        int m;
        while(x>0){
            m=x%10;
            sum=(sum*10) + m;
            x=x/10;
        }
        if(temp==sum){
            return true;
        }
        else{
            return false;
        }
    }
};