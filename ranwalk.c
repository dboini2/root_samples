{
int ar[40][40];
int step =1;
int x0=5;
int y0=5;
int xn[40]=0;
int yn[40]=0;
int maxsteps=40;
for(int j=0;j<20;j++){
for(int i=0;i<20;i++){
    ar[i][j]=0;
}
}
cnvs=new TCanvas("cnvs","r");
xn[0]=x0;
yn[0]=y0;

for(int i=1;i<maxsteps;i++){
    int x=floor(4.0*gRandom->Rndm())+1;
    xn[i]=xn[i-1];
    yn[i]=yn[i-1];
    if(x==1){
        xn[i]=xn[i-1]+1;
        //cout<<"n";
    }
     if(x==2){
        xn[i]=xn[i-1]-1;
       // cout<<"s";
    }
     if(x==3){
        yn[i]=yn[i-1]+1;
      //  cout<<"e";
    }
     if(x==4){
        yn[i]=yn[i]-1;
       // cout<<"w";
    }

    if(ar[xn[i]][yn[i]]==0){
    
    ar[xn[i]][yn[i]]=i;
    step=i;
    
   
    cout<<xn[i]<<" "<<yn[i]<<endl;
    }else{
        xn[i]=xn[i-1];
        yn[i]=yn[i-1];
    }
}
eate =new TGraph(step-2);
for(int i=0;i<step-2;i++){
    if(!ar[xn[i]][yn[i]]==0){
     eate->SetPoint(i+1,xn[i],yn[i]);
     cout<<xn[i]<<yn[i];
    }
    
}
eate->Draw("a*");




}