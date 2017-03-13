#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(void) {
    int T, N;

    cin >> T;
    for (int x = 1; x <= T; ++x) {
        cin >> N;
        vector<double> actors(N << 1);
        for (size_t i = 0; i < N << 1; ++i) {
            cin >> actors[i];
        }
        sort(actors.begin(), actors.end());
        double success = (1 - actors[0] * actors[(N << 1) - 1]);
        for (size_t i = 1, j = (N << 1) - 2; i < N && j >= N; ++i, --j) {
            success *= (1 - actors[i] * actors[j]);
        }
        cout << "Case #" << x << ": " << fixed << setprecision(6) << success << endl;
    }
    
    return 0;
}