#include <vector>

using namespace std;

class InterestingDigits {
    public:
    vector<int> digits(int base) {
        vector<int> out;

        //base starts from 2. (0 and 1 is ignored)
        for(int i=2; i<base; i++) {
            if (base%i == 1) { // 1 == base mod i  
				out.push_back(i);
            }
        }
    
    	return out;
    }
};