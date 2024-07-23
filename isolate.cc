#include <cstdio>
#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <iomanip>
#include <algorithm>
#include <assert.h>
#include <sys/resource.h>

#include "lieonn.hh"
typedef myfloat num_t;

int main(int argc, const char* argv[]) {
std::string s;
  assert(1 < argc);
  vector<SimpleMatrix<num_t> > A;
  A.resize(argc - 1);
  for(int k = 1; k < argc; k ++) {
    ifstream input;
    input.open(argv[k]);
    if(input.is_open())
      input >> A[k];
    else assert(0 && "Could not open argv[k]");
    input.close();
  }
  SimpleMatrix<num_t> m;
  std::cin >> m;
  std::cout << balanceIntInvariant<num_t>(m, A) << std::endl;
  return 0;
}

