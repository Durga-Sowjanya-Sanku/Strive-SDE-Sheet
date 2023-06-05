#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int M = matrix.size();
	int N = matrix[0].size();


	vector<int> rows(M,0);
	vector<int> cols(N,0);

	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(matrix[i][j]==0)
			{
				rows[i]=1;
				cols[j]=1;
			}
		}
	}

	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(rows[i]==1)
			{
				matrix[i][j]=0;
			}
			if(cols[j]==1)
			{
				matrix[i][j]=0;
			}
		}
	}
}