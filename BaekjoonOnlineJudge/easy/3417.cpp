#include <bits/stdc++.h>

using namespace std;

string encryptKey;
string plainStr;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> encryptKey;

        if ("0" == encryptKey)
            break;

        cin >> plainStr;

        transform(encryptKey.begin(), encryptKey.end(), encryptKey.begin(), [](char ch) { return ch - 'A' + 1; });
        transform(plainStr.begin(), plainStr.end(), plainStr.begin(), [](char ch) { return ch - 'A'; });

        for (size_t idx = 0; idx < plainStr.length(); idx++)
        {
            int enIdx = idx % encryptKey.length();

            plainStr[idx] = (plainStr[idx] + encryptKey[enIdx]) % 26;
            plainStr[idx] += 'A';
        }

        cout << plainStr << '\n';
    }

    return 0;
}
