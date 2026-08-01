class DSU {
public:
    vector<int> parent, rank;
    int components;

    DSU(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);

        components = n;

        for (int i = 1; i <= n; i++)
            parent[i] = i;
    }

    int find(int x) {
        if (parent[x] == x)
            return x;

        return parent[x] = find(parent[x]);
    }

    bool unite(int x, int y) {

        x = find(x);
        y = find(y);

        if (x == y)
            return false;

        if (rank[x] < rank[y])
            swap(x, y);

        parent[y] = x;

        if (rank[x] == rank[y])
            rank[x]++;

        components--;

        return true;
    }
};

class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {

        DSU alice(n), bob(n);

        int removed = 0;

        // Type 3 first
        for (auto &e : edges) {
            if (e[0] == 3) {

                bool a = alice.unite(e[1], e[2]);
                bool b = bob.unite(e[1], e[2]);

                if (!a && !b)
                    removed++;
            }
        }

        // Alice
        for (auto &e : edges) {
            if (e[0] == 1) {

                if (!alice.unite(e[1], e[2]))
                    removed++;
            }
        }

        // Bob
        for (auto &e : edges) {
            if (e[0] == 2) {

                if (!bob.unite(e[1], e[2]))
                    removed++;
            }
        }

        if (alice.components != 1 || bob.components != 1)
            return -1;

        return removed;
    }
};