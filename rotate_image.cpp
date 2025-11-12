// rotate image
#include <iostream>
using namespace std; 

int main() {
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    int i=0,j=0,left=0,right,n,k;
    n=2;
    right=n;
    
    while(i<=n){
        for(j=0; j<=n; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
        i++;
    }
    
    /*j=0;
    while(j<n){
        for(k==j+1; k<=n; k++){
            swap(matrix[j][k],matrix[k][j]);
        }
        j++;
    }*/
    i=0;
    while(left<=right){
        while(i<=n){
            swap(matrix[i][left],matrix[i][right]);
            left++;
            right--;
        }
        i++;
    }
    
    i=0;
    j=0;
    while(i<=n){
        for(j=0; j<=n; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
        i++;
    }
    
    
    
    

    return 0;
}