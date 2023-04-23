#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int> > matrix, int i, int j, int no)
{
    for(int k=0; k<9; k++)
    {
        if(matrix[i][k]==no or matrix[k][j]==no)
            return false;
    }
    
    int sx = (i/3)*3;
    int sy = (j/3)*3;
    
    for(int x=sx; x<sx + 3; x++)
    {
        for(int y=sy; y<sy + 3; y++)
        {
            if(matrix[x][y]==no)
                return false;
        }
    }
    return true;
}


bool SudokuSolver(vector<vector<int>> &matrix, int i, int j)
{
    // Base Case
    if(i==9)
        return true;
    
    // Recursive Case
    
    if(j==9)
        return SudokuSolver(matrix,i+1,0);
        
    if(matrix[i][j]!=0)
        return SudokuSolver(matrix,i,j+1);
        
    for(int no=1; no<=9; no++)
    {
        if(isSafe(matrix,i,j,no))
        {
            matrix[i][j] = no;
            bool SolveSubproblem = SudokuSolver(matrix,i,j+1);
            if(SolveSubproblem)
                return true;
        }
    }
    
    matrix[i][j]=0;
    return false;
}


vector<vector<int>> solve(vector<vector<int>> matrix) {
    
    SudokuSolver(matrix,0,0);
    
    return matrix;    
    
}