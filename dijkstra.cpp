const ll INF = 1e18;
vector<pair<ll, ll>> adj[N];
vi d;
vi p;
void dijkstra(int src, int n) {

    set <pii> s;
    d.assign(n + 1, INF);
    p.assign(n + 1, -1);
    d[src] = 0;

    s.insert({0, src});

    while (!s.empty()) {
        auto it = s.begin();
        int i = it->second;

        s.erase(it);//marked

        for (auto e : adj[i]) {

            int nb = e.ff, w = e.ss;

            if (d[i] + w < d[nb]) {
                p[nb] = i;
                s.erase({d[nb], nb});
                d[nb] = d[i] + w;
                s.insert({d[nb], nb});
            }
        }
    }

}
