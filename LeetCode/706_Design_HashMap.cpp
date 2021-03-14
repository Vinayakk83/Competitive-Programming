class MyHashMap {
public:
    int hash_map[1000001];
    /** Initialize your data structure here. */
    MyHashMap() {
        memset(hash_map, -1, sizeof(hash_map));
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        hash_map[key] = value;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        return hash_map[key];
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        hash_map[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
