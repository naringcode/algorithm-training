#include <bits/stdc++.h>

using namespace std;

int a;
int b;

int main()
{
    cin >> a >> b;

    print("{}", a);

    int sum = ranges::fold_left(views::iota(a + 1, b + 1), a, [](int lhs, int rhs) {
                  print("+{}", rhs);

                  return lhs + rhs;
              });

    println("={}", sum);

    return 0;
}
