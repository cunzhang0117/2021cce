### Turntable
```C
void setup(){
  size(400, 200);
}
void draw(){
  background(#E5BCA7);
  fill(255);
  ellipse(200, 100, 180, 180);
  fill(#C97449);
  float stop=mouseX/50.0;  //隨滑鼠位置改變
  text(stop, 300, 100);
  arc(200, 100, 180, 180, 0, stop);  //(畫圓，圓心，寬，高)
}
```

### 畫弧
```C
void setup(){
  size(400, 200);
  textSize(40);
}
int degree = 0;
void draw(){
  background(#E5BCA7);
  float stop=radians(degree);
  text(degree, 200, 100);
  text(stop, 200, 150);
  fill(#C97449);
  arc(100, 100, 180, 180, 0, stop);
  if(mousePressed) degree++;
}

//OR

void setup(){
  size(400, 200);
  textSize(40);
}
void draw(){
  background(#E5BCA7);
  fill(#C97449);
  arc(100, 100, 180, 180, radians(90), radians(180));
}
```

### 轉動
```C
void setup(){
  size(400, 200);
  textSize(40);
}
float shift=0, v=0;
void mousePressed(){
  v = random(10)+5;  //取亂數
}
void draw(){
  background(#E5BCA7);
  float start = radians(90+shift);
  float stop = radians(180+shift);
  fill(#C97449);
  arc(100, 100, 180, 180, start, stop);
  if(v>0.1){  //還有速度時
    shift+=v;  //轉動的速度
    v=v*0.99;  //慢慢減速
  }
  text(shift, 200, 100);
  text(v, 200, 150); 
}
```
```C
void setup(){
  size(400, 200);
  textSize(40);
}
float shift=0, v=0, x=0;
void mousePressed(){
  v = random(10)+5;  //取亂數
}
void draw(){
  background(#E5BCA7);
  for(int i=0; i<24; i++){
    if(i%3==0) fill(#393937);
    if(i%3==1) fill(255);
    if(i%3==2) fill(#FFFA9B);
    if(i==0) fill(#C97449);
    float start = radians(0+shift+i*360/24);
    float stop = radians(360/24+shift+i*360/24);
    arc(100, 100, 180, 180, start, stop);
  }
  if(v>0.1){  //還有速度時
    shift+=v;  //轉動的速度
    v=v*0.99;  //慢慢減速
    x += v*0.2;
  }else{  //不轉的時候，判斷是否得獎
    
  }
  text(shift, 200, 100);
  text(v, 200, 150); 
  fill(#BF403A);
  rect(100, 0, 10, 25);
  fill(#3B83BC);
  rect(x, 150, 50, 50);
}
```
