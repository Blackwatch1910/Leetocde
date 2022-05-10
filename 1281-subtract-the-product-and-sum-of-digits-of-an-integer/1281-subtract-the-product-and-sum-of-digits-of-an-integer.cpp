class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int prod = 1;
        int sum = 0;
        
        while (n > 0) {
            int d = n % 10;
            prod = prod * d;
            sum = sum + d;
            n /= 10;
        }
        
        int answer = prod - sum;
        
        return answer;
    }
};