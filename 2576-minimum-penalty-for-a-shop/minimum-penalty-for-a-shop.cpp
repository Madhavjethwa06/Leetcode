class Solution {
public:
    int bestClosingTime(string customers) {
        int penalty = 0;

        // Initial penalty if shop closes at 0
        for(char c : customers) {
            if(c == 'Y') penalty++;
        }

        int minPenalty = penalty;
        int bestHour = 0;

        for(int i = 0; i < customers.size(); i++) {
            if(customers[i] == 'Y')
                penalty--;   // now shop is open for this Y
            else
                penalty++;   // N during open hours

            if(penalty < minPenalty) {
                minPenalty = penalty;
                bestHour = i + 1;
            }
        }

        return bestHour;
    }
};
