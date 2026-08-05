class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size();
        int m = matrix[0].size();

        int startRow = 0;
        int endRow = n - 1;

        // Step 1: Find the correct row
        while (startRow <= endRow) {

            int mid = startRow + (endRow - startRow) / 2;

            if (target >= matrix[mid][0] && target <= matrix[mid][m - 1]) {

                // Step 2: Binary search in this row
                int left = 0;
                int right = m - 1;

                while (left <= right) {
                    int midCol = left + (right - left) / 2;

                    if (matrix[mid][midCol] == target)
                        return true;
                    else if (matrix[mid][midCol] < target)
                        left = midCol + 1;
                    else
                        right = midCol - 1;
                }

                return false;
            }
            else if (target < matrix[mid][0]) {
                endRow = mid - 1;
            }
            else {
                startRow = mid + 1;
            }
        }

        return false;
    }
};