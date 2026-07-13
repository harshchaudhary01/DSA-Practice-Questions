class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int>scores(score);
        sort(scores.begin(), scores.end());
        reverse(scores.begin(), scores.end());

        unordered_map<int, string>mpp;
        int count = 0;
        for(int i = 0; i < n; i++){
            count++;
            if(count == 1) mpp.insert({scores[i],"Gold Medal"});
            else if(count == 2) mpp.insert({scores[i], "Silver Medal"});
            else if(count == 3) mpp.insert({scores[i], "Bronze Medal"});
            else{
                mpp.insert({scores[i],to_string(count)});
            }
        }
        vector<string>vec;
        for(int i = 0; i < n; i++){
            vec.push_back(mpp[score[i]]);
        }
        return vec;
    }
};