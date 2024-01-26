#include <string>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle) {
        return (int)haystack.find(needle);
    }
};