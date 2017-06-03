//Roy 106116071
#include <iostream>
#include <conio.h>

//insertion sort
int main(){
    int a[10], n, i, j, temp;
    cout<<"enter the limit\n";
    cin>>n
    cout<<"enter the elements\n";
    for (i = 0; i < n; i++){
        cin>>a[i];
    }
 for (i = 1; i < n; i++)
   {
       temp = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > temp)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = temp;
   }
}
    cout<<"sorted array\n";
    for (i = 0; i < n; i++){
	cout<<a[i]<<endl;
    }
    getch();
}
