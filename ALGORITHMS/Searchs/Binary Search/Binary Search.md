Input: (nums = [-1, 0, 3, 5, 9, 12]), (target = 9);
Output: 4;

[-1, 0, 3, 5, 9, 12]
  l     m         r   (2 < 9) l = 2 + 1 = 3
           l  m   r


// Solution
const search = function (nums, target) {
  let left = 0;
  let right = nums.length - 1;
  while (left <= right) {
    const mid = Math.floor((left + right) / 2);
    const current = nums[mid];
    if (current > target) {
      right = mid - 1;
    } else if (current < target) {
      left = mid + 1;
    } else {
      return mid;
    }
  }
  return -1;
};