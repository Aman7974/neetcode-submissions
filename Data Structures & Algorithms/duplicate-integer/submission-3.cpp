class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //set
        //  set<int> st;

        // for (int i = 0;  i < nums.size();i++) {

        //     if (st.find(nums[i]) != st.end()) {
        //         return true;
        //     }

        //     st.insert(nums[i]);
        // }

        // return false;

        //Hashmap
        int n = nums.size();
        unordered_map<int,int>mp;
        

        for(int i=0;i<n;i++){

         mp[nums[i]]++;

            if(mp[nums[i]]>1)
            return true;
            
        }

        return false;

    }
};