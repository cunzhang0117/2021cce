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
  textFont(createFont("標楷體", 50));  //設字型
}
void draw(){
  background(#FFA488);
  textSize(50);
  fill(#AA0000);
  int h=hour();  //小時
  int m=minute();  //分鐘
  int s=second();  //秒
  text("Now:"+ h + ":" + m + ":" + s, 100, 100);  //現在時間
  int total = h*60*60 + m*60 + s;  //總秒數
  int total2= 12*60*60+ 0*60 + 0;  //目標時間
  text("總秒數:" + total, 100,200);
  int ans=total2-total;
  int hh=ans/60/60%60, mm=ans/60%60, ss=ans%60;
  text("還剩下:"+ nf(hh,2) + ":" + nf(mm,2) + ":" + nf(ss,2), 100, 300);
}
```
