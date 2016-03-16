#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

vector<int> selection_sort(vector<int> a);
void print_vector(vector<int>b);

int main(){
  	vector<int> myVector{ 12, 8, 22, 48, 9, 18, 22};
	myVector = selection_sort(myVector);
	print_vector(myVector);
	//system("pause");
	return 0;
}

