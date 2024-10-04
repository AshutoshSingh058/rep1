#include <bits/stdc++.h>
using namespace std;

int main(){
    int brr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}, {13, 14, 15, 16}};
    int arr[4][4]={{1,12, 11, 10},{2,13 ,16,9},{3,14,15,8}, {4, 5, 6, 7}};
    int sr=0, cr=3, sc=0, cc=3 ,c=0;
    while(true){
        for(int i=sr; i<=cr; i++){
            cout<<arr[i][sc]<<" "; c++;
        }
        sc++;
        if(c==16)break;
        for(int i=sc; i<=cc; i++){
            cout<<arr[cr][i]<<" "; c++;
        }
        cr--;
        if(c==16)break;
        for(int i=cr; i>=sr; i--){
            cout<<arr[i][cc]<<" "; c++;
        }
        cc--;
        if(c==16)break;
        for(int i=cc; i>=sc; i--){
            cout<<arr[sr][i]<<" "; c++;
        }
        sr++;
        if(c==16)break;
    
    }
}