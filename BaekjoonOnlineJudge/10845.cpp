#include <bits/stdc++.h>

using namespace std;

enum class Type : int
{
    Push,
    Pop,
    Size,
    Empty,
    Front,
    Back
} type;

queue<int> vec;

int n;

string str;
int    nn;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        if ("push" == str)
        {
            type = Type::Push;
        }
        else if ("pop" == str)
        {
            type = Type::Pop;
        }
        else if ("size" == str)
        {
            type = Type::Size;
        }
        else if ("empty" == str)
        {
            type = Type::Empty;
        }
        else if ("front" == str)
        {
            type = Type::Front;
        }
        else if ("back" == str)
        {
            type = Type::Back;
        }

        switch (type)
        {
            case Type::Push:
            {
                cin >> nn;

                vec.push(nn);

                break;
            }

            case Type::Pop:
            {
                int val = -1;

                if (vec.size())
                {
                    val = vec.front();

                    vec.pop();
                }

                cout << val << '\n';

                break;
            }

            case Type::Size:
            {
                cout << vec.size() << '\n';

                break;
            }

            case Type::Empty:
            {
                cout << vec.empty() << '\n';

                break;
            }

            case Type::Front:
            {
                int val = -1;

                if (vec.size())
                {
                    val = vec.front();
                }

                cout << val << '\n';

                break;
            }

            case Type::Back:
            {
                int val = -1;

                if (vec.size())
                {
                    val = vec.back();
                }

                cout << val << '\n';

                break;
            }
        }
    }

    return 0;
}
