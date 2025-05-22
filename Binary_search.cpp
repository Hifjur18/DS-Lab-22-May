#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    int x;
    cin >> x;

    int left = 0;
    int right = n - 1;
    int index = -1;

     while (left <= right) {
        int mid = (left + right) / 2;

        if (ar[mid] == x) {
            index = mid;
            break;
        }
        else if (ar[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (index != -1) {
        cout << "Element found at " << index;
    } else {
        cout << "Element not found";
    }

    return 0;
}
