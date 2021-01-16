class OrderedStream {
public:
    vector<string> stream;
    int check = 0;
    OrderedStream(int n) {
        stream.assign(n, "");
    }
    
    vector<string> insert(int id, string value) {
        stream[id - 1] = value;
        vector<string> chunk;
        if(id - 1 == check) {
            while(id - 1 < stream.size() && stream[id - 1] != "")
            {
                chunk.emplace_back(stream[id - 1]);
                id++;
                check++;
            }
        }
        return chunk;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(id,value);
 */
