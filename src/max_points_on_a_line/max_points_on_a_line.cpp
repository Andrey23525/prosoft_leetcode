#include "problems.h"

int LeetCode::maxPointsOnLine(const std::vector<std::vector<int>>& points)
{
    const int count = static_cast<int>(points.size());
    if(count <= 2) {
        return count;
    }

    int best = 2;
    std::map<std::pair<int, int>, int> sameDirection;

    for(std::size_t i = 0; i < count; ++i) {
        sameDirection.clear();
        const auto& srcPoint = points[i];

        for(std::size_t j = i + 1; j < count; ++j) {
            const auto& dstPoint = points[j];

            int dx = dstPoint[0] - srcPoint[0];
            int dy = dstPoint[1] - srcPoint[1];

            const int divisor = std::gcd(dx, dy);
            if(divisor != 0) {
                dx /= divisor;
                dy /= divisor;
            }

            const bool isNegative = (dx < 0) || (dx == 0 && dy < 0);
            if(isNegative) {
                dx = -dx;
                dy = -dy;
            }

            std::pair<int, int> pair = { dx, dy };
            const int onLine = ++sameDirection[pair] + 1;
            best = std::max(best, onLine);
        }
    }

    return best;
}
