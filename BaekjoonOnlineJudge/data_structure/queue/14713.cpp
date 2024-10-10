#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;

string str;

vector<queue<string>> qVec;
queue<string> resQ;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;
    cin.ignore();

    while (n--)
    {
        getline(cin, str);

        stringstream ss{ str };
        
        queue<string> q;
        string temp;

        while (ss >> temp)
        {
            q.push(temp);
        }

        qVec.push_back(q);
    }

    getline(cin, str);

    stringstream ss{ str };
    string temp;

    while (ss >> temp)
    {
        resQ.push(temp);
    }

    while (resQ.size() > 0)
    {
        string temp = resQ.front();

        bool flag = false;

        for (queue<string>& elemQ : qVec)
        {
            if (0 == elemQ.size())
                continue;

            if (temp == elemQ.front())
            {
                resQ.pop();
                elemQ.pop();

                flag = true;

                break;
            }
        }

        if (false == flag)
            break;
    }

    if (resQ.size() > 0)
    {
        cout << "Impossible";
    }
    else
    {
        for (queue<string>& elemQ : qVec)
        {
            if (elemQ.size() > 0)
            {
                cout << "Impossible";

                return 0;
            }
        }
        
        cout << "Possible";
    }
    
    return 0;
}
