class Solution {
public:
    int tribonacci(int n) {

        if(n==0) return 0;

        if(n==1||n==2) return 1;

        long long first = 0;
        long long second = 1;
        long long third = 1;

        long long next;
        while(n!=0) {
            next = first + second + third;
            first = second;
            second = third;
            third = next;
            n--;
        }
        return first;
        
    }
};