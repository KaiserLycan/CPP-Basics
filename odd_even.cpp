#include <iostream>

using namespace std;

int main() {
    int even_count = 0;
    int odd_count = 0;
    int total_numbers;
    int number;

    cout << "How many numbers? ";
    cin >> total_numbers;

    for (int i = 1; i <= total_numbers; i++) {
        cout << "Enter a number: ";
        cin >> number;

        if (number % 2 == 0) {
            even_count++;
        }
        else {
            odd_count++;
        }
    }

    cout << "Total even numbers: " << even_count << endl;
    cout << "Total odd numbers: " << odd_count << endl;
}