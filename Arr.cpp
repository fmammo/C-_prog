// A c++ program to find the largest three elements in an array
#include<iostream>
using namespace std;

void three_lar(int Arr[], int Arr_size)
{
    int i, first,second,third;

    if (Arr_size < 3){

 cout<<"Invalid Input";
}

third = first = second = INT_MIN;
for (i=0; i<Arr_size; i++)
{
    if (Arr[i]>first){
        third = second;
        second = first;
        first = Arr[i];
    }
    else if (Arr[i] > second)
        {
third = second;
second = Arr[i];
}
else if (Arr[i]>third)
    third = Arr[i];
}
 cout<<"\nThe three largest numbers are: " <<first<<","<<second<<","<<third;
 }
 int main()
 {
     int numbers[] = {12,4,6,78,90,78,23,48};
     int num_size = sizeof(numbers)/sizeof(numbers[0]);
     cout<<"All array: ";
     for(int i=0; i<num_size; i++)
     cout<< numbers[i] <<" ";
     three_lar(numbers, num_size);
     return 0;
 }
