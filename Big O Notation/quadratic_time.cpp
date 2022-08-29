// Big O notation: O(n^2)
#include <iostream>
using namespace std;

int main(){
    int i, j, n, count;
    cin >> n;
    count = 0;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            // count++;
            count += 1;
            cout << i << " " << j << endl;
        }
    }
    cout << count << endl;
}