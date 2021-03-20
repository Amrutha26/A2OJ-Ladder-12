#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4, side;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2)
    {
        side = y2 - y1;
        x3 = x2 + side;
        x4 = x1 + side;
        y3 = y2;
        y4 = y1;
    }
    else if (y1 == y2)
    {
        side = x2 - x1;
        x3 = x2;
        x4 = x1;
        y4 = y1 + side;
        y3 = y2 + side;
    }
    else
    {
        if (abs(y2 - y1) == abs(x2 - x1))
        {
            x3 = x2;
            x4 = x1;
            y3 = y1;
            y4 = y2;
        }
        else
        {
            cout << "-1";
            return 0;
        }
    }
    cout << x3 << " " << y3 << " " << x4 << " " << y4;
    return 0;
}