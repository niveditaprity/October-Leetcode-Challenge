 bool compare(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0])
        {
            return a[1]>b[1];
        }
        else
        {
           return a[0]<b[0];
        }
    }


class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int m=intervals.size();
        sort(intervals.begin(),intervals.end(),compare);
        int s=intervals[0][0],l=intervals[0][1];
        int count=1;
        for(int i=1;i<m;i++)
        {
            if(s<=intervals[i][0]&&l>=intervals[i][1])
            {
                continue;
            }
            else
            {
                s=min(intervals[i][0],s);
                l=max(intervals[i][1],l);
                    count++;
            }
        }
        return count;
    }
};
