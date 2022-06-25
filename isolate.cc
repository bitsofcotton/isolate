#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <iomanip>
#include <assert.h>

#include "lieonn.hh"
typedef myfloat num_t;
#include "isolate.hh"

int main(int argc, const char* argv[]) {
  std::string s;
  assert(2 < argc);
  const auto n(std::atoi(argv[1]));
  const auto N(std::atoi(argv[2]));
  std::vector<SimpleMatrix<num_t> > A;
  A.reserve(N);
  for(int k = 0; k < N; k ++) {
    A.emplace_back(SimpleMatrix<num_t>(n, n));
    int i(0);
    int j(0);
    while(std::getline(std::cin, s, '\n')) {
      std::stringstream ins(s);
      ins >> A[k](i, j ++);
      if(A[k].cols() <= j) { i ++; j ^= j; }
      if(A[k].rows() <= i) break;
    }
    std::cout << A[k] << std::endl;
  }
  auto B(isolate<num_t>(A));
  auto Binv(B.inverse());
  std::cout << std::endl << std::endl;
  std::cout << B << std::endl;
  for(int k = 0; k < A.size(); k ++)
    std::cout << A[k] * Binv << std::endl;
  return 0;
}

