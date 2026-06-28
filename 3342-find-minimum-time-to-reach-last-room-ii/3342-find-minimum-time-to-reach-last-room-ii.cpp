class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int m = moveTime.size();
        int n = moveTime[0].size();

        vector<vector<vector<int>>> dist(
            m, vector<vector<int>>(n, vector<int>(2, INT_MAX)));

        priority_queue<
            vector<int>,
            vector<vector<int>>,
            greater<vector<int>>
        > pq;

        dist[0][0][0] = 0;
        pq.push({0, 0, 0, 0});   // time, row, col, parity

        vector<int> dx = {-1, 1, 0, 0};
        vector<int> dy = {0, 0, -1, 1};

        while (!pq.empty()) {
            auto cur = pq.top();
            pq.pop();

            int time = cur[0];
            int x = cur[1];
            int y = cur[2];
            int parity = cur[3];

            if (time > dist[x][y][parity])
                continue;

            if (x == m - 1 && y == n - 1)
                return time;

            int moveCost = (parity == 0) ? 1 : 2;

            for (int k = 0; k < 4; k++) {
                int nx = x + dx[k];
                int ny = y + dy[k];

                if (nx < 0 || ny < 0 || nx >= m || ny >= n)
                    continue;

                int arrive = max(time, moveTime[nx][ny]) + moveCost;
                int np = parity ^ 1;

                if (arrive < dist[nx][ny][np]) {
                    dist[nx][ny][np] = arrive;
                    pq.push({arrive, nx, ny, np});
                }
            }
        }

        return -1;
    }
};