#include<bits/stdc++.h>
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
int n=nums.size();
    vector<int > dp(n,1),hash(n);
int max=1;
int last=0;
sort(nums.begin(),nums.end());
for(int i=0;i<n;i++)
{
    hash[i]=i;
    for(int j=0;j<i;j++)
    {
        if(nums[i]%nums[j]==0 && dp[j]+1 > dp[i])
        {
            dp[i]=1+dp[j];
            hash[i]=j;
        }
    }
    if(dp[i]>max)
    {
        max=dp[i];
        last=i;
    }
}
vector<int> temp;
temp.push_back(nums[last]);
while(hash[last]!=last)
{
    last=hash[last];
    temp.push_back(nums[last]);
}
reverse(temp.begin(),temp.end());
return temp;
}
};