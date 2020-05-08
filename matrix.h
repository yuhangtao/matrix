#pragma once
#include"vector"
#include <math.h>
using namespace std;

class Matrix
{
public:
	Matrix();
	vector<vector<double>> GetMatrix(int x, int y);
	vector<vector<double>> GetMatrix(int x, int y,vector<double> datalist);
	void printx();
	void printy();
	void printmatrix();
	Matrix	operator+(const Matrix& other) const;
	Matrix	operator+(const double& other) const;
	Matrix	operator-(const Matrix& other) const;
	Matrix	operator-(const double& other) const;
	Matrix	operator*(const Matrix& other) const;
	Matrix	operator*(const double& other) const;
	Matrix transpose();
	Matrix UMatrix();

private:
	int num_x = 0;
	int num_y = 0;
	vector<vector<double>> data;
};