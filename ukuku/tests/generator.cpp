#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;
using Int = long long;
const int MIN_A = 1;
const int MAX_A = 1000;
const int MIN_B = 1;
const int MAX_B = 1000;
signed main(int argc,char* argv[]){
  registerGen(argc, argv, 1);
  for (int t = 0; t < 20; t++) {
    ofstream of(format("02_random_%02d.in", t+1).c_str());
    of << rnd.next(MIN_A, MAX_A) << endl;
    of << rnd.next(MIN_B, MAX_B) << endl;
    of.close();
  }
  return 0;
}
