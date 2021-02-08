#include "function1.h"
void printSolution (int** board, int N)
{
	for(int i=0; i<N; i++)
{
		for(int j=0; j<N; j++)
			printf(" %d ", board[i][j]);
		printf( "\n");
	}
}
bool isSafe(int ** board, int N, int row, int queens )
{
	int i, j;
	for(i=0; i<queens; i++)
		if(board[row][i])
			return false;
	for (i=row; j=queens; i>=0 && j>=0; i--, j--)
		if(board[i][j])

		return false;
	for(i=row, j=queens; j>=0 && i<N ; i++, j--)
		if (board[i][j])
			return false;
	return true;
}
bool placeNqueens(int** board, int N, int queens)
{
	if(queens>=N)
		return true;
	for ( int i=0; i<N; i++)
	{
		if(isSafe(board,N, i, queens))
		{
			board[i][queens]=1;
			if(placeNqueens(board, N, queens+1))
				return true;
			board[i][queens]=0;
		}
	}
	return false;
}
bool SolveNqueens(int** board, int N, int queens)
{
	for (int row = 0; row < N; row++)
	{
		for (int col = 0; col < N; col++)
		{
			board[row][col] = 0;
		}
	}
	if (placeNqueens(board, N, 0) == false) {
		printf("Solution does not exist");
		return false;
	}

	printSolution(board, N);
	return true;
}
