#include <iostream>
#include <vector>

using namespace std;

struct Response {
    int words;
    int quality;
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<Response> responses(n);

        int winnerIdx = -1;
        int maxQuality = -1;

        for (int i = 0; i < n; ++i) {
            cin >> responses[i].words >> responses[i].quality;
            if (responses[i].words <= 10 && responses[i].quality > maxQuality) {
                maxQuality = responses[i].quality;
                winnerIdx = i + 1;
            }
        }

        cout << winnerIdx << endl;
    }

    return 0;
}
