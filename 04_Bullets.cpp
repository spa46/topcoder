#include <vector>
#include <string>

using namespace std;

class Bullets {
	public:
    int match(vector<string> scratches, string pattern) {
	
		// Iterator for scratches
        for(vector<string>::iterator it = scratches.begin(); it != scratches.end(); it++) {
		
			// Staring point rotation
            for(int i=0; i<(*it).size(); i++) {
                string rotstr = (*it).substr(i).append((*it).substr(0,i)); // i = starting point
                
				//compare pattern for each rotation
            	if (rotstr.compare(pattern) == 0) {
                    return (it - scratches.begin());
                }
            }
        }
        return -1;
    }
};