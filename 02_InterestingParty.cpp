#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class InterestingParty {
    public:
        int bestInvitation(vector<string> item1, vector<string> item2) {
            map<string, int> myMap;
            int num_favourite = 0;

            for (vector<string>::iterator it = item1.begin(); it!=item1.end(); it++) {
                myMap[*it]++;
            }

            for (vector<string>::iterator it = item2.begin(); it!=item2.end(); it++) {
                myMap[*it]++;
            }
            
            for (map<string, int>::iterator it=myMap.begin(); it!=myMap.end(); it++) {
                num_favourite = max(num_favourite, it->second);
            }

            return num_favourite;
        }
};