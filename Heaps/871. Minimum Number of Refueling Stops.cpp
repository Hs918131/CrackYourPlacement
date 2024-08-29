class Solution {
public:
   
 int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
      int c=startFuel;
      sort(stations.begin(),stations.end());
      multiset<int> s;
      multiset<int>::iterator it;
      int i,j;
      int ans=0;
      if(c>=target){
          return ans;
      }
      for(i=0;i<stations.size();i++){
           while(stations[i][0]>c){
               if(s.empty()==1){
                   return -1;
               }
              it=s.end();
              it--;
              c=c+*(it);
              s.erase(it);
              ans++;

           }
            s.insert(stations[i][1]);
            if(c>=target){
              return ans;
            }
      }
      if(c<target){
          while(s.empty()!=1){
              it=s.end();
              it--;
              c=c+*(it);
              ans++;
              if(c>=target){
                  return ans;
              }
              s.erase(it);
              if(s.empty()==1&&c<target){
                  return -1;
              }
          }
      }
      return -1;

    }
};
