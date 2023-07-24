#include <iostream>
#include<bits/stdc++.h>

using namespace std;


template <typename T>

T** matrixOperation(T** mat1,T** mat2 ,int r1,int r2,int c1,int c2,char operation)
{
    T** result;
    switch(operation)
    {
    case '+':
        if(r1==r2 && c1==c2)
        {
            for(size_t i=0;i<r1;i++)
            {
                for(size_t j=0;j<c1;j++)
                {
                    result[i][j]=mat1[i][j]+mat2[i][j];
                }
            }
        }
        else
        {
            cout<<"Cannot perform addition"<<endl;
        }
        return result;
        break;

    case '-':
        if(r1==r2 && c1==c2)
        {
            for(size_t i=0;i<r1;i++)
            {
                for(size_t j=0;j<c1;j++)
                {
                    result[i][j]=mat1[i][j]-mat2[i][j];
                }
            }
        }
        else
        {
             cout<<"Cannot perform subtraction"<<endl;
        }
        return result;
        break;
    }

}
int main()
{
    int r1,r2,c1,c2;
    char operation='+';
    cout<<"Enter row1, col1, row2, col2"<<endl;
    cin>>r1>>c1>>r2>>c2;
    int mat1[r1][c1],mat2[r2][c2];
    cout<<"Enter matrix 1 elements"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>mat1[i][j];
        }
    }

    cout<<"Enter matrix 2 elements"<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>mat2[i][j];
        }
    }

    int** output = matrixOperation(mat1, mat2, r1, r2, c1, c2, operation);
    cout<<output;
    return 0;
}
