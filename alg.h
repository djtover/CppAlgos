

#include <iostream>
using namespace std;
template<typename T>
T Add_n( T b,  T e, size_t n)
{
  if(b==e){
    return e;
  }
   int sum = 0;
   int count = 0;
     for(auto i = b; i<e; i+=n){
      for(auto j = i; j<e && j<i+n; j++){
        sum+=*j;
      }
      auto it = b+count;
      *it = sum;
      count++;
      sum=0;
     }
     // cout<<"count="<< count<<endl;
    auto itr = b+count;
   return itr;
}

template<typename T>
T Transpose(T b, T e ){
  if(b==e){
    return e;
  }
  auto beg = b;
  int size =0;

  while(beg!=e){
    beg++;
    size++;
  }
  for(int i =0; i<size/2; i++){
    auto first = b + 2*i;
    auto second = b + 2*i+1;
    beg = second + 1;
    std::iter_swap(first,second);
  }

  // cout<<size<<endl;
  return beg;
}
