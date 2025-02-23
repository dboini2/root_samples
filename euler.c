float m;
float y1,x1;
float cx[22],cy[22];
float h=1;
euler(float x=0, float y=0){
for(int i=1;i<21;i++){

//   
m=(y+1)/(x+1);
//
y1=y+h*m;
x1=x+h;
cout<<i<<"   "<<x1<<"   "<<y1<<endl;
cx[i]=x;
cy[i]=y; 
x=x1;
y=y1;
}

funt = new TGraph(21,cx,cy);
funt->Draw();
}








