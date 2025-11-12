#include<iostream>

using namespace std;

int binarySearch(int arr[],int n,int left,int right,int ele){
	    while(left <= right){
    	n=n/2;
    	if(ele==arr[n]){
    		cout<<"element found at index "<<n<<endl;
    		return n;
		}else if(ele>arr[n]){
			left=n+1;
			n=n+right+1;
		}
		else if (ele<arr[n]){
			right=n-1;
			n=n+left-1;
    
		}
	}
	
	cout<<"element dosent match"<<endl;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int left=0,right=9,ele,n;
    n= 9;

    cout<<"enter a number to search: ";
    cin>>ele;
    
    binarySearch(arr,n,left,right,ele);

return 0;
}