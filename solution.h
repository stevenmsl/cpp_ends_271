
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_set>
#include <string>

using namespace std;
namespace sol271
{
    class Solution
    {
    private:
    public:
        string encode(vector<string> &strs);
        vector<string> decode(string str);
    };
}
#endif