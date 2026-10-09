class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> arr1(ratings.size(),1);
        vector<int> arr2(ratings.size(),1);

        for(int i=1;i<ratings.size();i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                arr1[i]=arr1[i-1]+1;
            }

        }
        for(int i=ratings.size()-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {
                arr2[i]=arr2[i+1]+1;
            }
        }
        int c=0;
        for(int i=0;i<arr1.size();i++)
        {
            c+=max(arr1[i],arr2[i]);
        }
        return c;


        
        
    }
};