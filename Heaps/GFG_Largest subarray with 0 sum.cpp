class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        unordered_map<long long, int> mp;
        long long sum=0;
        int maxi=0;
        mp[0] = -1; 
        
        for (int i=0; i<n; i++){
            sum += arr[I];
            if(mp.find(sum) == mp.end()){        
                mp[sum] = i;
            }
            else { 
                maxi = max(maxi, i - mp[sum]);
            }
        }
        return maxi;
    }
};
