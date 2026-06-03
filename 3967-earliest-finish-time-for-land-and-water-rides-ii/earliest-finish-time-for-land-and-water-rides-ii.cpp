class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n=landStartTime.size(),m=waterStartTime.size();
        int ans = INT_MAX;

// Earliest land finish
int landEnd = INT_MAX;
for(int i = 0; i < n; i++)
    landEnd = min(landEnd, landStartTime[i] + landDuration[i]);

// Land -> Water
for(int j = 0; j < m; j++)
    ans = min(ans,
              max(landEnd, waterStartTime[j]) + waterDuration[j]);

// Earliest water finish
int waterEnd = INT_MAX;
for(int j = 0; j < m; j++)
    waterEnd = min(waterEnd, waterStartTime[j] + waterDuration[j]);

// Water -> Land
for(int i = 0; i < n; i++)
    ans = min(ans,
              max(waterEnd, landStartTime[i]) + landDuration[i]);

return ans;
    }
};