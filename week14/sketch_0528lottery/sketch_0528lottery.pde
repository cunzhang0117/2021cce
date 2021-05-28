int []a= new int[49];  //宣告49格
void setup(){
  size(400, 200);
  textSize(30);
  for(int i=0; i<49; i++) a[i]=i+1;  //丟入號碼
    for(int i=0; i<10000; i++){  //洗牌
    int i1=(int)random(49), i2=(int)random(49);
    int temp=a[i1];
    a[i1]=a[i2];
    a[i2]=temp;
  }
}
int N=0, rolling=0;
void draw(){
  background(#FFA488);
  for(int i=0; i<N && i<=6; i++){
    int x=52+i*52;
    if(i==N-1 && rolling>0){
      x +=rolling;
      rolling-=3;
    }
    fill(255); ellipse(x, 103, 45, 45);  //球
    textAlign(CENTER, CENTER);  //文字居中
    fill(#AA0000); text(a[i], x, 100);
  }
}
void mousePressed(){
  N++;  //按一下出現一顆球
  rolling=300;
}
