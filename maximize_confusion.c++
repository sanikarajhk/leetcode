class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        unordered_map<char,int> mp;
        int left=0;
        int maxcount=INT_MIN;
        for(int i=0;i<answerKey.size();i++)
        {
            mp[answerKey[i]]++;
            int m=max(mp['T'],mp['F']);

            while((i-left+1)-m>k)
            {
                mp[answerKey[left]]--;
                left++;
                


            }
            maxcount=max(maxcount,i-left+1);
        }
        return maxcount;
        
    }
};