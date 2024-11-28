#include<bits/stdc++.h>
using namespace std;

class Pawn{
public:
    int curr_x;
    int curr_y;
    string loc;
    bool w_b;
    
 

    
    Pawn(string chessboard[][9], string loc, bool w_b) {
        this->curr_x = int(loc[0]) - 48;
        this->curr_y = int(loc[1]) - 64;
        this->loc = loc;
        this->w_b = w_b;
      

    }


    public:
      


    vector<string> possible_moves(string chess_board[][9],bool pawn_c[],int pawn_no) {
        vector<string> moves;

        if(w_b==0){
             if(chess_board[curr_x-1][curr_y+1][0]=='+' && curr_x-1>=1 && curr_y+1<=8 ){
                string move="  ";
                move[0]=char(48+curr_x-1);
                move[1]=char(64+curr_y+1);
                moves.push_back(move);
            }
            if(chess_board[curr_x-1][curr_y-1][0]=='+' && curr_x-1>=1 && curr_y-1>=1){
                string move="  ";
                move[0]=char(48+curr_x-1);
                move[1]=char(64+curr_y-1);
                moves.push_back(move);
            }
            if(pawn_c[pawn_no]==0){
                if(chess_board[curr_x-1][curr_y]=="___ " && curr_x-1>=1 ){
                string move="  ";
           
            
                move[0]=char(48+curr_x-1);
                move[1]=char(64+curr_y);
                 moves.push_back(move);
                }
                if(chess_board[curr_x-2][curr_y]=="___ " && curr_x-2>=1 ){
                string move="  ";
                move[0]=char(48+curr_x-2);
                move[1]=char(64+curr_y);
                 moves.push_back(move);
                }  
            }
           

            else{
                if(chess_board[curr_x-1][curr_y]=="___ "  && curr_x-1>=1 ){
                string move="  ";
    
                move[0]=char(48+curr_x-1);
                move[1]=char(64+curr_y);
                 moves.push_back(move);
                }
            }

        }
        else{
                if(chess_board[curr_x+1][curr_y+1][0]=='-'  && curr_x+1<=8 && curr_y+1<=8){
                string move="  ";
                move[0]=char(48+curr_x+1);
                move[1]=char(64+curr_y+1);
                moves.push_back(move);
            }
            if(chess_board[curr_x+1][curr_y-1][0]=='-'  && curr_x+1<=8 && curr_y-1>=1){
                string move="  ";
                move[0]=char(48+curr_x+1);
                move[1]=char(64+curr_y-1);
                moves.push_back(move);
            }
             if(pawn_c[pawn_no+8]==0){
                if(chess_board[curr_x+1][curr_y]=="___ "  && curr_x+1<=8 ){
                string move="  ";
                move[0]=char(48+curr_x+1);
                move[1]=char(64+curr_y);
                moves.push_back(move);
                }
                if(chess_board[curr_x+2][curr_y]=="___ " && curr_x+2<=8){
                string move="  ";
                move[0]=char(48+curr_x+2);
                move[1]=char(64+curr_y);
                 moves.push_back(move);
                }

            }
            
            else{
                if(chess_board[curr_x+1][curr_y]=="___ "&&  curr_x+1<=8){
                string move="  ";
                move[0]=char(48+curr_x+1);
                move[1]=char(64+curr_y);
                 moves.push_back(move);
                }
            }
        }
        return moves;

      }
    };
