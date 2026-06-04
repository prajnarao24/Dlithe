//longesr consecutive sequence
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int largest(vector<int> nums){
    if(nums.size()==0){
        return 0;
    }

    sort(nums.begin(),nums.end());           //first it will sort from 100,4,200,1,3,2 to 1,2,3,4,100,200

    int longest=1;
    int count=1;

    for(int i=1;i<nums.size();i++){        //1=efore 1 nothijng is there so it will go to else and max(longest,count)=1
        if(nums[i]==nums[i-1]){            //num[i]=2,num[i-1]=1 ,1+1=2, so count=2
            continue;                      //num[i]=3,num[i-1]=2, 2+1=3,so count=3
        }                                   //num[i]=4,num[i-1]=3, 3+1=4 so count4
        else if(nums[i]==nums[i-1]+1){      //num[i]=100, num[i-1]=4+1=5, it is not equal so max(longest(1),count(4))=4
            count++;                        //num[i]=200, num[i-1]=100+1=101, it is not equal so max(longest(1),count(4))=4
        }
        else{
            longest=max(longest,count);
            return longest;
        }
    }

}
int main(){
    vector<int>nums={100,4,200,1,3,2};
    cout<<largest(nums);
    return 0;
}