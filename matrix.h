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
	Matrix Hexchange(int x, int y);
	Matrix Vexchange(int x, int y);
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
	Matrix LMatrix();
	Matrix inv();
	//int Level();


private:
	int num_x = 0;
	int num_y = 0;
	bool level = true;
	vector<vector<double>> data;
};