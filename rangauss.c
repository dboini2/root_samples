{
float x=0;
int a=0;
float s=0;
 int tabe[6][10000000]=0;
for(int j=0;j<10000000;j++){
for(int i=0;i<6;i++){
x=gRandom->Rndm();
x=6.0*x;
x=floor(x);
int y=x;

if(y == 5){
   // cout<<i<<" "<<j<<" "<<y<<endl;
    tabe[i][j]=1;
}

}
}

for(int i=0;i<10000000;i++){
a=tabe[0][i]+tabe[1][i]+tabe[2][i]+tabe[3][i];
//cout<<a<<"  "<<tabe[5][i]-1<<endl;

   if(a==1){
    if(tabe[5][i]-1==0){
       s++; 
    }
   }
}
cout<<"n suc: "<<s/10000000.0;

}