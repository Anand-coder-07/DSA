class Solution {
public:
    int addDigits(int num) {

        int lastDigit = 0;

        int ans = 0;

        here: 

        int newNum = 0;

        while(num != 0 ) {

            lastDigit = num%10;

            newNum = newNum + lastDigit;

            num = num / 10;
        }
        if(newNum < 10){

            ans = newNum;
        }
        else{

            num = newNum;
            goto here;
        }

        
        return newNum;
    }
};