class Solution {
public:
    int maxArea(vector<int>& height) {
        int lo = 0, hi = height.size()-1;
        int area = 0;
        while(lo <= hi){
            int breadth = (hi-lo);
            int length = min(height[lo], height[hi]);
            int tempArea = length*breadth;
            if(tempArea >= area) area = tempArea;
            if(height[lo] < height[hi]) lo++;
            else hi--;
        }
        return area;
    }
};