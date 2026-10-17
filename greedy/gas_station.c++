class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int index=0;
        int total=0;
        int tank=0;
        for(int i=0;i<gas.size();i++)
        {
            total+=gas[i]-cost[i];
            tank+=gas[i]-cost[i];
            if(tank<0)
            {
                index=i+1;
                tank=0;
            }


        }
        if(total<0)
        {
            return -1;
        }
        return index;
    }
};