#include <bits/stdc++.h>

using namespace std;
#define int long long int
#define vi vector<int>
#define vc vector<char>
#define pb push_back
#define all(a) a.begin(), a.end()
#define sz(a) ((int)a.size())
#define print(a)          \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vi arr(n, 0);
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // print(arr);
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        // int count = 1;
        //frequency
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = false;
                break;
            }
        }
    }

    if (flag)
    {
        vi arr2 = arr;
        sort(all(arr2));
        // print(arr2);
        vi arr3(n, 0);
        //double checker
        for (int i = 0; i < n; i++)
        {
            arr3[i] = i + 1;
        }
        bool eq = true;
        for (int i = 0; i < n; i++)
        {
            if (arr2[i] != arr3[i])
            {
                eq = false;
                break;
            }
        }
        if (eq)
        {
            bool tt = true;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != arr2[i])
                {
                    tt = false;
                    break;
                }
            }
            if (tt)
            {
                cout << "Yes" << endl;
            }
            else
            {
                bool x = false;
                for (int i = 1; i < n - 1; i++)
                {
                    if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1])
                    {
                        swap(arr[i], arr[i + 1]);
                        x = true;
                    }
                    
                }
                if (x)
                {
                    if(arr[0]!=1){
                        cout<<"No"<<endl;
                    }else{
                        cout<<"Yes"<<endl;
                    }
                    //print(arr);
                }
                else
                {
                    cout << "No" << endl;
                }
            }
        }
        else
        {
            cout << "No" << endl;
        }
        // print(arr3);
    }
    else
    {
        cout << "No" << endl;
    }
}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();

    int t = 1;
    cin >> t;

    while (t--)
        solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;
    return 0;
}

/*===============================================
  :::::::::::::Author :Eyasir Ahamed:::::::::::::
  :::::::::::::::eyasir329.com:::::::::::::::::::
  ===============================================*/