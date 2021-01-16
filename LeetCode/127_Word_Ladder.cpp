class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> s;
        bool flag = false;
        
        for(auto word: wordList){
            if(word == endWord)
                flag = true;
            s.insert(word);
        }
        if(!flag)
            return 0;
        
        queue<string> q;
        q.push(beginWord);
        int depth = 0, qSize = 0;
        
        while(!q.empty()) {
            depth += 1;
            qSize = q.size();
            while(qSize--) {
                string curr = q.front();
                q.pop();
                
                for(int i = 0; i < curr.length(); i++) {
                    string temp = curr;
                    
                    for(char ch = 'a'; ch <= 'z'; ch++) {
                        temp[i] = ch;
                        if(curr == temp)
                            continue;
                        if(temp == endWord)
                            return (depth + 1);
                        if(s.find(temp) != s.end())
                        {
                            q.push(temp);
                            s.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};
