#include <vector>
#include <string>

using namespace std;

class FriendScore {
    public:
    int highestScore(vector<string> fList) {
        int maxFriend=0;
        int mSize = fList.size(); // matrix size of 2d-array
        
        for(int i=0; i<mSize; i++) {
            int cnt = 0;
            for(int j=0; j<mSize; j++) {
                if (i==j)
                    continue;
                
                if (fList[i][j] == 'Y') {
                    cnt++;
                } else {
                    for (int k=0; k<mSize; k++) {
                        if (fList[j][k]=='Y' && fList[k][i] == 'Y') {
                        	cnt++;    
                        }
                    }
                }
                
                maxFriend = max(cnt, maxFriend);
            }
        }
        return maxFriend;
    }
};