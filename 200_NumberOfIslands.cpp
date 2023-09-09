#include "LeetcodeHelpers.h"

class Solution {

private:

    //simple "DFS" on the island graph
    void markIsland(vector<vector<char>>& grid, int row, int col) {

        //mark current tile as visited
        grid[row][col] = '2';

        //get tiles left, right, down, and up to tile of interest
        char left = col > 0 ? grid[row][col-1] : '0';
        char right = col < grid[0].size() - 1 ? grid[row][col+1] : '0';
        char up = row > 0 ? grid[row-1][col] : '0';
        char down = row < grid.size() - 1 ? grid[row+1][col] : '0';

        //run DFS on the adjacent tiles
        if (left == '1') { markIsland(grid, row, col-1); }
        if (right == '1') { markIsland(grid, row, col+1); }
        if (up == '1') { markIsland(grid, row-1, col); }
        if (down == '1') { markIsland(grid, row+1, col); }

    }

public:

    int numIslands(vector<vector<char>>& grid) {

        int numIslands = 0;
        
        for (int row = 0; row < grid.size(); row++) {
            for (int col = 0; col < grid[0].size(); col++) {

                if (grid[row][col] == '1') {
                    numIslands++;
                    markIsland(grid, row, col);
                }

            }
        }

        return numIslands;

    }
};

MAIN {

}