#include<bits/stdc++.h>
using namespace std;

class King{
	public:
	int curr_x;
    int curr_y;
    string loc;
    bool w_b;
    
    King(string chessboard[][9], string loc, bool w_b) {
        this->curr_x = int(loc[0]) - 48;
        this->curr_y = int(loc[1]) - 64;
        this->loc = loc;
        this->w_b = w_b;
    }

    vector<string> possible_moves(string chess_board[][9]) {
        vector<string> moves;
        
        cout<<"Selected  character location"<<"-->";
        cout<<char(curr_x+48);
        cout<<char(curr_y+64);
        cout<<endl;
       if(w_b==0){
       string move="  ";
       if(chess_board[curr_x+1][curr_y][0]!='-'){
       	move[0]=char(48+curr_x+1);
       	move[1]=char(64+curr_y);
       	moves.push_back(move);
       }
       move="  ";
       if(chess_board[curr_x-1][curr_y-1][0]!='-'){
       	move[0]=char(48+curr_x-1);
       	move[1]=char(64+curr_y-1);
       	moves.push_back(move);}
       	 move="  ";
       if(chess_board[curr_x][curr_y+1][0]!='-'){
       	move[0]=char(48+curr_x);
       	move[1]=char(64+curr_y+1);
       	moves.push_back(move);}
       		 move="  ";
       if(chess_board[curr_x-1][curr_y][0]!='-'){
       	move[0]=char(48+curr_x-1);
       	move[1]=char(64+curr_y);
       	moves.push_back(move);}
       			 move="  ";
       if(chess_board[curr_x][curr_y-1][0]!='-'){
       	move[0]=char(48+curr_x);
       	move[1]=char(64+curr_y-1);
       	moves.push_back(move);}
       	 move="  ";
       	if(chess_board[curr_x+1][curr_y+1][0]!='-'){
       	move[0]=char(48+curr_x+1);
       	move[1]=char(64+curr_y+1);
       	moves.push_back(move);}

       	 move="  ";
       	if(chess_board[curr_x-1][curr_y+1][0]!='-'){
       	move[0]=char(48+curr_x-1);
       	move[1]=char(64+curr_y+1);
       	moves.push_back(move);}
       	 move="  ";
       		if(chess_board[curr_x+1][curr_y-1][0]!='-'){
       	move[0]=char(48+curr_x+1);
       	move[1]=char(64+curr_y-1);
       	moves.push_back(move);}
       	 move="  ";
       	}
       	else{
			string move="  ";
       if(chess_board[curr_x+1][curr_y][0]!='+'){
       	move[0]=char(48+curr_x+1);
       	move[1]=char(64+curr_y);
       	moves.push_back(move);
       }
       move="  ";
       if(chess_board[curr_x-1][curr_y-1][0]!='+'){
       	move[0]=char(48+curr_x-1);
       	move[1]=char(64+curr_y-1);
       	moves.push_back(move);}
       	 move="  ";
       if(chess_board[curr_x][curr_y+1][0]!='+'){
       	move[0]=char(48+curr_x);
       	move[1]=char(64+curr_y+1);
       	moves.push_back(move);}
       		 move="  ";
       if(chess_board[curr_x-1][curr_y][0]!='+'){
       	move[0]=char(48+curr_x-1);
       	move[1]=char(64+curr_y);
       	moves.push_back(move);}
       			 move="  ";
       if(chess_board[curr_x][curr_y-1][0]!='+'){
       	move[0]=char(48+curr_x);
       	move[1]=char(64+curr_y-1);
       	moves.push_back(move);}
       	 move="  ";
       	if(chess_board[curr_x+1][curr_y+1][0]!='+'){
       	move[0]=char(48+curr_x+1);
       	move[1]=char(64+curr_y+1);
       	moves.push_back(move);}

       	 move="  ";
       	if(chess_board[curr_x-1][curr_y+1][0]!='+'){
       	move[0]=char(48+curr_x-1);
       	move[1]=char(64+curr_y+1);
       	moves.push_back(move);}
       	 move="  ";
       		if(chess_board[curr_x+1][curr_y-1][0]!='+'){
       	move[0]=char(48+curr_x+1);
       	move[1]=char(64+curr_y-1);
       	moves.push_back(move);}
       	 move="  ";


       	}
       	return moves;






}

};