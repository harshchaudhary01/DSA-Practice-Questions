class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() == 0 || nums2.size() == 0) return {};
        vector<int>result;
        unordered_map<int,int>tempArr;
        for(int i = 0; i < nums2.size()-1; i++){
            for(int j = i+1; j < nums2.size(); j++){
                if(nums2[j] > nums2[i]){
                     tempArr[nums2[i]] = nums2[j];
                     break;
                }
            }
        }
        tempArr[nums2[nums2.size()-1]] = -1;

        for(auto k: tempArr){
            cout<<k.first<<"\t"<<k.second<<endl;
        }
        
        for(int i = 0; i < nums1.size(); i++){
            result.push_back((tempArr[nums1[i]]) ? (tempArr[nums1[i]]): -1 );
        }
        return result;
    }
};