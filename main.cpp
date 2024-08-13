#include<iostream>
using namespace std;

char spaces [9]={'1','2','3','4','5','6','7','8','9'};

int win(){
    if (spaces[0]== spaces[1]&&spaces[1] ==spaces[2])
    {
        return 1;
    }
     if (spaces[3]== spaces[4]&&spaces[4] ==spaces[5])
    {
        return 1;
    }
     if (spaces[6]== spaces[7]&&spaces[7] ==spaces[8])
    {
        return 1;
    }
     if (spaces[0]== spaces[3]&&spaces[3] ==spaces[6])
    {
       return 1;
    }
     if (spaces[1]== spaces[4]&&spaces[4] ==spaces[7])
    {
        return 1;
    }
   if (spaces[2]== spaces[5]&&spaces[5] ==spaces[8])
    {
        return 1;
    }
     if (spaces[0]== spaces[4]&&spaces[4] ==spaces[8])
    {
        return 1;
    }
     if (spaces[2]== spaces[4]&&spaces[4] ==spaces[6])
    {
        return 1;
    }
     if (spaces[0]!='1' && spaces[1]!='2' &&spaces[2]!='3'&&spaces[3]!='4' &&spaces[4]!='5'
     &&spaces[5]!='6'&&spaces[6]!='7'&&spaces[7]!='8'&&spaces[8]!='9')

    {
        return 0;
    }
    else
    return -1;
}  

void box() {
 cout<<"\t\t"<<"Tick tak toe"<<endl;
 cout<<"Player 1 =X"<<endl;
 cout<<"Player 2 =O"<<endl;

cout<<"    |     |    "<<endl;
cout<<" "<<spaces[0]<< "  |  " <<spaces[1]<<"  |  "<<spaces[2]<<endl;
cout<<"____|_____|____"<<endl;
cout<<"    |     |    "<<endl;
cout<<" "<<spaces[3]<< "  |  " <<spaces[4]<<"  |  "<<spaces[5]<<endl;
cout<<"____|_____|____"<<endl;
cout<<"    |     |    "<<endl;
cout<<" "<<spaces[6]<< "  |  " <<spaces[7]<<"  |  "<<spaces[8]<<endl;
cout<<"    |     |    "<<endl;



}
int main()
{
    int player=1,i,choice;
    char mark;
    do
        {
            box();
            player=(player%2)?1:2;
            cout<<"PLAYER: "<<player<<" ENTER THE CHOICE:";
            cin>>choice;
            mark=(player==1)?'X':'O';

            if(choice==1&&spaces[0]=='1')
            {
                spaces[0]=mark;
            }
            else if (choice==2&&spaces[1]=='2')
            {
                spaces[1]=mark;
            }   
            else if (choice==3&&spaces[2]=='3')
            {
                    spaces[2]=mark;
            }   
            else if (choice==4&&spaces[3]=='4')
             {
                    spaces[3]=mark;
             }  
            else if (choice==5&&spaces[4]=='5')
             {
                    spaces[4]=mark;
             }   
            else if (choice==6&&spaces[5]=='6')
                {
                    spaces[5]=mark;
                }   
                else if (choice==7&&spaces[6]=='7')
                {
                        spaces[6]=mark;
                }   
                else if (choice==8&&spaces[7]=='8')
                 {
                        spaces[7]=mark;
                 }  
                else if (choice==9&&spaces[8]=='9')
                 {
                        spaces[8]=mark;
                 }   
            else 
                {
                    cout<<"INVALID MOVE";
                    player--;
                    
                }
            i=win();
            player++;
        }
        while(i==-1);
        box();
    if(i==1)
    {
        cout<<"PLAYER"<<--player<<"WIN";
    }
    else
    {
        cout<<"DRAW";
    }
} 
    