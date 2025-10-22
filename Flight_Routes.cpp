#include<bits/stdc++.h>
using namespace std;
int n, m, k;
vector<pair<int, int>> adj_list[100005];
vector<long long int> dis[100005];

void dijkstra(int src)
{
    priority_queue<pair<long long int, int>, vector<pair<long long int, int>>, greater<pair<long long int, int>>> pq;
    pq.push({ 0,src });
    dis[src][0] = 0;

    while (!pq.empty())
    {
        int par_node = pq.top().second;
        long long int par_cost = pq.top().first;
        pq.pop();

        if (dis[par_node][k - 1] < par_cost)
        {
            continue;
        }

        for (auto child : adj_list[par_node])
        {
            int child_nod = child.first;
            int child_cost = child.second;
            if (par_cost + child_cost < dis[child_nod][k - 1])
            {
                dis[child_nod][k - 1] = par_cost + child_cost;
                pq.push({ dis[child_nod][k - 1],child_nod });
                sort(dis[child_nod].begin(), dis[child_nod].end());
            }
        }
    }
}

int main()
{

    cin >> n >> m >> k;
    while (m--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({ b,c });
    }

    for (int i = 1;i <= n;i++)
    {
        dis[i].resize(k);
        for (int j = 0;j < k;j++)
        {
            dis[i][j] = 1e18;
        }
    }
    dijkstra(1);
    for (long long int ele : dis[n])
    {
        cout << ele << " ";
    }

    return 0;
}