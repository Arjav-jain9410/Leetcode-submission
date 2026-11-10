class Solution {
public:
    int reverse(int n) {
        int digit;
        long long sum=0;
        while(n!=0){
            digit=n%10;
            sum=sum*10+digit;
            n/=10;
        }
        if (sum > 2147483647LL || sum < -2147483647LL - 1) {
            return 0;
        }
        return sum;
        
    }
};