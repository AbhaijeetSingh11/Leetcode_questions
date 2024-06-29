#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
  int rows = matrix.size();
  if (rows == 0) {
    return {}; // Empty matrix
  }
  int cols = matrix[0].size();

  int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
  vector<int> spiral;

  while (top <= bottom && left <= right) {
    // Top row traversal
    for (int col = left; col <= right; col++) {
      spiral.push_back(matrix[top][col]);
    }
    top++;

    // Right column traversal (if applicable)
    if (top <= bottom) {
      for (int row = top; row <= bottom; row++) {
        spiral.push_back(matrix[row][right]);
      }
      right--;
    }

    // Bottom row traversal (if applicable)
    if (top <= bottom && left <= right) {
      for (int col = right; col >= left; col--) {
        spiral.push_back(matrix[bottom][col]);
      }
      bottom--;
    }

    // Left column traversal (if applicable)
    if (top <= bottom && left <= right) {
      for (int row = bottom; row >= top; row--) {
        spiral.push_back(matrix[row][left]);
      }
      left++;
    }
  }

  return spiral;
}

int main() {
  vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {94, 103, 155, 44}};
  vector<int> spiral = spiralOrder(matrix);

  cout << "Spiral traversal: ";
  for (int num : spiral) {
    cout << num << ", ";
  }
  cout << endl;

  return 0;
}