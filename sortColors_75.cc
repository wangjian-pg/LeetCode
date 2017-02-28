/*
 * the idea of this solution comes from 'Partition' process of Quick-Sort
 */
class Solution{
    enum Color{
        RED,
        WHITE,
        BLUE
    };
    public:
        void sortColors(vector<int>& nums){
            auto red_end = -1;
            auto blue_begin = nums.size();
            for(auto i = red_end + 1; i < blue_begin;){
                switch(nums[i])
                {
                    case RED:
                        red_end++;
                        std::swap(nums[red_end], nums[i]);
                        i++;
                        break;
                    case BLUE:
                        blue_begin--;
                        std::swap(nums[blue_begin], nums[i]);
                        break;
                    case WHITE:
                        i++;
                }
            }
        }
};
