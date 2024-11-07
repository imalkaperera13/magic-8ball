#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

cout<<"MAGIC 8-BALL: ";
srand(time(NULL));

int answer=rand() % 10;
cout<<answer<<endl;

if(answer==0){
  cout<<"It is certain."<<endl;
}
else if(answer==1){
  cout<<"my reply is NO."<<endl;
}
else if(answer==2){
  cout<<"Outlook not so good."<<endl;
}
else if(answer==3){
  cout<<"Dont count on it."<<endl;
}
else if(answer==4){
  cout<<"Yes."<<endl;
}
else if(answer==5){
  cout<<"Ask again later."<<endl;
}
else if(answer==6){
  cout<<"Mostly Likely."<<endl;
}
else if(answer==7){
  cout<<"yes - definitely."<<endl;
}
else if(answer==8){
  cout<<"Signs point to yes."<<endl;
}
else{
  cout<<"Very doubtful."<<endl;
}

}
