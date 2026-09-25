
class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> pq1;
        priority_queue<int> pq2;

        string s = to_string(num);

        for(int i=0; i<s.size(); i++)
        {
            int n = s[i]-'0';

            if(n%2==0)
                pq1.push(n);
            else
                pq2.push(n);
        }

        string s1 = "";

        for(int i=0; i<s.size(); i++)
        {
            int n = s[i]-'0';

            if(n%2==0)
            {
                s1 += to_string(pq1.top());
                pq1.pop();
            }
            else
            {
                s1 += to_string(pq2.top());
                pq2.pop();
            }
        }

        return stoi(s1);
    }
};