class Solution {
public:
    struct Node{
        Node *links[26];
        bool flag;
        Node(){
            for(int i=0;i<26;i++)
            {
                links[i]=NULL;

            }
            flag=false;
        }

    };
    Node *root=new Node();
    void insert(string &word)
    {
        Node *node=root;
        for(int i=0;i<word.size();i++)
        {
            int idx=word[i]-'a';
            if(node->links[idx]==NULL)
            {
                node->links[idx]=new Node();

            }
            node=node->links[idx];
        }
        node->flag=true;

    }
    bool contains(string &word)
    {
        Node *node=root;
        for(int i=0;i<word.size();i++)
        {
            int idx=word[i]-'a';
            if(node->links[idx]==NULL)
            {
                return false;

            }
            node=node->links[idx];
        }
        return node->flag;
    }
    string p;
    string longestWord(vector<string>& words) {
        p="";
        for(int i=0;i<words.size();i++)
        {
            insert(words[i]);
        }
        sort(words.begin(),words.end(),[](string &a,string &b)
        {
            if(a.size()==b.size())
            {
                return a<b;
            }
            return a.size()<b.size();

        });
        for(auto x:words)
        {
            bool valid=true;
            for(int i=0;i<x.size();i++)
            {
                string prefix=x.substr(0,i+1);
                if(!contains(prefix))
                {
                    valid=false;
                    continue;
                }
            }
            if(valid && p.size()<x.size())
            {
                p=x;
            }

        }
        return p;

        
    }
};