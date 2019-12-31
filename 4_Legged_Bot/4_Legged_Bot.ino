#include <Servo.h>
#define speed 30
#define angle -20
// c servo step angle
  Servo aa,ab,ac,ba,bb,bc;
  Servo ca,cb,cc,da,db,dc;
  int x = 0;
  int y = 0;
  int a1,a2 = 0;
  int b1,b2,b3 = 0;
  int c1,c2 = 0;
  int d1,d2,d3 = 0;
  int e1,e2 = 0;
  int f1,f2,f3 = 0;
  unsigned long t=0;
  int xt=0;
  unsigned long ot=0;
  const int i=800;


void setup()
  {aa.attach(36);
   ab.attach(38);
   ac.attach(40);
   ba.attach(42);
   bb.attach(44);
   bc.attach(46);
   ca.attach(30);
   cb.attach(32);
   cc.attach(34);
   da.attach(24);
   db.attach(26);
   dc.attach(28);
   ca.write(60-angle);
   aa.write(120+angle);
   ba.write(90-angle);
   da.write(90+ angle);}
    
    
void loop() {  
   ot = millis();
   while(millis()-ot<4*i){
   xt=millis()-ot;
   x = map(xt, 0, i, 90, 60);
   y = map(xt, i, 4*i, 60, 90);
   a1 = map(xt, i, 2*i, 60, 90);
   b1 = map(xt, 2*i, 4*i, 90, 70);
   b2 = map(xt, 0, i, 70, 60);
// b3 = map(xt, 3*i, 5*i, 90, 60);
   c1 = map(xt, 2*i, 3*i, 60, 90);
   d1 = map(xt, 3*i, 4*i, 90, 80);
   d2 = map(xt, 0, 2*i, 80, 60);
// d3 = map(xt, 4*i, 7*i, 60, 90);
   e1 = map(xt, 3*i, 4*i, 90, 60);
   f1 = map(xt, 0, 3*i, 60, 90);
// f2 = map(xt, 4*i, 5*i, 90, 60);
// f3 = map(xt, 5*i, 8*i, 60, 90);
    ca.write(60-angle);
    aa.write(120+angle);
    ba.write(90-angle);
    da.write(90+ angle);
    if(xt<i + 1){
    cb.write(x);
    int z=2*(135-x);
    if (z>120){z=z;}
    if (z<121){z=240-z;}
    cc.write(z-100);
    bb.write(d2);           
    ab.write(b2);   
    db.write(f1);}
    if(xt>i&&xt<2*i+1){
    ab.write(a1);
    int p=2*(a1-15);
    if (p>120){p=240-p;}
    if (p<121){p=p;}
    ac.write(p+40);
    cb.write(y);  
    bb.write(d2); 
    db.write(f1);}
    if(xt>2*i&&xt<3*i+1){
    bb.write(c1);
    int q=2*(c1-15);
    if (q>120){q=240-q;}
    if (q<121){q=q;}
    bc.write(q+50);
    cb.write(y);   
    ab.write(b1);  
    db.write(f1);}
    if(xt>3*i&&xt<4*i+1){
    db.write(e1);
    int r=2*(135-e1);
    if (r>120){r=r;}
    if (r<121){r=240-r;}
    dc.write(r-80);
    cb.write(y);  
    ab.write(b1);   
    bb.write(d1);                  
    }   
    } 
    }
