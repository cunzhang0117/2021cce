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
```
OR
```c
void setup(){
  size(400, 200);
  textSize(40);
}
int degree = 0;
void draw(){
  background(#E5BCA7);
  fill(#C97449);
  arc(100, 100, 180, 180, radians(90), radians(180));
}
```
