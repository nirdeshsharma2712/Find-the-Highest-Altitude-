class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0 ,mx = INT_MIN;
        for(int i=0;i<gain.size();i++){
            sum += gain[i];
            gain[i] = sum;
        }
        for(int i=0;i<gain.size();i++){
            mx = max(mx,gain[i]);
        }
        if(mx<0) return 0;
        return mx;
    }
};
