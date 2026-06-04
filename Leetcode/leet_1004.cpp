//maximum consecutive ones |||

/*given:binar array and integer k
we are allowed to change to change at most k zeros into 1s

after flipping,we must fiind the maimum length of onsecutive 1's

left=starting of window,
right=end of window
 we move from left to right,if we see 0 then we'll increase count of 0

 if count>k then it is invaid window

 dry run:[1,1,1,0,0,0,1,1,1.1.0]
 k=2
 l=0
 zeos=0
 maxlen=0

 from o it should start
 
 0->1
 window:[1]
 zeros=0;
 maxlen=1

 1->1
 window:[1,1]
 zeros=0;
 maxLen=2

 2->1
 window;[1,1,1]
 zeros=0
 maxlen=3

 3->0
 window:[1,1,1,0]
 zeros=1
 maxlen=4

 4->0
 window=[1,1,1,0,0]
 zeros=2
 maxlen=5

 5->0
 window:[1,1,1,0,0,0]
 zeros=3>k so invalid window
 so we have to shrink fromleft
 if we remove 1 from left then,zeros=3(invalid)
then 1,zeros=3 still invalid
then 1,still invalid so remove 0,now zeros=2 so valid
[0,0]
maxlen is still 5


6->1
window[0,0,0,1]
zeros=2
mlen=6

7->1
*/

#include<iostream>
#include<vector>
using namespace std;

int Longest(vector<int>nums,int k){
    int left=0;
    int zerocount=0;
    int ans=0;

    for(int right=0;right<nums.size();right++){
        if(nums[right]==0){
            zerocount++;
        }

        while(zerocount>k){
            if(nums[left]==0){
                zerocount--;
            }
            left++;
        }
        ans=max(ans,right-left+1);
    }
    return ans;
}

int main(){
    vector<int>nums={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    cout<<Longest(nums,k);
    return 0;
}
