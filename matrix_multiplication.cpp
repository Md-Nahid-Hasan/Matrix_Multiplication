#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,p,q,i,j,k,temp,flag;
    cout<<"Enter the dimension of 1st Matrix"<<endl;
    cin>>m>>n;
    cout<<"Enter the dimension of 2nd Matrix"<<endl;
    cin>>p>>q;
    if(n!=p){
        cout<<"Matrix Multiplication is not possible"<<endl;
        return 0;
    }
    ///Resultant matrix size m*q
    int m1[m][n], m2[p][q], r[m][q];
    ///user input for 1st matrix
     cout<<"Enter the values of 1st Matrix"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>m1[i][j];
        }
    }
    ///user input for 2nd matrix
    cout<<"Enter the values of 2nd Matrix"<<endl;
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            cin>>m2[i][j];
        }
    }

    ///algo implementation (3-nested loop)
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            r[i][j]=0;
            for(k=0;k<n;k++){
                    r[i][j]=r[i][j]+m1[i][k]*m2[k][j];
            }
        }
    }


    ///print of 1st matrix
    cout<<"Values of 1st Matrix"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }

///print of 2nd matrix
cout<<"Values of 2nd Matrix"<<endl;
   for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }


    ///print of resultant matrix
    cout<<"Values of Resultant Matrix"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
