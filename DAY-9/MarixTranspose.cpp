#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    cout<<"enter rows and column";
    cin>>rows>>cols;
    
    cout<<"enter matrix";
    int mat[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>mat[i][j];
        }
    }

    //transpose:swap rows and cols
    int trans[cols][rows];
    for(int i=0;i<rows;i++){
         for(int j=0;j<cols;j++){
            trans[j][i]=mat[i][j];
    }
}
for(int i=0;i<rows;i++){
         for(int j=0;j<cols;j++){
            cout<<trans[i][j]<<" ";
         }
cout<<endl;
}
return 0;
}