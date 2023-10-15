#include <bits/stdc++.h>

using namespace std;
void takeIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    //takeIO();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int x = 0, y = 0, z = 0, p = 0, k = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == 'W')
            {
                p++;
            }
            else
            {

                if (s[i] == '1')
                    z = z + 1;
                if (s[i] == '2')
                    z = z + 2;
                if (s[i] == '3')
                    z = z + 3;
                if (s[i] == '4')
                    z = z + 4;
                if (s[i] == '5')
                    z = z + 5;
                if (s[i] == '6')
                    z = z + 6;
            }
            y++;
            k++;
            if (k % 6 == 0)
            {
                x++;
                y = 0;
            }
        }

        if (x > 1 && y !=1)
        {
            cout << x << "." << y << " Overs ";
        }else
        {
            cout << x << "." << y << " Over ";
        }

        if (z > 1)
        {
            cout << z << " "
                 << "Runs ";
        }else
        {
            cout << z << " "
                 << "Run ";
        }

        if (p > 1)
        {
            cout << p << " Wickets." << endl;
        }else
        {
            cout << p << " Wicket." << endl;
        }
    }
}