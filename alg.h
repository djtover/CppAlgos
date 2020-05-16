

#include <iostream>
using namespace std;
template<typename T>
T Add_n( T b,  T e, const size_t n)
{
  if(b==e){
    return e;
  }
   int sum = 0;
   int count = 0;
     for(T i = b; i<e; i+=n){
      for(T j = i; j<e && j<i+n; j++){
        sum+=*j;
      }
      T it = b+count;
      *it = sum;
      count++;
      sum=0;
     }
    auto itr = b+count;
   return itr;
}

template<typename T>
T Transpose(T b, T e ){
  if(b==e){
    return e;
  }
  T beg = b;
  int size = std::distance(b,e);

  for(int i =0; i<size/2; i++){
    auto first = b + 2*i;
    auto second = b + 2*i+1;
    beg = second + 1;
    std::iter_swap(first,second);
  }

  return beg;
}


template<class I, class O, class Oper>
O Transform(I b, I e, O o,
                   Oper f)
{


if(b==e || std::distance(b,e)%2!=0){
  return o;
}


  for(I itrB = b; itrB!=e; itrB+=2 ){
      *o++ = f(*(itrB), *(itrB+1));

  }
    return o;
}
