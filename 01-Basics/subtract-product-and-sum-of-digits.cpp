class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        int digit;
        int result;
        for(int i=0; i<=n; i++){
            digit=n%10;
            n=n/10;
            sum = sum + digit;
            product = product * digit;
            result = product - sum;
        }
        return result;
    }
};
