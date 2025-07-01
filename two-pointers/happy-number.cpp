class Solution {
public:
    int getNum(int n){
        int sum=0;

        while (n){
            sum+=(n%10)*(n%10);
            n/=10;
        }

        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> records;
        while (1){
            int sum=getNum(n);
            if (sum==1){
                return true;
            }
            if (records.find(sum)!=records.end()){
                return false;
            }
            records.insert(sum);
            n=sum;
        }    
    }
};