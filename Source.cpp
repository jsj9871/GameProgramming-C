#include <stdio.h>

// ?̷? ?? ????
char maze[10][10] =
{
    {'1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
    {'1', '0', '1', '1', '1', '0', '0', '1', '1', '1'},
    {'1', '0', '1', '0', '1', '0', '0', '0', '1', '1'},
    {'1', '0', '0', '0', '0', '0', '1', '0', '0', '1'},
    {'1', '0', '0', '0', '0', '1', '1', '1', '0', '1'},
    {'1', '0', '1', '1', '1', '1', '0', '1', '0', '1'},
    {'1', '0', '0', '1', '0', '0', '1', '0', '0', '1'},
    {'1', '0', '0', '0', '0', '1', '0', '0', '0', '1'},
    {'1', '0', '0', '1', '0', '0', '1', '0', '1', '1'},
    {'1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
};

void PrintMaze(char maze[][10], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (maze[i][j] == '1')
            {
                printf("??");
            }
            else if (maze[i][j] == '0')
            {
                printf("  ");
            }
            else if (maze[i][j] == '2')
            {
                printf("??");
            }
        }

        printf("\n");
    }
}

int main()
{
    PrintMaze(maze, 10);

    while (1)
    {

    }

    return 0;
}
