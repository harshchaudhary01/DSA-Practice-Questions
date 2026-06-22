class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int sum = 0;
        int temp = n;
        while(temp != 0){
            int d = temp%10;
            sum += pow(d,3);
            temp /= 10;
        }
        if(n == sum) return true;
        else return false;
    }
};