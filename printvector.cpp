#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

/*int main(){
	vector<int> myVector{ 12, 8, 22, 48, 9, 18, 22};
	cout << "going to print_vector. \n";
	print_vector(myVector);                              again, including a main for testing purposes.
	//system("pause");
	return 0;
} */

void print_vector(vector<int> b){
	for (int i = 0; i<b.size(); ++i)
		cout << b[i] << ' ';
	cout << endl;
}
