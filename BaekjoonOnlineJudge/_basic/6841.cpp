#include <bits/stdc++.h>

using namespace std;

string str;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> str;

        if ("TTYL" == str)
        {
            cout << "talk to you later\n";

            break;
        }

        if ("CU" == str)
        {
            cout << "see you\n";
        }
        else if (":-)" == str)
        {
            cout << "I’m happy\n";
        }
        else if (":-(" == str)
        {
            cout << "I’m unhappy\n";
        }
        else if (";-)" == str)
        {
            cout << "wink\n";
        }
        else if (":-(" == str)
        {
            cout << "I’m unhappy\n";
        }
        else if (":-P" == str)
        {
            cout << "stick out my tongue\n";
        }
        else if ("(~.~)" == str)
        {
            cout << "sleepy\n";
        }
        else if ("TA" == str)
        {
            cout << "totally awesome\n";
        }
        else if ("CCC" == str)
        {
            cout << "Canadian Computing Competition\n";
        }
        else if ("CUZ" == str)
        {
            cout << "because\n";
        }
        else if ("TY" == str)
        {
            cout << "thank-you\n";
        }
        else if ("YW" == str)
        {
            cout << "you’re welcome\n";
        }
        else
        {
            cout << str << '\n';
        }
    }

    return 0;
}
