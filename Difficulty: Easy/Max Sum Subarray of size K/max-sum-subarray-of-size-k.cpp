class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int sum = 0, maxSum = 0, i = 0, j = 0;
        while(j < arr.size()){
            if(i+j+1 <= k){
                sum += arr[j++];
                maxSum = max(sum, maxSum);
            }else{
                sum += arr[j++];
                sum -= arr[i++];
                maxSum = max(sum,maxSum);
            }
        }
        return maxSum;
    }
};