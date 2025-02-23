{
float xr[60];
float yr[60]={10.95,10.62,10.38,10.29,10.20,10.10,10.06,10.00,9.995,9.98,9.84,9.78,9.74,9.69,9.67,9.63,9.61,9.53,9.52,9.48,9.45,9.42,9.38,9.34,9.40,9.26,9.23,9.221,9.14,9.09,9.00,8.97,8.92,8.88,8.83,8.78,8.72,8.67,8.58,8.49,8.38,8.30,8.23,8.11,7.89,7.39,4.05,3.35,3.18,2.99,2.87,2.8,2.72,2.67,2.62,2.57,2.54,2.50,2.50,2.45};
xr[0]=0;
xr[1]=1;
xr[2]=2;
cout<<"a";
for(int i=3;i<57;i++){
xr[i]=xr[i-1]+0.5;
} 
for(int i=0;i<60;i++){
  cout<<endl;
cout<<xr[i]<<" "<<yr[i];
}

//yp[0]=1;

TGraph *func = new TGraph(57,xr,yr);
//TGraphErrors *func = new TGraphErrors(60,xp,yp,xr,yr);
func->SetTitle("Volume 0.0445 HCl added vs PH");
func->SetMarkerStyle(kFullCircle);
func->GetXaxis()->SetTitle("ml (added)");
func->GetYaxis()->SetTitle("PH");
func->Draw("");
//gStyle->SetOptFit(1);
//func->Fit("pol1");
TF1* fit=new TF1("fit","[0]*x+[1]",23.5,24);
func->Fit(fit,"R");
    fit->SetParameters(0.001,1.5);
  fit->Draw("SAME");
  // TF1 *fa1 = new TF1("fa1","17.3*(1+x/5.783)*(1+x/5.783)",-6,1);
  // fa1->Draw("same");
//gStyle->SetOptFit(1);
//auto legend = new TLegend(0.1,0.7,0.48,0.9);
//legend->Draw();
}






