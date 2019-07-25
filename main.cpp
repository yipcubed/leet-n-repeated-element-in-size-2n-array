#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>

// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();

class Solution {
public:
  int repeatedNTimes(vector<int> &A) {
    unordered_map<int, int> m;
    for (auto& item: A) {
      ++m[item];
      if (m[item] == A.size() / 2)
        return item;
    }
    return -1;
  }
};

void test1() {
  vector<int> v1{1, 2, 3, 3};

  cout << "3 ? " << Solution().repeatedNTimes(v1) << endl;

  vector<int> v2{2,1,2,5,3,2};

  cout << "2 ? " << Solution().repeatedNTimes(v2) << endl;
}

void test2() {

}

void test3() {

}