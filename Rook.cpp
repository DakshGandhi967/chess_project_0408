#include<bits/stdc++.h>
using namespace std;

class Rook{
public:
	int curr_x;
    int curr_y;
    string loc;
    bool w_b;
    
    Rook(string chessboard[][9], string loc, bool w_b) {
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
     
int terminate=15;
    for(int i=1; curr_y-i>=1 && i<terminate ;i++){
    	 	char check=chess_board[curr_x][curr_y][0];
    	
  
  
    	
    	  
    		
    	
    	  if(chess_board[curr_x][curr_y-i][0]==check){
    	  	break;
    	  }
    	   if(chess_board[curr_x][curr_y-i]!="___ "   && curr_y-i>=1){
    	  	terminate=i+1;
    	  	string move="  ";

    	  move[0]=char(48+curr_x);
    	  move[1]=char(64+curr_y-i);
    	  moves.push_back(move);
        }
        
    	
    	  else{
    	  	  string move="  ";
    	   move[0]=char(48+curr_x);
    	  move[1]=char(64+curr_y-i);
    	  moves.push_back(move);
    	}

    }
    terminate=15;
    
    for(int i=1; i+curr_y<=8 && i<terminate;i++){
    	 	char check=chess_board[curr_x][curr_y][0];
    
  
    	  
    		
    	
    	  if(chess_board[curr_x][curr_y+i][0]==check){
    	  	break;
    	  }
    	   if(chess_board[curr_x][curr_y+i]!="___ "   && curr_y+i<=8){
    	  	terminate=i+1;
    	  	string move="  ";
    	  move[0]=char(48+curr_x);
    	  move[1]=char(64+curr_y+i);
    	  moves.push_back(move);
      }
    	
    	  else{
    	  	  string move="  ";
    	   move[0]=char(48+curr_x);
    	  move[1]=char(64+curr_y+i);
    	  moves.push_back(move);
    	}
    	  

    }
     terminate=15;


    for(int i=1; i+curr_x<=8 && i<terminate;i++){
    	char check=chess_board[curr_x][curr_y][0];
    	
  
    
    	
    	  if(chess_board[curr_x+i][curr_y][0]==check){
    	  	break;
    	  }
    	   if(chess_board[curr_x+i][curr_y]!="___ "   && curr_x+i<=8){
    	  	terminate=i+1;
    	  	string move="  ";
    	  move[0]=char(48+curr_x+i);
    	  move[1]=char(64+curr_y);
    	  moves.push_back(move);
      
    	  }
    	
    	  else{
    	  	  string move="  ";
    	   move[0]=char(48+curr_x+i);
    	  move[1]=char(64+curr_y);
    	  moves.push_back(move);
    	}
    	   
    }
     terminate=15;
for(int i=1; curr_x-i>=1 && i<terminate;i++){
       	 	char check=chess_board[curr_x][curr_y][0];
 
  
    
    	  
    		
    	
    	  if(chess_board[curr_x-i][curr_y][0]==check){
    	  	break;
    	  }
    	   if(chess_board[curr_x-i][curr_y]!="___ "   && curr_x-i>=1){
    	  	terminate=i+1;
    	  	string move="  ";
    	  move[0]=char(48+curr_x-i);
    	  move[1]=char(64+curr_y);
    	  moves.push_back(move);
    
    	  }
    	
    	  else{
    	  	  string move="  ";
    	   move[0]=char(48+curr_x-i);
    	  move[1]=char(64+curr_y);
    	  moves.push_back(move);
    	}
    	    


    }
    return moves;
}

/*
 if(w_b==0){
    	  	if(chess_board[curr_x][curr_y-i]=="+KG"){
    	  		cout<<"CHECK!!!";
    	  	}
    	  }
    	else{
    		if(chess_board[curr_x][curr_y-i]=="-KG"){
    	  		cout<<"CHECK!!!";
    	  	}

    	}


    	if(w_b==0){
    	  	if(chess_board[curr_x][curr_y+i]=="+KG"){
    	  		cout<<"CHECK!!!";
    	  	}
    	  }
    	else{
    		if(chess_board[curr_x][curr_y+i]=="-KG"){
    	  		cout<<"CHECK!!!";
    	  	}

    	}
    	 if(w_b==0){
    	  	if(chess_board[curr_x-i][curr_y]=="+KG"){
    	  		cout<<"CHECK!!!";
    	  	}
    	  }
    	else{
    		if(chess_board[curr_x-i][curr_y]=="-KG"){
    	  		cout<<"CHECK!!!";
    	  	}

    	}
    	if(w_b==0){
    	  	if(chess_board[curr_x+i][curr_y]=="+KG"){
    	  		cout<<"CHECK!!!";
    	  	}
    	  }
    	else{
    		if(chess_board[curr_x+i][curr_y]=="-KG"){
    	  		cout<<"CHECK!!!";
    	  	}

    	}\
 */
};