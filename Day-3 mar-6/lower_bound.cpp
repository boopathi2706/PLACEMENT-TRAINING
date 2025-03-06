std::vector<int> arr = {-1, -1};
    
if (std::find(nums.begin(), nums.end(), target) == nums.end()) {
    return arr;
} else {
    int count = std::count(nums.begin(), nums.end(), target);
    int firstIndex = std::find(nums.begin(), nums.end(), target) - nums.begin();
    
    arr[0] = firstIndex;
    arr[1] = firstIndex + count - 1;
}

return arr;