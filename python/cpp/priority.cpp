//priority 
#include<iostream>
using namespace std;
int main() {
    int n=5;
    string p[]={"P1","P2","P3","P4","P5"};
    int at[]={0,1,2,3,4};
    int bt[]={5,3,1,2,5};
    int pr[]={3,2,1,4,2};
    int rt[5],ct[5],tat[5],wt[5];
    int count=0, current_time=0;
    for(int i=0;i<n;i++)
        rt[i]=bt[i];
while(count<n) {
int index=-1, min_pr=1000;
for(int i=0;i<n;i++) {
    if(at[i]<=current_time && rt[i]>0 &&
               pr[i]<min_pr) {
                min_pr=pr[i];
                index=i;
            }
        }
       if(index!=-1) {
            rt[index]--;
            current_time++;
            if(rt[index]==0) {
                ct[index]=current_time;
                count++;
            }
        }
        else {
            current_time++;
        }
    }
cout<<"Process\tAT\tBT\tPR\tCT\tTAT\tWT\n";
for(int i=0;i<n;i++) {
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];

        cout<<p[i]<<"\t"<<at[i]<<"\t"<<bt[i]
        <<"\t"<<pr[i]<<"\t"<<ct[i]<<"\t"
        <<tat[i]<<"\t"<<wt[i]<<endl;
    }

    return 0;
}