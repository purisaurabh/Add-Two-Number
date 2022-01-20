#include <bits/stdc++.h>
using namespace std;

class Addition
{
    public:
        int getsum(int a , int b)
        {
            vector<int>v{a,b};
            return accumulate(begin(v),end(v),0);
        }
};

int main()
{
    Addition ad;
    int a ,b;
    cin >> a >> b;
    cout << ad.getsum(a,b) << endl;
}