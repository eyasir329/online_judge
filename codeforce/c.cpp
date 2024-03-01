// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > mat;
vector<int> s;
vector<int> d;
int m = 2, n = 3;

// Function to print all the paths
void printVector(vector<int> path)
{
    int cnt = path.size();
    for (int i = 0; i < cnt; i += 2)
        cout << mat[path[i]][path[i + 1]]
             << " ";
    cout << endl;
}

// Function to find all the paths recursively
void countPaths(int i, int j, vector<int> path)
{

    // Base Case
    if (i > d[0] || j > d[1])
        return;
    path.push_back(i);
    path.push_back(j);

    // Destination is reached
    if (i == d[0] && j == d[1]) {
        printVector(path);
        return;
    }

    // Calling the function
    countPaths(i, j + 1, path);
    countPaths(i + 1, j, path);
}

// DriverCode
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    mat = { { 1, 2, 3 },
        { 4, 5, 6 }
    };
    s = { 0, 0 };
    d = { 1, 2 };
    vector<int> path;

    countPaths(s[0], s[1], path);
    return 0;
}
