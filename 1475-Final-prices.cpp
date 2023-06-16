class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector <int> stack;
        int n=prices.size();
        for(int i=0;i<n;++i){
            while (stack.size() && prices[stack.back()] >= prices[i]) {
                prices[stack.back()] -= prices[i];
                stack.pop_back();
            }
            stack.push_back(i);
        }
        return prices;
    }
};

// O(n^2)
// class Solution {
// public:
//     vector<int> finalPrices(vector<int>& prices) {
//         for(int i=0; i<prices.size()-1; i++)
//         {
//             for(int j=i+1; j<prices.size(); j++)
//             {
//                 if(prices[j] <= prices[i])
//                 {    
//                     prices[i] = prices[i]-prices[j];
//                     break;
//                 }
//             }
//         }
//         return prices;
//     }
// };
