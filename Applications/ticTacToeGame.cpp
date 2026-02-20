#include<bits/stdc++.h>
using namespace std;

const int  ROWS = 3, COLS = 3;
int totalInsertions = 0;
bool isXGameTurn = true, winnerDecided = false;

void startGame(string board[ROWS][COLS]);
string getWinner(string board[ROWS][COLS]);
bool isBoardFullOrWinnerDecided(string board[ROWS][COLS]);
void getUserInput(string board[ROWS][COLS]);
bool validateUserInput(int row, int col, string board[ROWS][COLS]);
void printBoard(string board[ROWS][COLS]);
string (*intializeGameBoard())[COLS];


int main()
{
    string (*board)[COLS] = intializeGameBoard();
    startGame(board);
    return 0;
}

string (*intializeGameBoard())[COLS]
{
    static string board[ROWS][COLS];
    return board; // pointer to the static 2D array
}

void startGame(string board[ROWS][COLS])
{
    while(!isBoardFullOrWinnerDecided(board))
    {
        getUserInput(board);
        printBoard(board);
    }
    
}

void getUserInput(string board[ROWS][COLS])
{
    int row, col;
    string mark = (isXGameTurn) ? "X" : "O";
    cout << "\nNOTE: Remember range for inserting values are 1,1 to " << ROWS << ", " << COLS << endl; 
    cout << "Current Turn is " << mark << " Please Enter row and col value where you insert from (like 1 2, 2 1): ";
    cin >> row >> col;
    while(!validateUserInput(row, col, board)){
        cout << "Entered worng row & col values or board at "<< row << " " << col << " has already filled with value, Please enter valid values: ";
        cin >> row >> col;
        cout<<"\n";
    }
    board[row-1][col-1] = mark;
    totalInsertions++;
    isXGameTurn = mark == "X" ? false : true;
}

void printBoard(string board[ROWS][COLS])
{
    cout << "\nCurrent Board is:\n" << endl;
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++)
        {
            string printValue = board[i][j] != "" ? board[i][j] : " ";
            cout << board[i][j];
            if (j!=COLS -1)
            {
                cout << " | ";
            }
        }
        if(i != ROWS-1) cout << "\n- - - - -\n";
    }
    cout<<"\n";
}

bool validateUserInput(int row, int col, string board[ROWS][COLS])
{
    if((row <1 || row > ROWS) || (col < 1 || col > COLS) || board[row-1][col-1] == "X" || board[row-1][col-1] == "O") return false;
    return true;
}

bool isBoardFullOrWinnerDecided(string board[ROWS][COLS])
{
    if(totalInsertions >= ROWS * COLS){
        cout<<"\n(*_*)Game Over! ---> It's a Draw as the board is full and no winner found.\n";
        return true;
    }
    if(totalInsertions >= ROWS + 2)
    {
        string getWinnerValue = getWinner(board);
        return getWinnerValue != "" ? true : false;
    }
    return false;
}

string getWinner( string board[ROWS][COLS])
{
    if(totalInsertions < 5) return "";
    int xMarkCountLeftDiagonal = 0, xMarkCountRightDiagonal = 0, oMarkCountInLeftDiagonal=0, oMarkCountInRightDiagonal=0;
    for(int i=0; i<ROWS; i++)
    {
        int xMarkCountInCol=0, oMarkCountInCol=0, xMarkCountInRow = 0, oMarkCountInRow=0;
        for(int j=0; j<COLS; j++)
        {
            if(board[j][i] == "X") xMarkCountInRow++;
            if(board[j][i] == "O") oMarkCountInRow++;
            if(board[i][j] == "X"){
                xMarkCountInCol++;
                xMarkCountLeftDiagonal =  i== j ? xMarkCountLeftDiagonal+1 : xMarkCountLeftDiagonal;
                if((i != ROWS-1 && j!=COLS-1) && ((i==0 && j==COLS-1) || (ROWS%2!=0 && i>0 && i==j) || (i==ROWS-1 && j==0))) xMarkCountRightDiagonal++;
            }
            else if(board[i][j] == "O")
            {
                oMarkCountInCol++;
                oMarkCountInLeftDiagonal = i==j ? oMarkCountInLeftDiagonal+1 : oMarkCountInLeftDiagonal;
                if((i != ROWS-1 && j!=COLS-1) && ((i==0 && j==COLS-1) || (ROWS%2!=0 && i>0 && i==j) || (i==ROWS-1 && j==0))) oMarkCountInRightDiagonal++;
            }
            
        }

        if(xMarkCountInCol >=3 || xMarkCountLeftDiagonal >= 3 || xMarkCountRightDiagonal >=3 || xMarkCountInRow >= 3) {cout<< "\n(*_*)Game Over! --->  Winner is: X"; return "X";}
        if(oMarkCountInCol >=3 || oMarkCountInLeftDiagonal >= 3 || oMarkCountInRightDiagonal >= 3 || oMarkCountInRow >= 3) {cout<< "\n(*_*)Game Over! --->  Winner is: O"; return "O";}
    }
    return "";
}
