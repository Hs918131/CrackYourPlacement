class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<float,int>,vector<pair<float,int>>,greater<pair<float,int>>> pq;
        for(int i=0;i<points.size();i++){
              float val = pow(points[i][0]-0,2)+pow(points[i][1]-0,2);
              
              val = sqrt(val);
              pq.push({val,i});
        }
        vector<vector<int>> ans;
        while(k!=0)
        {
           int indx = pq.top().second;
           ans.push_back(points[indx]);
           pq.pop();
           k--;
        }
        return ans;
    }
};
