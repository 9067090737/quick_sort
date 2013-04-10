#include <conio.h>
#include <iostream>
using namespace std;
int array[100];

void quick_sort(int size, int low, int high){ ///@function quick_sort to sort array by quick sort method
int temp=0;
int i=low;
int j=high;
int middle=array[(low+high)/2];///@param middle is the element in the middle between low and high
	do{
		while (array[i]<middle) ++i;
		while (array[j]>middle) --j;
			if(i<=j)
				{
				int temp=array[i];
				array[i]=array[j];
				array[j]=temp;
				i++; j--;
				}
		}while(i<j);
	if (low<j) quick_sort(size,low,j);
	if (i<high) quick_sort(size,i,high);
};
void input(int size){ ///@function input to enter the array
	int i;
	cout<<"Input array:"<<'\n';
	for (i=0; i<size; i++)
		cin>>array[i];
};
void output(int size){ ///@function output to show the array on the screen
	int i;
	for (i=0; i<size; i++)
		cout<<array[i]<<'\t';
		cout<<endl;
};
int main(){
	int size; ///@param size to indicate size of the array
	cout<<"Input size of array n=";
	cin>>size;
	cout<<'\n';
	input(size);
	output(size);
	int low=0; ///@param low is the index of the leftmost element of the array
	int high=size-1;///@param high is the index of the rightmost element of the array
	quick_sort(size, low,high);
	cout<<"Sorted array:"<<'\n';
	output(size);
	getch();
	return 0;
}
