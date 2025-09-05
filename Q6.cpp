#include <iostream>
using namespace std;

class triplet {
    public:
    int row;
    int column;
    int val;
};
void transposeMatrix(triplet a[], triplet b[], int count)
{
    for(int i = 0 ; i < count ; i++)
    {
         b[i].column = a[i].row ;
         b[i].row = a[i].column;
         b[i].val = a[i].val;
    }
}

void display(triplet a[], int count)
{
    cout<<"i\tj\tval\t";
    cout<<endl;
    for(int i = 0 ; i < count ; i++)
    {
        cout<<a[i].row<<"\t"<<a[i].column<<"\t"<<a[i].val;
        cout<<endl;
    }
}
int main() {
    int a[100][100];
    int n, m;
    int count = 0;

    cout << "Enter number of rows of matrix: ";
    cin >> n;

    cout << "Enter number of columns of matrix: ";
    cin >> m;

    triplet elements[n * m];  // Maximum possible non-zero elements

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Store non-zero elements as triplets
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != 0) {
                elements[count].row = i;
                elements[count].column = j;
                elements[count].val = a[i][j];
                count++;
            }
        }
    }
    
    cout << "\nNon-zero elements in triplet form (row, column, value):\n";

    display(elements,count);


    //For Transpose
    triplet trans[m*n];
    transposeMatrix(elements , trans , count);
    cout<<endl<<"Transpose Matrix : ";
    cout<<endl;
    display(trans,count);
    
    return 0;
}
