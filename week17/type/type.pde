void setup(){
  size(400, 200);
  textSize(40);
}
String line="";
String []Q={"hello", "world", "other"};
int Qi=0;  //第幾個Q
void draw(){
  background(0);
  int len = line.length();
  text ("Score: "+score, 100, 50);
  text("Q: "+Q[Qi], 100, 100);
  text("A: "+line, 100, 150);
}
int score = 0;
void keyPressed(){
  int len = line.length();
  if(key>='a' && key<='z') line = line + key;
  if(key>='A' && key<='Z') line = line + key;
  if(key == BACKSPACE && len>0) line = line.substring(0, len-1);  //刪除
  if(key == ENTER){  //算分數
    if(line.equals(Q[Qi])==true){  //如果字相同
      score++;
      Qi = int (random(Q.length));
      line = "";
    }else score--;
  }
}
