// Program to find minimum number of seats 
// required in a mess
#include<iostream>
#include<algorithm>
using namespace std;
 
// Returns minimum number of seats reqquired
int findPlatform(int arr[], int dep[], int n)
{
   // Sort arrival and departure arrays
   sort(arr, arr+n);
   sort(dep, dep+n);
 	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	for(int i=0;i<n;i++)
		printf("%d ",dep[i]);
	printf("\n");
   // seat_needed indicates number of setas
   // needed at a time
   int seat_needed = 1, result = 1;
   int i = 1, j = 0;
 
   // Similar to merge in merge sort to process 
   // all events in sorted order
   while (i < n && j < n)
   {
      // If next event in sorted order is arrival, 
      // increment count of seats needed
      if (arr[i] <= dep[j])
      {
          seat_needed++;
          i++;
 
          // Update result if needed 
          if (seat_needed > result) 
              result = seat_needed;
      }
 
      // Else decrement count of platforms needed
      else
      {
          seat_needed--;
          j++;
      }
   }
 
   return result;
}
 
// Driver program to test methods of graph class
int main()
{
	int n;
	cin>>n;
	int arr[100]; int dep[100];int k=0;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		arr[i]=a;dep[i]=b;
	}
	int x= findPlatform(arr,dep,n);
	cout<<x;
}
