class Solution 
{
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        
        int totalgas = 0;
        int currgas=0;
        int startIndex =0;
        
        
        for(int i=0;i<gas.size();i++)
        {
            currgas +=gas[i]-cost[i];
           
            totalgas+=gas[i]-cost[i];
            currgas+=gas[i]-cost[i];
            if(currgas<0)
            {
                startIndex = i+1;
                currgas=0;
            }
        }

        return totalgas>=0 ? startIndex:-1;
    }
};
