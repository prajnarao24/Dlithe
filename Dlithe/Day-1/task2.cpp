#include <iostream>
using namespace std;
int main(){

 int x=10;
 bool b=25;
 bool a=24;
 float y=10.5f;
 cout<<"sum is:"<<a+b<<endl;
 cout<<"sum is:"<<x+y<<endl; //here we're getting float value as answer,accoding to ype promotionality oth x and y have same size,Because of the precison..(long(8 byte whole no)+double(8 byte float )=double)
    return 0;
   }
