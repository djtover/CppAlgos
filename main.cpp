#include "alg.h"
#include <vector>



int main()
{
// vector<int> v;
// size_t st = 5;
// for (int i = 1; i <= 5; i++)
//        v.push_back(i);
//
// int * itr = Add_n(v.begin(), v.end(), st);


int ia[] = {1,2,3,4,5,6,7,8,9,10};
int * p = Transpose(begin(ia), end(ia));
cout<<*p<<"=pointer"<<endl;
cout<<*end(ia)<<endl;

for(int i=0; i<10;i++){
  cout<<ia[i]<<endl;
}
  return 0;
}
