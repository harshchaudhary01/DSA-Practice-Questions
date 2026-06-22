class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0, temp = x;
        if(x == 0) return true;
        else if(x < 0) return false;
        else{
            while(temp != 0){
                rev = (rev*10) + (temp%10);
                if(rev > INT_MAX || rev < INT_MIN) return false;
                temp /= 10;
            }
        }
        if(rev == x) return true;
        else return false;
    }
};