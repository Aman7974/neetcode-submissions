class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;    
        }

        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        // Step 3: Insert frequency and element into heap
        for (auto it : mp) {
            pq.push({it.second, it.first});

            // Keep only k elements
            if (pq.size() > k) {
                pq.pop();
            }
        }

        // Step 4: Store the k most frequent elements
        vector<int> ans;

        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
