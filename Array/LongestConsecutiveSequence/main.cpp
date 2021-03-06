
int solve(vector<int>& nums) {
    int res = 0;
    unordered_map<int, int> hash;
    for (int i : nums) {
        hash[i]++;
    }

    for (int i : nums) {
        if (hash[i] == 0) continue;
        int cnt = 1;
        int next = i + 1;
        int pre = i - 1;
        while (hash.find(next) != hash.end() && hash[next] > 0) {
            cnt++;
            hash[next++]--;
        }
        while (hash.find(pre) != hash.end() && hash[pre] > 0) {
            cnt++;
            hash[pre--]--;
        }

        res = max(res, cnt);
    }

    return res;
}
