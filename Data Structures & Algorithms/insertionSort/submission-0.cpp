// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        vector<vector<Pair>> result;
        int n = pairs.size();
        if (n==0){
            return result;
        }
        for (int i = 0; i <n; i++){
            Pair current = pairs[i];
            int j = i-1;
            while (j >= 0 && pairs[j].key > current.key){
                pairs[j+1] = pairs[j];
                j--;
            }
            pairs[j+1] = current;
            result.push_back(pairs);
        }
        return result;
    }
};
