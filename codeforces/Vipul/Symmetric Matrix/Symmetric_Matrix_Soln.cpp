#include<iostream>
using namespace std;
 
int main(){
  int t,n,m,l=0,p;
  cin>>t;
  int arr[2][2];
  string fin[t];
  for(int i=0;i<t;i++){
    cin>>n>>m;
    p=n;
    while(p!=0){
      for(int j=0;j<2;j++){
        for(int k=0;k<2;k++){
          cin>>arr[j][k];
        }
      }
      if(arr[0][1]==arr[1][0]){
        p--;
        continue;
      }
      else{
        l++;
      }
      p--;
    }
    if(l==n || m%2!=0){
      fin[i]="NO";
    }
    else{
      fin[i]="YES";
    }
    l=0;
  }
  for(int i=0;i<t;i++){
    cout<<fin[i]<<endl;
  }
  return 0;
}