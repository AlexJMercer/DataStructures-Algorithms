#include <iostream>
#include <vector>

using namespace std;

// Simulating the problem statement
// This uses a lot of memory and time
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> onesRow(m, 0), zeroesRow(m, 0);
        vector<int> onesCol(n, 0), zeroesCol(n, 0);

        for (int i=0; i < m; ++i) {
            for (int j=0; j < n; ++j) {
                if ( grid[i][j] == 0 ) {
                    zeroesRow[i]++; zeroesCol[j]++;
                }
                if ( grid[i][j] ) {
                    onesRow[i]++; onesCol[j]++;
                }
            }
        }

        for (int i=0; i < m; ++i) {
            for (int j=0; j < n; ++j) {
                grid[i][j] = onesRow[i] + onesCol[j] - zeroesRow[i] - zeroesCol[j];
            }
        }

        return grid;
    }
};

// Another solution that uses less memory and time
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> row(m, 0), col(n, 0);

        for (int i=0; i < m; ++i) {
            for (int j=0; j < n; ++j) {
                if ( grid[i][j] ) {
                    row[i]++; col[j]++;
                }
            }
        }

        for (int i=0; i < m; ++i) {
            for (int j=0; j < n; ++j) {
                grid[i][j] = 2*(row[i] + col[j]) - (m + n);     // Derived from : row[i] + col[j] - ( m - row[i] ) - ( n - col[j] )
            }
        }

        return grid;
    }
};