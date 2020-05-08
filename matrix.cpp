#include"matrix.h"
#include"iostream"

using namespace std;

Matrix::Matrix()
{
	 cout << "Æô¶¯"<<endl;
}
vector<vector<double>> Matrix::GetMatrix(int x, int y) 
{
	num_x = x;
	num_y = y;
	vector<vector<double>> s;
	s.resize(x);
	for (int i = 0; i < x; i++) 
	{
		s[i].resize(y);
		for (int j = 0; j < y; j++) 
		{
			s[i][j] = 1.0;
		}
	}
	data = s;
	return s;
}
vector<vector<double>> Matrix::GetMatrix(int x, int y, vector<double> datalist)
{
	num_x = x;
	num_y = y;
	vector<vector<double>> s;
	s.resize(x);
	int k = 0;
	for (int i = 0; i < x; i++)
	{
		s[i].resize(y);
		for (int j = 0; j < y; j++)
		{
			if (k < datalist.size()) s[i][j] = datalist[k];
			else s[i][j] = 0.0;
			k++;
		}
	}
	data = s;
	return s;
}
void Matrix::printx() 
{
	cout<< this->num_x<<endl;
}
void Matrix::printy()
{
	cout << this->num_y << endl;
}
void Matrix::printmatrix()
{
	vector<vector<double>> x = this ->data;
	for (int i = 0; i < x.size(); i++) 
	{
		for (int j = 0; j < x[i].size(); j++) 
		{
			cout << x[i][j]<<"\t";
		}
		cout << endl;
	}
}
Matrix Matrix::operator+(const Matrix& other) const
{
	bool t = (this->num_x == other.num_x&& this->num_y == other.num_y);
	Matrix ans;
	if (t) 
	{
		ans.num_x = other.num_x;
		ans.num_y = other.num_y;
		ans.data.resize(this->num_x);
		for (int i = 0; i < num_x; i++)
		{
			ans.data[i].resize(num_y);
			for (int j = 0; j < num_y; j++)
			{
				ans.data[i][j] = this->data[i][j]+other.data[i][j];
			}
		}	
	}
	return ans;
}
Matrix Matrix::operator+(const double& other) const
{
	Matrix ans;

	ans.num_x = this->num_x;
	ans.num_y = this->num_y;
	ans.data.resize(this->num_x);
	for (int i = 0; i < num_x; i++)
	{
		ans.data[i].resize(num_y);
		for (int j = 0; j < num_y; j++)
		{
			ans.data[i][j] = this->data[i][j] + other;
		}
	}
	return ans;
}
Matrix Matrix::operator-(const Matrix& other) const
{
	bool t = (this->num_x == other.num_x && this->num_y == other.num_y);
	Matrix ans;
	if (t)
	{
		ans.num_x = other.num_x;
		ans.num_y = other.num_y;
		ans.data.resize(this->num_x);
		for (int i = 0; i < num_x; i++)
		{
			ans.data[i].resize(num_y);
			for (int j = 0; j < num_y; j++)
			{
				ans.data[i][j] = this->data[i][j] - other.data[i][j];
			}
		}
	}
	return ans;
}
Matrix Matrix::operator-(const double& other) const
{
	Matrix ans;

	ans.num_x = this->num_x;
	ans.num_y = this->num_y;
	ans.data.resize(this->num_x);
	for (int i = 0; i < num_x; i++)
	{
		ans.data[i].resize(num_y);
		for (int j = 0; j < num_y; j++)
		{
			ans.data[i][j] = this->data[i][j] - other;
		}
	}
	return ans;
}
Matrix Matrix::operator*(const double& other) const
{
	Matrix ans;

	ans.num_x = this->num_x;
	ans.num_y = this->num_y;
	ans.data.resize(this->num_x);
	for (int i = 0; i < num_x; i++)
	{
		ans.data[i].resize(num_y);
		for (int j = 0; j < num_y; j++)
		{
			ans.data[i][j] = this->data[i][j] * other;
		}
	}
	return ans;
}