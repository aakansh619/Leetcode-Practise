class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        long long total = 0;
        long long used = 0;

        while (mainTank != 0) {
            mainTank--;
            total += 10;
            used++;
            if (used % 5 == 0) {
                if (additionalTank) {
                    mainTank += 1;
                    additionalTank -= 1;
                }
            }
        }
        return total;
    }
};
