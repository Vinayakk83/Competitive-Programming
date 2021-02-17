class UndergroundSystem {
public:
    
    unordered_map<int, pair<string, int>> idMap;
    unordered_map<string, unordered_map<string, pair<int, int>>> stationMap;
    
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        idMap[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto p = idMap[id];
        stationMap[p.first][stationName].first += t - p.second;
        stationMap[p.first][stationName].second++;
    }
    
    double getAverageTime(string startStation, string endStation) {
        auto p = stationMap[startStation][endStation];
        return (double)p.first / p.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
