# include <iostream>
#include <climits>
int main() {
	int num[10];
	int min = INT_MAX;
	int max = -INT_MAX;
	std::cout << "Your array is: ";
	for (int i = 1; i < 11; i++) {
		if (i == 10) {
			num[i - 1] = i;
			std::cout << num[i - 1] << "\n";
		}
		else {
			num[i-1] = i;
			std::cout << num[i-1]<<",";
		}
		
	}
	for (int i = 1; i < 11; i++) {
		if (num[i - 1] < min) {
			min = num[i - 1];
		}else if (num[i - 1] > max) {
			max = num[i - 1];
		}
	}
	std::cout <<"Maximal element is: "<< max<<" \nMinimal element is: "<< min;
}