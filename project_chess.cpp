#include<bits/stdc++.h>
#include "Pawn.cpp"
#include "Knight.cpp"
#include "Rook.cpp"
#include "Bishop.cpp"
#include"Queen.cpp"
#include"King.cpp"
using namespace std;
// black == +
const int BOARD_SIZE = 9;


int binary_x(string cur_char,string chessBoard[][BOARD_SIZE]){
    for(int i=0;i<BOARD_SIZE;i++){
        for(int j=0;j<BOARD_SIZE;j++){
            if(chessBoard[i][j]==cur_char){
             
                return i;
            }
        }
    }
    return 0;
}
int binary_y(string cur_char,string chessBoard[][BOARD_SIZE]){
    for(int i=0;i<BOARD_SIZE;i++){
        for(int j=0;j<BOARD_SIZE;j++){
            if(chessBoard[i][j]==cur_char){
                             return j;
            }
        }
    }
    return 0;
}





int main(){
string chessBoard[BOARD_SIZE][BOARD_SIZE] = {
        {"", "", "", "", "", "", "", ""},
        {"", "", "", "", "", "", "", ""},
        {"", "", "", "", "", "", "", ""},
        {"", "", "", "", "", "", "", ""},
        {"", "", "", "", "", "", "", ""},
        {"", "", "", "", "", "", "", ""},
        {"", "", "", "", "", "", "", ""},
        {"", "", "", "", "", "", "", ""}
    };

for(int j=1;j<BOARD_SIZE;j++){
    char ch=char(j+48);
    chessBoard[2][j]+="+P";
    chessBoard[2][j]+=ch;
    chessBoard[2][j]+="|";
}for(int i=1;i<BOARD_SIZE;i++){
    chessBoard[i][0]=char(i+48);    
    chessBoard[i][0]+=" ";

}
chessBoard[0][0]="+  ";
for(int j=1;j<BOARD_SIZE;j++){
    chessBoard[0][j]='A'+j-1;

    chessBoard[0][j]+="   ";


}

chessBoard[1][1]="+R1|";
chessBoard[1][2]="+K1|";
chessBoard[1][3]="+B1|";
chessBoard[1][4]="+KG|";
chessBoard[1][5]="+Q_|";
chessBoard[1][6]="+B2|";
chessBoard[1][7]="+K2|";
chessBoard[1][8]="+R2|";

chessBoard[8][1]="-R1|";
chessBoard[8][2]="-K1|";
chessBoard[8][3]="-B1|";
chessBoard[8][4]="-KG|";
chessBoard[8][5]="-Q_|";
chessBoard[8][6]="-B2|";
chessBoard[8][7]="-K2|";
               // cout << "hi";
chessBoard[8][8]="-R2|";


for(int j=1;j<BOARD_SIZE;j++){
    char ch=char(j+48);
    chessBoard[7][j]+="-P";
    chessBoard[7][j]+=ch;
    chessBoard[7][j]+="|";
}
for(int i=0;i<BOARD_SIZE;i++){
    for(int j=0;j<BOARD_SIZE;j++){
        if(chessBoard[i][j]==""){
            chessBoard[i][j]="___ ";
        }
    }
}


cout<<"                                                               GAME OF CHESS !!"<<endl;
cout<<"INSTRUCTIONS BEFORE U START PLAYING :"<<endl;
cout<<"1. The game goes as standard game of chess"<<endl;
cout<<"2. the developer has yet not included check detection ,stalemate detection ,enpassant"<<endl;
cout<<"3. well developer will soon add those features meanwhile casual chess players can still enjoy it"<<endl;
cout<<"4. the characters with '-' are of white and vice versa"<<endl;
cout<<"5. the characters are marked with first initial of there name example: K for knight for king its KG."<<endl;
cout<<endl;


cout<<endl;

for(int i=0;i<BOARD_SIZE;i++){
    for(int j=0;j<BOARD_SIZE;j++){
        cout<<chessBoard[i][j];
    }
    cout<<endl;
}

bool w_b=0;
//w_b 0=white
//black ke 9 to 16


bool pawn_c[17]={0};

//loop

while((binary_x("-KG|",chessBoard)!=0) && (binary_x("+KG|",chessBoard)!=0)){
cout<<endl;
if(!w_b){
    cout<<"white turn"<<endl;
}

else{
    cout<<"black turn"<<endl;
}
string cur_char;
cout<<"Choose a character to move :"<<endl;
cin>>cur_char;
string loc;
int c_x=binary_x(cur_char,chessBoard);
int c_y=binary_y(cur_char,chessBoard);


loc+=char(48+c_x);
loc+=char(64+c_y);



vector<string> moves;

if(cur_char[1]=='P'){
    Pawn P(chessBoard,loc,w_b);
    vector<string> move_P;
    move_P=P.possible_moves(chessBoard,pawn_c,int(cur_char[2]-48));
    for(int i=0;i<move_P.size();i++){
        moves.push_back(move_P[i]);
    }
}

if(cur_char[1]=='K'  && int(cur_char[2])<64){
    Knight K(chessBoard,loc,w_b);
    vector<string> move_k;
    move_k=K.possible_moves(chessBoard);
    for(int i=0;i<move_k.size();i++){
        moves.push_back(move_k[i]);
    }
    
}
if(cur_char[1]=='R'){
    Rook R(chessBoard,loc,w_b);
    vector<string> move_r;
    move_r=R.possible_moves(chessBoard);
    for(int i=0;i<move_r.size();i++){
        moves.push_back(move_r[i]);
    }
}
if(cur_char[1]=='B'){
    Bishop B(chessBoard,loc,w_b);
    vector<string> move_b;
    move_b=B.possible_moves(chessBoard);
    for(int i=0;i<move_b.size();i++){
        moves.push_back(move_b[i]);
    }
    
}
if(cur_char[1]=='Q'){
    Queen Q(chessBoard,loc,w_b);
    vector<string> move_q;
    move_q=Q.possible_moves(chessBoard);
    for(int i=0;i<move_q.size();i++){
        moves.push_back(move_q[i]);
    }
    
}
if(cur_char[1]=='K' && cur_char[2]=='G'){
    King k(chessBoard,loc,w_b);
    vector<string> move_k;
    move_k=k.possible_moves(chessBoard);
    for(int i=0;i<move_k.size();i++){
        moves.push_back(move_k[i]);
    }
    
}


cout<<"possible moves are-->  ";
for(auto i: moves){
    cout<<i<<",";
}



cout<<endl;
cout<<"choose ur move wisely from above valid options  by typing that number of that move: ";
int x;
cin>>x;
int new_x=int(moves[x-1][0])-48;
int new_y=int(moves[x-1][1])-64;
if(cur_char[1]=='P'){
    if(w_b==0){
    pawn_c[int(cur_char[2])-48]=1;
    if(new_x==1){
        cout<<"for what do u want to replace ur pawn with";
        string replaced_char;
        cin>>replaced_char;
        cout<<endl<<replaced_char;
        chessBoard[c_x][c_y]=replaced_char;
    }
}
    else{
        pawn_c[int(cur_char[2])-48+8]=1;
        if(new_x==8){
        cout<<"for what do u want to replace ur pawn with";
        string replaced_char;
        cin>>replaced_char;
        chessBoard[c_x][c_y]=replaced_char;
    }


    }
    if(chessBoard[new_x][new_y]=="___ " && (new_x!=1 || new_x!=8)){
    swap(chessBoard[c_x][c_y],chessBoard[new_x][new_y]);
}
else if(chessBoard[new_x][new_y]!="___ " && (new_x!=1 || new_x!=8)){
    chessBoard[new_x][new_y]=chessBoard[c_x][c_y];
    chessBoard[c_x][c_y]="___ ";
}






}

char d;
string new_loc="  ";
new_loc[0]=moves[x-1][0];
new_loc[1]=moves[x-1][1];

//cout<<new_loc;
cout<<endl;
 if(chessBoard[new_x][new_y]=="___ " && cur_char[1]!='P'){
    swap(chessBoard[c_x][c_y],chessBoard[new_x][new_y]);

}
else if(chessBoard[new_x][new_y]!="___ "  && cur_char[1]!='P'){
    cout<<new_x<<" "<<new_y<<endl;
    chessBoard[new_x][new_y]=chessBoard[c_x][c_y];
    chessBoard[c_x][c_y]="___ ";
}


for(int i=0;i<BOARD_SIZE;i++){
    for(int j=0;j<BOARD_SIZE;j++){
        cout<<chessBoard[i][j];
    }
    cout<<endl;
}


if(w_b==0){
    w_b=1;
}
else{
    w_b=0;
}




}
cout<<endl;
cout<<"CHECK MATE !!!";
if(w_b==0){
    cout<<"black wins";
}
else{
    cout<<"white wins";
}

return 0;
}











