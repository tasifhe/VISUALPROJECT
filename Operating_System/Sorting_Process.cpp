#include<bits/stdc++.h>
using namespace std;
class Process{
    public:
    int PID;
    int AT;
    int PN;
    void display_all(Process p){
        cout << "   "<<p.PID << "\t   " << p.AT << "\t   " << p.PN<<endl;
    }
};
bool comp_at(Process p1, Process p2){
    if(p1.AT == p2.AT)
        return p1.PN > p2.PN;
    return p1.AT < p2.AT;
}
bool comp_pn(Process p1, Process p2){
    return p1.PN > p2.PN;
}

/*
1 2 5           
2 4 9
3 1 4
4 9 2
5 11 10
6 9 5
7 9 8

  PID     A_T     P_T
   3       1       4
   1       2       5
   2       4       9
   7       9       8
   6       9       5
   4       9       2
   5       11      10

  PID     A_T     P_T
   5       11      10
   2       4       9
   7       9       8
   1       2       5
   6       9       5
   3       1       4
   4       9       2

*/

int main()
{
    Process p[7];
    for(int i = 0; i<7; i++)
        cin>>p[i].PID >> p[i].AT>>p[i].PN;
    sort(p, p+7, comp_at);
    cout<< "  PID" <<"\t  A_T"<<"\t  P_T"<<endl;
    for(int i = 0; i<7; i++)
        p->display_all(p[i]);
    cout<<endl;  
    sort(p, p+7, comp_pn);
    cout<< "  PID" <<"\t  A_T"<<"\t  P_T"<<endl;
    for(int i = 0; i<7; i++)
        p->display_all(p[i]);
    return 0;
}