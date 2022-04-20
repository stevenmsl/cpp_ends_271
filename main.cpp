#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol271;

/*

*/

tuple<vector<string>> testFixture1()
{
  return make_tuple(vector<string>{"6|practice||", "many    spaces", "^%%%%*&#"});
}

void test1()
{
  auto f = testFixture1();
  cout << "Test 1 " << endl;
  cout << "Expect to see " << Util::toString(get<0>(f)) << endl;
  Solution sol;
  cout << Util::toString(sol.decode(sol.encode(get<0>(f)))) << endl;
}

main()
{
  test1();
  return 0;
}