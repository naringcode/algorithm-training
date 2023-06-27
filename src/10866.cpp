#include <bits/stdc++.h>

using namespace std;

enum class Type : int
{
    PushFront,
    PushBack,
    PopFront,
    PopBack,
    Size,
    Empty,
    Front,
    Back
} type;

deque<int> vec;

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

        if ("push_front" == str)
        {
            type = Type::PushFront;
        }
        else if ("push_back" == str)
        {
            type = Type::PushBack;
        }
        else if ("pop_front" == str)
        {
            type = Type::PopFront;
        }
        else if ("pop_back" == str)
        {
            type = Type::PopBack;
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
            case Type::PushFront:
            {
                cin >> nn;

                vec.push_front(nn);

                break;
            }
            
            case Type::PushBack:
            {
                cin >> nn;

                vec.push_back(nn);

                break;
            }

            case Type::PopFront:
            {
                int val = -1;

                if (vec.size())
                {
                    val = vec.front();

                    vec.pop_front();
                }

                cout << val << '\n';

                break;
            }
            
            case Type::PopBack:
            {
                int val = -1;

                if (vec.size())
                {
                    val = vec.back();

                    vec.pop_back();
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
