class Solution {
private:
    class MyQue{
    private:
        deque<int> que;
    public:
        MyQue(){

        }

        void push(int value){
            while (!que.empty() && que.back() <value){
                que.pop_back();
            }
            que.push_back(value);
        }

        void pop(int value){
            if (!que.empty() && que.front() == value){
                que.pop_front();
            }
        }

        int front(){
            return que.front();
        }
    };
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        MyQue que;

        for (int i = 0; i<k; i++){
            que.push(nums[i]);
        }
        result.push_back(que.front());

        for (int i=k; i<nums.size();i++){
            que.pop(nums[i-k]);
            que.push(nums[i]);
            result.push_back(que.front());
        }
        return result;
    }
};