function setup(){
  createCanvas(400, 200);
  textSize(40);
}
let shift=0, v=0, x=0;
function mousePressed(){
  v = random(10)+5;  //取亂數
}
function draw(){
  background(229, 188, 167);
  for(let i=0; i<24; i++)
  {
    if(i%3==0) fill(57,57,55);
    if(i%3==1) fill(255);
    if(i%3==2) fill(266,250,146);
    if(i==0) fill(201,116,73);
    let start = radians(0+shift+i*360/24);
    let stop = radians(360/24+shift+i*360/24);
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
  fill(191,64,58);
  rect(100, 0, 10, 25);
  fill(59,131,188);
  rect(x, 150, 50, 50);
}
