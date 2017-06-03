#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

void scenario1(vector < int > arr, int n)
{
  int i,num;
	char c;
	while(1)
  {
  	cout<<"\nEnter the query\n";
  	cin>>num;
  	for(i=n-1;i>=0;i--)
  	{
  		if (num<=arr[i])
  		{
  			arr[i]-=num;
  			break;
  		}
  	}
  	
  	for(i=0;i<n;i++)
      cout<<arr[i]<<'\t';
    cout<<endl;
    
    cout<<"Continue?[y/n]";
  	cin>>c;
  	if (c == 'N' || c == 'n')
  		break;
    
  }
}
void scenario2(vector<int> arr, int n)
{
	int i,j,k,min;
	 int num;
	 char c;
	 
	while(1)
  {
  	cout<<"\nEnter the query\n";
  	cin>>num; 
  	for (i=0;i<n;i++)
  	{
  		if(arr[i] >= num)
  		{
  			min = arr[i];
  			j = i;
  			break;
  		}
  	}
  	k = j;		
  	for(i=k;i<n;i++)
  	{
  		if(arr[i] >= num && arr[i] <= min)
  		{
  			min = arr[i];
  			j = i;
  		}
  	}	
  	
  	arr[j] = arr[j] - num;
  	
  	for(i=0;i<n;i++)
      cout<<arr[i]<<'\t';
    cout<<endl;  
    
    cout<<"Continue?[y/n]";
  	cin>>c;
  	if (c == 'N' || c == 'n')
  		break;
  }
}

void scenario3(vector<int> arr, int n)
{
	int i,j,k,max;
	int num;
	char c;
	
	while(1)
  {
	cout<<"\nEnter the query\n";
	cin>>num;
  	for (i=0;i<n;i++)
  	{
  		if(arr[i] >= num)
  		{
  			max = arr[i];
  			j = i;
  			break;
  		}
  	}
  	k = j;		
  	for(i=k;i<n;i++)
  	{
  		if(arr[i] >= num && arr[i] >= max)
  		{
  			max = arr[i];
  			j = i;
  		}
  	}
  	
  	arr[j] = arr[j] - num;
  	
  	for(i=0;i<n;i++)
      cout<<arr[i]<<'\t';
    cout<<endl;
    
    cout<<"Continue?[y/n]";
	cin>>c;
	if (c == 'N' || c == 'n')
		break;
  }
}


int main()
{
   int i,n,q;
   char ch;
   cout<<"Enter limit";
   cin>>n;
   vector<int> a(n);
   cout<<"Enter the array";
    for(int i = 0; i < n; i++)
    {
       cin >> a[i];
    }

for(i=0;i<n;i++)
  cout<<a[i]<<'\t';
  
 cout<<"\nEnter the scenario number\n";
 cin>>ch;
 
 switch(ch)
 {
  case '1':
    scenario1(a,n);
    break;
  case '2':
    scenario2(a,n);
    break;
  case '3':
    scenario3(a,n);
    break;
  default:
    cout<<"Enter proper choice";
 }

return 0;
}