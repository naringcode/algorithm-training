#include <string>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// y, x
map<char, pair<int, int>> mpDelta{ 
    { 'U', { 1, 0 } }, { 'R', { 0, 1 } }, { 'D', { -1, 0 } }, { 'L', { 0, -1 } }
};

int solution(string dirs) {
    set<pair<pair<int, int>, pair<int, int>>> mySet;
    
    int currY = 0;
    int currX = 0;
    
    for (char ch : dirs)
    {
        auto [dy, dx] = mpDelta[ch];
        
        int ny = currY + dy;
        int nx = currX + dx;
        
        if (ny < -5 || nx < -5 || ny > 5 || nx > 5)
            continue;
        
        pair<int, int> mv1{ ny, nx };
        pair<int, int> mv2{ currY, currX };
        
        if (mv1 > mv2)
        {
            std::swap(mv1, mv2);
        }
        
        mySet.insert({ mv1, mv2 });
        
        currY = ny;
        currX = nx;
    }
    
    int answer = mySet.size();
    
    return answer;
}
