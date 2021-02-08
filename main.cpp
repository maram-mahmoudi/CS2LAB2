#include "function1.h"

int main()
{
	int** board;
	int N;
	cout << "Enter N Queens Number: ";
	cin >> N;
	board = new int* [N];
	for (int i = 0; i < N; i++)
		board[i] = new int[N];
	cout << endl;
	int queens = 0;
	SolveNqueens(board, N, queens);


	return 0;

} 
