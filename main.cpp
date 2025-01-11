#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int choice;

  cout << "OPTION\n\n1 - Display ODD numbers\n2 - Compute for SUM and "
          "AVERAGE\n3 - Factorial\n\nEnter your choice: ";
  cin >> choice;

  switch (choice) {
  case 1:
  case 2: {
    int start, end;

    cout << "What is the start number: ";
    cin >> start;

    // Positive Number Verification
    if (start < 1) {
      cout << "Starting number must be positive!\n";

      break;
    }

    cout << "What is the end number: ";
    cin >> end;

    if (end < start) {
      cout << "End must be greater than the starting number!\n";

      break;
    }

    // If the choice is 1, display odd numbers
    if (choice == 1) {
      for (int i = start; i <= end; i++) {
        // Skip even numbers
        if (i % 2 == 0)
          continue;

        cout << i << "\n";
      }

      break;
    }

    // Otherwise, display the sum and average of the positive numbers between
    // the specified range
    else {
      int sum = 0, n = (end - start) + 1;
      float average = 0;

      for (int i = start; i <= end; i++) {
        sum += i;
      }

      average = (float)sum / (float)n;

      cout << "The sum of all positive integers is: " << sum << "\n";
      cout << fixed << setprecision(2) << "\n";
      cout << "The average of all positive integers is: " << average << "\n";

      break;
    }
  }

  // If the choice is 3, then calculate the factorial of the given input
  case 3: {
    int n = 1, factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 1) {
      cout << "The number must be a positive integer!\n";

      break;
    }

    for (int i = 1; i <= n; i++) {
      factorial *= i;
    }

    cout << "The factorial of " << n << " is: " << factorial << "\n";

    break;
  }

  // If an invalid option is entered
  default: {
    cout << "Invalid option!\n";

    // If non-integer number
    if (cin.fail()) {
      cout << "You entered a non-integer value for a number!\n";

      break;
    }

    break;
  }
  }

  cout << "Thank you!\n";

  return 0;
}