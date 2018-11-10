/* 8ms */
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++){
            nums1[i+m] = nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};

/* 4ms */
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int sz=nums1.size()-1;
        int i=m-1,j=n-1;
       while(i>=0 && j>=0) nums1[sz--]=(nums1[i]>nums2[j])?nums1[i--]:nums2[j--];
        while(i>=0) nums1[sz--] = nums1[i--];
        while(j>=0) nums1[sz--] = nums2[j--];
    }
};