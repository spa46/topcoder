#include <string>

using namespace std;

class ThePalindrome {
    public:
    int find(string str) {
        for(int i=str.size();;i++) {
            bool flag = true;
            for(int j=0; j<str.size(); j++) {
                if (i-j-1<str.size() && str[i-j-1] != str[j]) {
                    flag = false;
                    break;
                }
            }
            
            if (flag) 
                return i;
        }
    }
};