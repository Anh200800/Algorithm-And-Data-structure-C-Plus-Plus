Input: n = 5, bad = 4
Output: 4
[1, 2, 3, 4, 5]
l      m      r    ( m not bad)
          l   r     (l is fist bad version)
          

var solution = function(isBadVersion) {
    /**
     * @param {integer} n Total versions
     * @return {integer} The first bad version
     */
    return function(n) {
        let left = 1, right = n
        while(left < right) {
            const mid = Math.floor(((left + right) / 2))
            if(isBadVersion(mid)) {
                right = mid
            } else {
                left = mid + 1
            }
        }
        return left
    };
};