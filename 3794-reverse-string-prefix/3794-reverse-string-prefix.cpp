class Solution {
public:
    string reversePrefix(string s, int k) {

        if(k==1) {
            return s;
        }
        int  n = s.size();

        int first = 0; 
        int last = k-1;

        while(first < last) {

            char temp = s[first];
            s[first] = s[last];
            s[last]=temp;
            first++;
            last--;
        }


        return s;
    }
};