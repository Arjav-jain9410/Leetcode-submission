class Solution {
public:
    bool isPalindrome(int n) {
        int digit,original;
        long long sum=0;
        original=n;
        while(n>0){
            digit=n%10;
            sum=sum*10+digit;
            n/=10;

        }
        if(sum==original){
            return true;
        }
        else{
            return false;
        }
    }
};