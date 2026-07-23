class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>merge(nums1.size()+nums2.size());
        int n=merge.size();
        for(int i=0;i<nums1.size();i++){
            merge[i]=nums1[i];

        }
        for(int i=0;i<nums2.size();i++){
            merge[i+nums1.size()]=nums2[i];

        }
        
        sort(merge.begin(),merge.end());
     
        if(merge.size()%2==0){
            return ((merge[(n/2)-1]+merge[(n/2)])/2.0);
            
        }
        return merge[n/2];

        
    }
};