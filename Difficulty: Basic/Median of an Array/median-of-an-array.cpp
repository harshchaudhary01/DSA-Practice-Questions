class Solution {
  public:
    double findMedian(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        if(n%2 != 0) return arr[(n/2)];
        else{
            double sum = (arr[n/2] + arr[(n/2)-1]);
            double avg = (double)(sum/2);
            return avg;
        }
    }
};