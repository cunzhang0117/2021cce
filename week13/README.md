```C
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
```

```C
void setup(){
  size(1024, 400);
}
void draw(){
  background(#FFA488);
  textSize(50);
  fill(#AA0000);  //字的顏色
  int h=hour();  //小時
  int m=minute();  //分鐘
  int s=second();  //秒
  text("Now:"+ h + ":" + m + ":" + s, 100, 100);
}
```
