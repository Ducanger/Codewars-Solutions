#include <vector>

int score(const std::vector<int>& dice) {
    int c[7] = {};
    for (auto i : dice) c[i]++;
    return
    c[1] / 3 * 1000 + c[6] / 3 * 600 + c[5] / 3 * 500 +
    c[4] / 3 * 400 + c[3] / 3 * 300 + c[2] / 3 * 200 +
    c[1] % 3 * 100 + c[5] % 3 * 50;
}
