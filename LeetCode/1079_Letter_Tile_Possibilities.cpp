class Solution {
public:
    int count = 0;
    void dfs(string tiles, int depth) {
        bool alph[26] = {false};
        for(int i = depth; i < tiles.length(); i++) {
            if(alph[tiles[i] - 'A'])
                continue;
            count++;
            alph[tiles[i] - 'A'] = true;
            swap(tiles[depth], tiles[i]);
            dfs(tiles, depth + 1);
            swap(tiles[depth], tiles[i]);
        }
    }
    
    int numTilePossibilities(string tiles) {
        dfs(tiles, 0);
        return count;
    }
};
