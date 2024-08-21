#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


int sumprime(int rangeLeft, int rangeRight) {
    int answer;
    //write your code here
    int sum = 0;
    for (int i = rangeLeft; i <= rangeRight; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    answer = sum;
    return answer;
}




int main() {
    int start, end;
    std::cout << "Enter the starting number: ";
    std::cin >> start;
    std::cout << "Enter the ending number: ";
    std::cin >> end;

    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    std::cout << "Sum of prime numbers between " << start << " and " << end << " is: " << sum << std::endl;

    return 0;
}