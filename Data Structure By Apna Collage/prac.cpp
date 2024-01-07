#include <iostream>
#include <stdlib.h>
using namespace std;

void Init_Matrix (int [][3], int [][3]);
void Disp_Matrix (int [][3], int [][3]);
void Add_Matrix  (int [][3], int [][3]);
void Sub_Matrix  (int [][3], int [][3]);
void Mult_Matrix (int [][3], int [][3]);
void Sum_R_C     (int [][3], int [][3]);
 
int main(){
    int mat1[3][3], mat2[3][3];
    int ch;
    
    cout<<"\n Matrix Operation of Order (3*3):- \n";
    Init_Matrix(mat1, mat2);
    while(1){
        Disp_Matrix(mat1, mat2);
        cout<<"\n Matrix Operation of Order (3*3):- \n";
        cout<<"\n 1 -> Change Elements of Matrices.";
        cout<<"\n 2 -> Add Matrices.";
        cout<<"\n 3 -> Subtract Matrices.";
        cout<<"\n 4 -> Multiply Matrices.";
        cout<<"\n 5 -> Sum of ROWs n COLs.";
        cout<<"\n 6 -> Exit.";
        cout<<"\n Enter your choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                Init_Matrix(mat1, mat2);
                break;
            case 2:
                Add_Matrix(mat1, mat2);
                break;
            case 3:
                Sub_Matrix(mat1, mat2);
                break;
            case 4:
                Mult_Matrix(mat1, mat2);
                break;
            case 5:
                Sum_R_C(mat1, mat2);
                break;
            case 6:
                exit(1);
            default:
                cout<<"\n Enter Correct Choice.";
            } // end of switch.
        return 0;
        } // end of while.
    } // end of main.
 
void Init_Matrix(int mat1[][3], int mat2[][3]){
    int i, j;
    cout<<"\n Enter the Elments of First Matrix: ";
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            cin>>mat1[i][j];
    cout<<"\n Enter the Elments of Second Matrix: ";
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            cin>>mat2[i][j];
    }
 
void Disp_Matrix(int mat1[][3], int mat2[][3]){
    int i, j;
    cout<<"\n First matrix is:- \n";
    for( i=0; i<3; i++){
        for( j=0; j<3; j++)
            cout<<" "<<mat1[i][j];
        cout<<endl;
        }
 
    cout<<"\n Second matrix is:- \n";
    for(i=0; i<3; i++){
        for(int j=0; j<3; j++)
            cout<<" "<<mat2[i][j];
        cout<<endl;
        }
    }
 
void Add_Matrix(int mat1[][3], int mat2[][3]){
    int i, j;
    int tot[3][3];
    for( i=0; i<3; i++)
        for( j=0; j<3; j++)
            tot[i][j] = mat1[i][j] + mat2[i][j];
 
    cout<<"\n Addition of 2 Matrices:- \n";
    for(i=0; i<3; i++){
        for(int j=0; j<3; j++)
            cout<<" "<<tot[i][j];
        cout<<endl;
        }
    }
 
 
void Sub_Matrix(int mat1[][3], int mat2[][3]){
    int i, j;
    int tot[3][3];
    for( i=0; i<3; i++)
        for( j=0; j<3; j++)
            tot[i][j] = mat1[i][j] - mat2[i][j];
 
    cout<<"\n Subtraction of 2 Matrices:- \n";
    for(i=0; i<3; i++){
        for(int j=0; j<3; j++)
            cout<<" "<<tot[i][j];
        cout<<endl;
        }
    }
 
void Mult_Matrix(int mat1[][3], int mat2[][3]){
    int i, j;
    int tot[3][3];
    for( i=0; i<3; i++)
        for( j=0; j<3; j++){
            tot[i][j]=0;
            for(int k=0; k<3; k++)
                tot[i][j] = tot[i][j] + 
 (mat1[i][k]*mat2[k][j]);
            }
    cout<<"\n Multiplication of 2 Matrices:- \n";
    for(i=0; i<3; i++){
        for(int j=0; j<3; j++)
            cout<<" "<<tot[i][j];
        cout<<endl;
        }
    }
 
void Sum_R_C(int mat1[][3], int mat2[][3]){
    int i, j;
    int row=0, col=0;
    cout<<"\n Sum of ROWs and COLs :- \n";
    cout<<"\n First Matrix :- \n";
    // Sum of row of mat1.
    for( i=0; i<3; i++){
        for( j=0; j<3; j++){
            cout<<"  "<<mat1[i][j];
            row = row + mat1[i][j];
            }
        cout<<" -  "<<row;
        row = 0;
        cout<<endl;
        }
    cout<<"\n  |  |  | \n";
    // Sum of col of mat1.
    for(i=0; i<3; i++){
        for(int j=0; j<3; j++)
            col = col + mat1[j][i];
        cout<<"  "<<col;
        col = 0;
        }
 
    cout<<"\n\n Second Matrix :- \n";
    // Sum of row of mat2.
    for(i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"  "<<mat2[i][j];
            row = row + mat2[i][j];
            }
        cout<<" -  "<<row;
        cout<<endl;
        row = 0;
        }
    cout<<"\n  |  |  | \n";
    // Sum of col of mat2.
    for(i=0; i<3; i++){
        for(int j=0; j<3; j++)
            col = col + mat2[j][i];
        cout<<"  "<<col;
        col = 0;
        }
    }