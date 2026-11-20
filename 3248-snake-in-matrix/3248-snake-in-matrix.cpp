class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int ans=0;
      int row=0,col=0;
      for(int i=0;i<commands.size();i++)
      {
        if(commands[i]=="UP")
        row-=1;
        if(commands[i]=="DOWN")
        row+=1;
        if(commands[i]=="RIGHT")
        col+=1;
        if(commands[i]=="LEFT")
        col-=1;
      }
      return ((row*n)+col);
    }
};