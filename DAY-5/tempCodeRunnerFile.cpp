#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>height){
    int maxwater=0;
    int lp=0,rp=height.size()-1;

    while(lp<=rp){
        int w=rp-lp;
        int ht=min(height[lp],height[rp]);
        int curwater=w*ht;
        maxwater=max(maxwater,curwater);
        if(height[lp]<height[rp]){
            lp++;
        }
        else{
            rp--;
        }
    }
    return maxwater;
}
int main(){
vector<int> height = {3,4,6,5,8,9,10};
maxArea(height);
return 0;
}

