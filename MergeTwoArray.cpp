#include<iostream>
using namespace std;
int main()
{
  int n,m;
cout<<"Enter n for first array elements ";
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{
cout<<"Enter arr["<<i<<"] ";
cin>>arr[i];
}

cout<<"Enter m for second array elements ";
cin>>m;
int brr[m];
for(int i=0;i<m;i++)
{
cout<<"Enter brr["<<i<<"] ";
cin>>brr[i];
}

int crr[n+m];
int index=0,index1=0,index2=0;
// compare to sorted array and merge into new array as sorted
while(index<n && index1<m)
{
if(arr[index]<=brr[index1])
{
crr[index2]=arr[index];
index++;
}else{
crr[index2]=brr[index1];
index1++;
}
index2++;
}

while(index<n)
{
  crr[index2]=arr[index];
  index2++;
index++;
}

while(index1<m)
{
  crr[index2]=brr[index1];
  index2++;
index1++;
}

for(int i=0;i<n+m;i++)
{
cout<<crr[i]<<" ";
}

return 0;
}
