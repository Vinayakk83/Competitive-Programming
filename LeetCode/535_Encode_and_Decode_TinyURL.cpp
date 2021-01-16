class Solution {
public:
    string str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    unordered_map<string, string> ump;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string shortUrl = "http://tinyurl.com/", s;
        while(ump.find(s) == ump.end())
        {
            random_shuffle(str.begin(), str.end());
            s = str.substr(0, 8);
            if(ump.find(s) == ump.end())
                ump[s] = longUrl;
        }
        return shortUrl + s;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int pos=shortUrl.find_last_of('/');
        return ump[shortUrl.substr(pos+1)];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
