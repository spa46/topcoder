using namespace std;

class CrazyBot {
    private:
    const static int PLOT = 100;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0,  -1, 1};
    double prob[4] = {0.0, 0.0, 0.0, 0.0};
    bool visit[PLOT][PLOT] = { {false} };
  	public:
        double getProbability(int n, int east, int west, int south, int north) {
            prob[0] = east/100.0;
            prob[1] = west/100.0;
            prob[2] = south/100.0;
            prob[3] = north/100.0;
            
            return dfs(PLOT/2, PLOT/2, n);
        }

        double dfs(int x, int y, int n) {
            if (visit[x][y])
                return 0;
            if (n==0) 
                return 1;
            
            double out = 0;
            visit[x][y]=true;
            
            for(int i=0; i<4; i++) {
                out+=dfs(dx[i]+x, dy[i]+y, n-1)*prob[i];
            }
            
            visit[x][y]=false;
            
            return out;
        }
};