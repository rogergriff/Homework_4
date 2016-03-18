#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

vector<int> selection_sort(vector<int> a);
void print_vector(vector<int>b);
vector<int> merge_sort(vector<int> a);

int main(){
	vector<int> myVector{ 12, 8, 22, 48, 9, 18, 22 };
	vector<int> myOtherVector{ 22, 0, 12, 33, 44, 2, 18 };
	cout << "Original vector before Selection Sort: ";
	print_vector(myVector);
	myVector = selection_sort(myVector);
	cout << "And now after Selection Sort: ";
	print_vector(myVector);
	cout << "Original vector before Merge Sort: ";
	print_vector(myOtherVector);
	myOtherVector = merge_sort(myOtherVector);
	cout << "And now after Merge Sort: ";
	print_vector(myOtherVector);
	return 0;
}
