class Solution {
public:
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        string s1=s;
        string s2=s;
        bool ans1=true;
        bool ans2=true;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                s1.erase(i,1);
                s2.erase(j,1);
                break;
            }
            else
            {
            i++;
            j--;
            }
        }
        i=0;
        j=s1.size()-1;
        while(i<=j)
        {
            if(s1[i]!=s1[j])
            {
                ans1=false;
                break;
            }
            i++;
            j--;
        }
        i=0;
        j=s2.size()-1;
         while(i<=j)
        {
            if(s2[i]!=s2[j])
            {
                ans2=false;
                break;
            }
            i++;
            j--;
        }
        return ans1||ans2;
        
    }
};