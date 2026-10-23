class Solution {
public:
        struct Node{
        Node *links[26];
        bool flag;
        Node()
        {
            for(int i=0;i<26;i++)
            {
                links[i]=NULL;

            }
            flag=false;
        }
    };
    Node* root=new Node();
  
    
    void insert(string word) {
        Node* node=root;
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

    bool search(string word) {
        Node* node=root;
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
   
    string replaceWords(vector<string>& dictionary, string sentence) {
        for(int i=0;i<dictionary.size();i++)
        {
            insert(dictionary[i]);
        }
        stringstream ss(sentence);
        vector<string> words;
        string word;
        while(ss>>word)
        {
            words.push_back(word);

        }
        string final="";
        for(auto x:words)
        {
            string ans="";
            Node* node=root;
            bool found=false;
            for(int i=0;i<x.size();i++)
            {
                int idx=x[i]-'a';
                if(node->links[idx]==NULL)
                {
                   break;
                }
                ans+=x[i];
                node=node->links[idx];
                if(node->flag)
                {
                    found=true;
                    break;
                }
            }
            if(!final.empty())
            {
                final+=" ";

            }
            if(found)
            {
                final+=ans;
            }
            else
            {
                final+=x;
            }
        }
        return final;
        


        
        
        
    }
};