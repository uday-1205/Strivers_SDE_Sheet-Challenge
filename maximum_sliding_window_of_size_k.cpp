#include <bits/stdc++.h> 

vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    //    Write your code here.
    std::vector<int> result;
    std::deque<int> dq;

    // Process the first window separately
    for (int i = 0; i < k; i++) {
        // Remove elements smaller than the current element from the back of the deque
        while (!dq.empty() && nums[i] >= nums[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    // Process the remaining windows
    for (int i = k; i < nums.size(); i++) {
        // The front of the deque contains the maximum element for the current window
        result.push_back(nums[dq.front()]);

        // Remove elements that are out of the current window from the front of the deque
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }
        while (!dq.empty() && nums[i] >= nums[dq.back()]) {
            dq.pop_back();
        }

        dq.push_back(i);
    }

    // Process the maximum element of the last window
    result.push_back(nums[dq.front()]);

    return result;




























}