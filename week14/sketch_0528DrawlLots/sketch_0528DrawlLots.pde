void setup(){  //設定，只做一次
   size(300,200);
   textSize(30);
}
int ans=0;
void draw(){
  background(#FFA488);
  text(ans, 130, 105);
  fill(#AA0000);
}
void mousePressed(){
  ans = (int) random(60);  //亂數取60內的數；強制轉型casting
}
