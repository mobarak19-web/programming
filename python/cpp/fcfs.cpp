// without aravel time  calculate the  fist come fist service

#include <iostream>
using namespace std;
int main() {
     int bt[]={3, -2, 5, -10, 2, 6, -5};
     int ct[7], tat[7], wt[7], rt[7];
     ct[0]=bt[0];
     for(int i=1;i<7;i++)
     {
        ct[i]=ct[i-1]+bt[i];
     }
     for(int i=0;i<7;i++){
        tat[i]=ct[i];
        wt[i]=tat[i]-bt[i];
        rt[i]=wt[i];
     }
     for(int i=0;i<7;i++){
        cout << "Process " << i+1 << ": CT=" << ct[i] << ", TAT=" << tat[i] << ", WT=" << wt[i] << ", RT=" << rt[i] << endl;
     }

    return 0;
}