class Solution {
public:
    int largestInteger(int num) {
        vector<int> digits;
        int temp = num;

        while (temp > 0) {
            digits.push_back(temp % 10);
            temp /= 10;
        }

        reverse(digits.begin(), digits.end());

        priority_queue<int> even, odd;

        for (int d : digits) {
            if (d % 2 == 0)
                even.push(d);
            else
                odd.push(d);
        }

        int ans = 0;

        for (int d : digits) {
            if (d % 2 == 0) {
                ans = ans * 10 + even.top();
                even.pop();
            } else {
                ans = ans * 10 + odd.top();
                odd.pop();
            }
        }

        return ans;
    }
};