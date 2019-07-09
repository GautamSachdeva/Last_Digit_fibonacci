#include <iostream>

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int fast_fibonacci(int n){
		int* array = new int[n+1];
		array[0] = 0;
		array[1] = 1;
		for(int i = 2 ; i < n+1 ; i++){
			array[i] = (array[i-1] + array[i-2])%10	;
		}
		int ans = array[n];
		delete[] array;
		return ans;
	}

int main() {
    int n;
    std::cin >> n;
    int c = fast_fibonacci(n);
    std::cout << c << '\n';
    }
