#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<pair<int, int>> q; // 건너는 트럭만 생각
    int sec = 0;
    
    for (int truckW : truck_weights)
    {
        while (truckW > weight)
        {
            auto [w, s] = q.front();
            q.pop();
            
            weight += w;
            sec = max(sec, s + bridge_length - 1);
        }

        sec++;
            
        weight -= truckW;
            
        q.push({ truckW, sec });
    }
    
    return sec + bridge_length;
}
