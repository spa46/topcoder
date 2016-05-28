#include <algorithm>
#include <vector>
#include <map>

using namespace std;

class ASeries {
    public:
        int longest(vector<int> arr) {
            map<int, int> seq;
            int max = 0;

            sort(arr.begin(), arr.end());

            for(vector<int>::iterator it1=arr.begin(); it1+1!=arr.end(); it1++) {
                int diff = *(it1+1) - *it1;
                std::map<int,int>::iterator it2 = seq.find(diff);
                
				if (it2 != seq.end() ) {
                    seq[diff]++;
                } else {
                	seq.insert(std::pair<char,int>(diff, 1));
                }
            }
        
            for(map<int, int>::iterator it=seq.begin(); it!=seq.end(); it++) {
                if (max < it->second) {
                    max = it->second;
                }
            }
        return max+1;
    }
};