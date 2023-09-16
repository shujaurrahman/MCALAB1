#include<iostream>
using namespace std;

int main(){
	cout<<"Program to perform following operation : \n";
	cout<<" 1. Addition of Two matrices: \n";
	cout<<" 2. Multiplication of Two matrices: \n";
	//Matrix and variable intialization
	
	int matrixA[10][10],matrixB[10][10],mul[10][10],add[10][10],row,col;
	
	//Insertion from user
	cout<<"Enter the Number of Row: \n";
	cin>>row;
	cout<<"Enter the Number of Columns: \n";
	cin>>col;
	
	//Matrix A
	cout<<"Enter Matrix A: \n";
	
	for (int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter element at "<<i<<j<<": ";
			cin>>matrixA[i][j];
		}
	}
	cout<<"\n";
	cout<<"Enter Matrix B: \n";
	
	
	//Matrix B
	for (int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter element at "<<i<<j<<": ";
			cin>>matrixB[i][j];
		}
	}

	//Multiplication of Matrices:
	for (int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			mul[i][j]=0;
			for(int k=0;k<col;k++){
				mul[i][j]+= matrixA[i][k]*matrixB[k][j];	
			}
		}
	}
	
	//Printing multiplied matrix:
	cout<<"\n";
	cout<<"The Multiplication of Matrix A anad Matrix B: \n";
	for (int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<mul[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	//Addition of matrices:
		for (int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			add[i][j]=0;
			add[i][j]= matrixA[i][j]+matrixB[i][j];	
		}
	}
	
	//Printing Added matrix:
	cout<<"\n";
	cout<<"The Addition of Matrix A anad Matrix B: \n";
	for (int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<add[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

