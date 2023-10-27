//Q5
#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Hey! Enter an integer, to check if it's a power of 2: ";
    cin >> num; // We're getting our number from the user here

    // If the number isn't 2, we'll go into our loop and check some things.
    if(num != 2) {
        // We'll keep dividing the number by 2 as long as it's even.
        // If at any point, our number becomes odd or becomes 2 itself, we'll stop.
        do {
            num = num / 2;
        } while (num > 2 && num % 2 == 0);
    }

    // Down here we have the result
    if (num == 2) {
        cout << "True! Your number is a power of 2!" << endl;
    } else {
        cout << "False. your number isn't a power of 2." << endl;
    }

    return 0;
}