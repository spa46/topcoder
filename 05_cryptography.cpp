#include <vector>
#include <algorithm>

using namespace std;

class Cryptography {
    public:
    long long encrypt(vector<int> numbers) {
        long long out=1; // maximum product that will be returned        
        int pos = distance(numbers.begin(), min_element(numbers.begin(), numbers.end())); //position of min of numbers
        
        numbers.at(pos)++; // increment minimum element by 1.
        
        for(vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
            out *= *(it); //multiply elements.
        }
        return out;
    }
};