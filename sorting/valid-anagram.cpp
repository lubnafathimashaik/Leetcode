class Solution {
public:
    bool isAnagram(string s, string t) {

        // Step 1: Check if lengths are different
        if (s.length() != t.length())
            return false;

        // Step 2: Create a frequency array
        int count[26] = {0};

        // Step 3: Traverse both strings
        for (int i = 0; i < s.length(); i++) {

            // Increase frequency for s
            count[s[i] - 'a']++;

            // Decrease frequency for t
            count[t[i] - 'a']--;
        }

        // Step 4: Check whether all frequencies are zero
        for (int i = 0; i < 26; i++) {

            if (count[i] != 0)
                return false;
        }

        return true;
    }
};