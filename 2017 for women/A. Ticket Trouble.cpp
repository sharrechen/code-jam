#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int T, F, S;

    cin >> T;
    for (int x = 1; x <= T; ++x) {
        cin >> F >> S;
        int a, b;
        vector<int> row(S + 1, 0);
        vector<vector<int> > seats(S + 1, vector<int>(S + 1, 0));
        while (F--) {
            cin >> a >> b;
            if (!seats[a][b]) {
                seats[a][b]++;
                row[a]++;
            } 
            if (!seats[b][a]) {
                seats[b][a]++;
                row[b]++;
            }
        }

        cout << "Case #" << x << ": " <<  *max_element(row.begin(), row.end()) << endl;
        row.clear();
        seats.clear();
    }
    
    return 0;
}