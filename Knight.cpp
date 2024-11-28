#include<bits/stdc++.h>
using namespace std;

class Knight {
public:
    int curr_x;
    int curr_y;
    string loc;
    bool w_b;
    int new_x;
    int new_y;
    
    Knight(string chessboard[][9], string loc, bool w_b) {
        this->curr_x = int(loc[0]) - 48;
        this->curr_y = int(loc[1]) - 64;
        this->loc = loc;
        this->w_b = w_b;
    }

public:
    vector<string> possible_moves(string chess_board[][9]) {
        vector<string> moves;
        
        cout<<"Selected character location"<<"-->";
        cout<<char(curr_x+48);
        cout<<char(curr_y+64);
        cout<<endl;

        if (w_b == 1) {
            if (curr_x - 1 >= 1 && curr_y + 2 <= 8 && ((chess_board[curr_x - 1][curr_y + 2] == "___ ") || (chess_board[curr_x - 1][curr_y + 2][0] == '-'))) {
                string move = "  ";
                move[0] = char(48 + curr_x - 1);
                move[1] = char(64 + curr_y + 2);
         
                moves.push_back(move);
               
                
            }
            if (curr_x - 1 >= 1 && curr_y - 2 >= 1 && ((chess_board[curr_x - 1][curr_y - 2] == "___ ") || (chess_board[curr_x - 1][curr_y - 2][0] == '-'))) {
                string move = "  ";
                move[0] = char(48 + curr_x - 1);
                move[1] = char(64 + curr_y - 2);
              
                moves.push_back(move);
               

              
            }
            if (curr_x - 2 >= 1 && curr_y - 1 >= 1 && ((chess_board[curr_x - 2][curr_y - 1] == "___ ") || (chess_board[curr_x - 2][curr_y - 1][0] == '-'))) {
                string move = "  ";
                move[0] = char(48 + curr_x - 2);
                move[1] = char(64 + curr_y - 1);
               
                moves.push_back(move);
               
           
            }
            if (curr_x - 2 >= 1 && curr_y + 1 <= 8 && ((chess_board[curr_x - 2][curr_y + 1] == "___ ") || (chess_board[curr_x - 2][curr_y + 1][0] == '-'))) {
                string move = "  ";
                move[0] = char(48 + curr_x - 2);
                move[1] = char(64 + curr_y + 1);
                
                moves.push_back(move);
               
               
            }

            if (curr_x + 1 <= 8 && curr_y + 2 <= 8 && ((chess_board[curr_x + 1][curr_y + 2] == "___ ") || (chess_board[curr_x + 1][curr_y + 2][0] == '-'))) {
                string move = "  ";
                move[0] = char(48 + curr_x + 1);
                move[1] = char(64 + curr_y + 2);

                moves.push_back(move);
               
        
            }
            if (curr_x + 1 <= 8 && curr_y - 2 >= 1 && ((chess_board[curr_x + 1][curr_y - 2] == "___ ") || (chess_board[curr_x + 1][curr_y - 2][0] == '-'))) {
                string move = "  ";
                move[0] = char(48 + curr_x + 1);
                move[1] = char(64 + curr_y - 2);
                moves.push_back(move);
             
            
            }
            if (curr_x + 2 <= 8 && curr_y - 1 >= 1 && ((chess_board[curr_x + 2][curr_y - 1] == "___ ") || (chess_board[curr_x + 2][curr_y - 1][0] == '-'))) {
                string move = "  ";
                move[0] = char(48 + curr_x + 2);
                move[1] = char(64 + curr_y - 1);
                moves.push_back(move);
               
            }
            if (curr_x + 2 <= 8 && curr_y + 1 <= 8 && ((chess_board[curr_x + 2][curr_y + 1] == "___ ") || (chess_board[curr_x + 2][curr_y + 1][0] == '-'))) {
                string move = "  ";
                move[0] = char(48 + curr_x + 2);
                move[1] = char(64 + curr_y + 1);
                moves.push_back(move);
               
       
            }
        } else {
            if (curr_x - 1 >= 1 && curr_y + 2 <= 8 && ((chess_board[curr_x - 1][curr_y + 2] == "___ ") || (chess_board[curr_x - 1][curr_y + 2][0] == '+'))) {
                string move = "  ";
                move[0] = char(48 + curr_x - 1);
                move[1] = char(64 + curr_y + 2);
                moves.push_back(move);
              
             
            }
            if (curr_x - 1 >= 1 && curr_y - 2 >= 1 && ((chess_board[curr_x - 1][curr_y - 2] == "___ ") || (chess_board[curr_x - 1][curr_y - 2][0] == '+'))) {
                string move = "  ";
                move[0] = char(48 + curr_x - 1);
                move[1] = char(64 + curr_y - 2);
                moves.push_back(move);
              
   
            }
            if (curr_x - 2 >= 1 && curr_y - 1 >= 1 && ((chess_board[curr_x - 2][curr_y - 1] == "___ ") || (chess_board[curr_x - 2][curr_y - 1][0] == '+'))) {
                string move = "  ";
                move[0] = char(48 + curr_x - 2);
                move[1] = char(64 + curr_y - 1);
                moves.push_back(move);
              
            }
            if (curr_x - 2 >= 1 && curr_y + 1 <= 8 && ((chess_board[curr_x - 2][curr_y + 1] == "___ ") || (chess_board[curr_x - 2][curr_y + 1][0] == '+'))) {
                string move = "  ";
                move[0] = char(48 + curr_x - 2);
                move[1] = char(64 + curr_y + 1);
                moves.push_back(move);
              
               
            }
            if (curr_x + 1 <= 8 && curr_y + 2 <= 8 && ((chess_board[curr_x + 1][curr_y + 2] == "___ ") || (chess_board[curr_x + 1][curr_y + 2][0] == '+'))) {
                string move = "  ";
                move[0] = char(48 + curr_x + 1);
                move[1] = char(64 + curr_y + 2);
                moves.push_back(move);
                       
            }
            if (curr_x + 1 <= 8 && curr_y - 2 >= 1 && ((chess_board[curr_x + 1][curr_y - 2] == "___ ") || (chess_board[curr_x + 1][curr_y - 2][0] == '+'))) {
                string move = "  ";
                move[0] = char(48 + curr_x + 1);
                move[1] = char(64 + curr_y - 2);
                moves.push_back(move);
               
               
            }
            if (curr_x + 2 <= 8 && curr_y - 1 >= 1 && ((chess_board[curr_x + 2][curr_y - 1] == "___ ") || (chess_board[curr_x + 2][curr_y - 1][0] == '+'))) {
                string move = "  ";
                move[0] = char(48 + curr_x + 2);
                move[1] = char(64 + curr_y - 1);
                moves.push_back(move);
              

            }
            if (curr_x + 2 <= 8 && curr_y + 1 <= 8 && ((chess_board[curr_x + 2][curr_y + 1] == "___ ") || (chess_board[curr_x + 2][curr_y + 1][0] == '+'))) {
                string move = "  ";
                move[0] = char(48 + curr_x + 2);
                move[1] = char(64 + curr_y + 1);
                moves.push_back(move);
                
            }
        }

        return moves;
    }
};
