class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        unordered_set<long long>st;

        pq.push(1);
        st.insert(1);

        int factors[] = {2,3,5};
        long long curr = pq.top();

        for(long long i = 0; i < n; i++){
            curr = pq.top();
            pq.pop();

            for(auto k: factors){
                long long next_curr = curr * k;
                if(st.find(next_curr) == st.end()){
                    st.insert(next_curr);
                    pq.push(next_curr);
                }
            }
        }
        return curr;
    }
};