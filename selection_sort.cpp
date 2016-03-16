#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

vector<int> selection_sort(vector<int> a){
	//cout << "There are "<< a.size() << " items in this vector." << endl;  used for testing purposes
	for (int i = 0; i < a.size(); i++){
		int smallest;
		int smallestLocal;
		smallest = a[i];
		smallestLocal = i;
		for (int j = i; j < a.size(); j++)
		{
			if (smallest > a[j])
			{
				smallest = a[j];
				smallestLocal = j;
			}
		}
		int temp;
		temp = a[i];
		a[i] = smallest;
		a[smallestLocal] = temp;
		}
/*	for (int i = 0; i<a.size(); ++i)   printing vector for testing purposes.
	    cout << a[i] << ' ';
	cout << endl; */
	return a;
}
