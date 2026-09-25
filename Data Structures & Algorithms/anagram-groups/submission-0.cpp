class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> groups;
        for(string word : strs ){
            string key = word;
            sort(key.begin(),key.end());
            groups[key].push_back(word);
            
        }

        vector<vector<string>> result;
        for(auto p : groups){
            result.push_back(p.second);
        }
        return result;
    }
};


// inside main array string sort elements accroding to the length
// make a function that compares 2 given strings
// send two same length string to the function 
// if it is an anagram then push it into a vector 
// and send the 
// do it till in the main array string no elements left

// but this soln is bad beacause there could be more than 2 anagrams 



// so we inside main array string sort elements accroding to the length
// then sort each individual string alphabetically
// then 