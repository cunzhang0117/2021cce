void setup(){    //只做一次設定
  size(1024, 400);
}

void draw(){  //每秒跑60幅
  if(mousePressed) background(#FF7744);
  else background(#FFA488);
  textSize(50);    //文字大小
  
  text(a, 100, 100);    //文字位置
}

int a=0;
void mousePressed(){
  a++;
}
