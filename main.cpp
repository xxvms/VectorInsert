#include <iostream>
#include <vector>


void displayVector(const std::vector<int>& incVec) {
	for (auto elemetnt = incVec.begin();
		 elemetnt != incVec.cend();
		 ++elemetnt )
		std::cout << *elemetnt << " ";
	std::cout << std::endl;
}
int main() {
	// instantiate a vector with 4 elements, each initialized to 9-
	std::vector<int>integers(4, 90);

	std::cout << "The initial contents of the vector: ";
	displayVector(integers);
	std::cout << std::endl;

	// insert 25 at the beginning
	integers.insert(integers.begin(), 25);
	displayVector(integers);
	std::cout << std::endl;

	// insert 2 numbers of value 45 at the end
	integers.insert(integers.end(), 2, 45);
	displayVector(integers);
	std::cout << std::endl;

	// another vector containing 2 elements of value 30
	std::vector<int>another(2,30);
	displayVector(another);
	std::cout << std::endl;

	// insert two elements from another containter in position [1]
	integers.insert(integers.begin()+1, another.begin(), another.end());
	displayVector(integers);
	std::cout << std::endl;

	std::cout << "Vector after inserting contents from another vector in the middle: " << std::endl;
	displayVector(integers);


	return 0;
}
