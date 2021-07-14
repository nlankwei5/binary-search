#include <iostream>

using namespace std;

int binarySearch(int arr[],int left,int right,int x)
{
    while(left<=right)
    {
        int mid = left + (right-left)/2;
        if (arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;

}

int main()
{
   int num;
   int herArr[10];
   int output;


   cout<<"Enter ten integer numbers in ascending order"<<endl;
   for (int i=0; i<10; i++)
   {
       cin>>herArr[i];
   }

   cout<<"Enter preferred number for search: "<<endl;
   cin>>num;

   output=binarySearch(herArr,0,9,num);

    if (output==-1)
    {
        cout<<"No Match Found"<<endl;
    }
    else
    {
        cout<< "match found in location: "<< output <<endl;
    }

    return 0;
}
