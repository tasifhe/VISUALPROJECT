#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string arr[8];
        for(int i=0;i<8;i++){
            string st;cin>>st;
            arr[i]=st;
        }
        int x,y;
        bool ch=false;
        for(int i=0;i<8;i++){
            int c=0;
            for (int j=0;j<8;j++){
                if(arr[i][j]=='#'){
                    c++;
                    y=j+1;
                }

            }
            if(c==2){
                ch=true;
            }
            if (ch==true && c==1){
                x=i+1;
                break;
            }
        }
        cout<<x<<" "<<y<<endl;
    }
}
