#include <iostream>
using namespace std;
class Animal{
    public:
     virtual void sound(){
        cout<<"animal sound"<<endl;

    }

};

class dog:public Animal{
    public:
    void sound(){            //if we use virtula keyword then we'lll get "animal sound" as answer(virtul void sound(){})
        cout<<"bow"<<endl;
    }
};

int main(){
    Animal *a=new dog;   //
    a->sound();
    
    return 0;
}
