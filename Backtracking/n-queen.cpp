#include<bits/stdc++.h>
using namespace std;

void printSolution(vector<vector<int>> sol, int n) {
	for (int i=0 ; i<n ; i++) {
		for (int j=0 ; j<n ; j++) {
			cout<<" " << sol[i][j]<< " ";
		}
		cout << "\n";
	}
}

bool isSafe(vector<vector<int>> sol, int n, int row, int col) {
	int i, j;
	// Check previous row
	for (i=0 ; i<col ; i++)
		if (sol[row][i])
			return false;

	// Check upper diagonal
	for (i=row, j=col ; i>=0 && j>=0 ; i--, j--) 
		if (sol[i][j])
			return false;
	

	// Check Lower Diagonal
	for (i=row, j=col ; j>=0 && i<n ; i++, j--)
		if (sol[i][j])
			return false;

	return true;
}

bool solve(vector<vector<int>> sol, int n, int col) {
	// Check if all col checked
	if (col >= n)
		return true;

	// Check row
	for (int i=0 ; i<n ; i++) {
		if (isSafe(sol, n, i, col)) {
			sol[i][col] = 1;
			
			if (solve(sol, n, col+1)) {
				return true;
			}
			sol[i][col] = 0;
		}
	}

	return false;
}

bool nqueens(int n) {
	// Solution Matrix
	vector<vector<int>> sol(n, vector<int> (n, 0));

	// Solve
	if (solve(sol, n, 0) == false) {
		cout << "Not possible";
		return false;
	} 

	printSolution(sol, n); 
	return true;
	
}

int main() {
	int n;
	cin >> n;
	nqueens(n);
	return 0;
}