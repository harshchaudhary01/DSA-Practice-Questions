class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        int temp = num;
        for(int i = 1; i*i <= temp; i++){
            if((temp % i == 0) && (temp != i)){
                sum += i;
                if((temp/i != i) && ((temp/i) != temp)) sum += (temp/i);
            }
        }
        if(sum == num) return true;
        else return false;
    }
};