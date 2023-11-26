#include <bits/stdc++.h>
using namespace std;
const int row = 5;
const int col = 5;
void spiral_traversal(int arr[row][col])
{
    int direction = 0;
    int top = 0, down = row-1, left = 0, right = col-1;
    while (top <= down && left <= right)
    {
        if (direction == 0)
        {
            for (int i = left; i <=right; i++)
            {
                cout << arr[top][i] << " ";
            }
            top ++;
            
        }
        else if (direction == 1)
        {
            for (int i = top; i <= down; i++)
            {
                cout << arr[i][right] << " ";
            }
            right --;
            
        }
        else if (direction == 2)
        {
            for (int i = right; i >=left; i--)
            {
                cout << arr[down][i] << " ";
            }
            down --;
            
        }
        else if (direction == 3)
        {
            for (int i = down; i >=top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left ++;
            
        }

       direction = (direction+1)%4;
    }
}

int main()
{
    
    int arr[row][col]={{1,2,3,4,5},{6,7,8,9,10},
    {11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
   
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    spiral_traversal(arr);

    return 0;
}