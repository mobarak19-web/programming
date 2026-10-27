
#include<iostream>
using namespace std;

int main() {
    int n=5;
    string p[]={"P1","P2","P3","P4","P5"};
    int at[]={0,0,0,0,0};
    int bt[]={5,3,1,2,5};
    int rt[5],ct[5],tat[5],wt[5];
    int tq=2, current_time=0, count=0;

    for(int i=0;i<n;i++)
        rt[i]=bt[i];
while(count<n) {
        int done=0;
    for(int i=0;i<n;i++) {
            if(at[i]<=current_time && rt[i]>0) {
                done=1;

                if(rt[i]>tq) {
                    current_time+=tq;
                    rt[i]-=tq;
                }
                else {
                    current_time+=rt[i];
                    rt[i]=0;
                    ct[i]=current_time;
                    count++;
                }

    for(int j=0;j<n;j++) {
     if(at[j]<=current_time && rt[j]>0)
            done=1;
                }
            }
        }

        if(done==0)
            current_time++;
    }

    cout<<"Process\tAT\tBT\tCT\tTAT\tWT\n";

    for(int i=0;i<n;i++) {
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];

        cout<<p[i]<<"\t"<<at[i]<<"\t"<<bt[i]
        <<"\t"<<ct[i]<<"\t"<<tat[i]<<"\t"
        <<wt[i]<<endl;
    }

    return 0;
}