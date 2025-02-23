

float freefall(float t=0,float vy=74, float h=65){
float g=-9.8;
return (g/2)*(t*t)+vy*t+h;
}
