#include <bits/stdc++.h>

using namespace std;

int n;

int start;
int duration;

vector<pair<int, int>> vec;

int res;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> start >> duration;

		vec.push_back({ start, duration });
	}

	sort(vec.begin(), vec.end());

	start = vec[0].first;
	duration = vec[0].second;

	res = start + duration;

	for (int i = 1; i < n; i++)
	{
		if (res < vec[i].first)
		{
			res = vec[i].first;
		}

		duration = vec[i].second;

		res += duration;
	}

	cout << res << '\n';
    
    return 0;
} 