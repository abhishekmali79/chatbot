// rotate image
#include <iostream>
#include <iomanip>
using namespace std; 

int main() {
    int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int i=0,j=0,l=0,r,n,k;
    n=3;
    r=n;
    
    while(i<=n){
        for(j=0; j<=n; j++){
            cout<<matrix[i][j]<<setw(10);
        }
        cout<<setw(-10)<<endl;
        i++;
    }
      
    i=0;
    j=0;
    while(j<=n){
    	for(k=j+1;k<=n;k++){
            swap(matrix[k][j],matrix[j][k]);
            i++;
        }
        j++;
    }
    
    i=0;
    j=0;
    while(l<=r){
        for(k=0; k<=n; k++){
            swap(matrix[k][l],matrix[k][r]);
        }
        l++;
        r--;
    }
    
    i=0;
    j=0;
    while(i<=n){
        for(j=0; j<=n; j++){
            cout<<matrix[i][j]<<setw(10);
        }
        cout<<setw(-10)<<endl;
        i++;
    }
    
    
    
    

    return 0;
}