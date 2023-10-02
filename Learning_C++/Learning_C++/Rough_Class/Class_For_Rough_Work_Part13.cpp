#include<bits/stdc++.h>
using namespace std;

// #define int long long

struct item
{
    double value, weight, valuePerWeight;
};

bool compare(item i1, item i2)
{
    return i1.valuePerWeight > i2.valuePerWeight;
}

signed main()
{
    int n;
    cin >> n;
    vector<item> items;
    for(int i=0; i<n; i++)
        {
            double v,w;
            cin >> v >> w;
            items.push_back({v,w,v/w});
        }
    double W;
    cin >> W;
    sort(items.begin(), items.end(), compare);
    int ans = 0;
    for(int i=0; i<n; i++)
        {
            if(W >= items[i].weight)
                {
                    W -= items[i].weight;
                    ans += items[i].value;
                }
            else
                {
                    ans += W * items[i].valuePerWeight;
                    W = 0;
                    break;
                }
        }
    cout << ans << endl;
    return 0;
}