int delayTime = 1; //sub-char delay time
int charBreak = 1; //char delay time

int LED1 = 0;
int LED2 = 1;
int LED3 = 2;
int LED4 = 3;
int LED5 = 4;

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  //pinMode(7, INPUT); 
}

int a[] = {1, 6, 26, 6, 1};
int b[] = {31, 21, 21, 10, 0};
int c[] = {14, 17, 17, 10, 0};
int d[] = {31, 17, 17, 14, 0};
int e[] = {31, 21, 21, 17, 0};
int f[] = {31, 20, 20, 16, 0};
int g[] = {14, 17, 19, 10, 0};
int h[] = {31, 4, 4, 4, 31};
int i[] = {0, 17, 31, 17, 0};
int j[] = {0, 17, 30, 16, 0};
int k[] = {31, 4, 10, 17, 0};
int l[] = {31, 1, 1, 1, 0};
int m[] = {31, 12, 3, 12, 31};
int n[] = {31, 12, 3, 31, 0};
int o[] = {14, 17, 17, 14, 0};
int p[] = {31, 20, 20, 8, 0};
int q[] = {14, 17, 19, 14, 2};
int r[] = {31, 20, 22, 9, 0};
int s[] = {8, 21, 21, 2, 0};
int t[] = {16, 16, 31, 16, 16};
int u[] = {30, 1, 1, 30, 0};
int v[] = {24, 6, 1, 6, 24};
int w[] = {28, 3, 12, 3, 28};
int x[] = {17, 10, 4, 10, 17};
int y[] = {17, 10, 4, 8, 16};
int z[] = {19, 21, 21, 25, 0};

int eos[] = {0, 1, 0, 0, 0};
int excl[] = {0, 29, 0, 0, 0};
int ques[] = {8, 19, 20, 8, 0};

void clearLine (int line ) {
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
}
void displayLine(int line)
{
  int myline;
  myline = line;
  if (myline>=16) {digitalWrite(LED1, HIGH); myline-=16;} 
  if (myline>=8)  {digitalWrite(LED2, HIGH); myline-=8;}  
  if (myline>=4)  {digitalWrite(LED3, HIGH); myline-=4;} 
  if (myline>=2)  {digitalWrite(LED4, HIGH); myline-=2;} 
  if (myline>=1)  {digitalWrite(LED5, HIGH); myline-=1;} 
  delay(delayTime);
  clearLine(0);
}

void displayChar(char ch)
{
for (int i = 0; i <5; i++) {
  
  if (ch == 'a'){displayLine(a[i]);}
  if (ch == 'b'){displayLine(b[i]);}
  if (ch == 'c'){displayLine(c[i]);}
  if (ch == 'd'){displayLine(d[i]);}
  if (ch == 'e'){displayLine(e[i]);}
  if (ch == 'f'){displayLine(f[i]);}
  if (ch == 'g'){displayLine(g[i]);}
  if (ch == 'h'){displayLine(h[i]);}
  if (ch == 'i'){displayLine(i[i]);}
  if (ch == 'j'){displayLine(j[i]);}
  if (ch == 'k'){displayLine(k[i]);}
  if (ch == 'l'){displayLine(l[i]);}
  if (ch == 'm'){displayLine(m[i]);}
  if (ch == 'n'){displayLine(n[i]);}
  if (ch == 'o'){displayLine(o[i]);}
  if (ch == 'p'){displayLine(p[i]);}
  if (ch == 'q'){displayLine(q[i]);}
  if (ch == 'r'){displayLine(r[i]);}
  if (ch == 's'){displayLine(s[i]);}
  if (ch == 't'){displayLine(t[i]);}
  if (ch == 'u'){displayLine(u[i]);}
  if (ch == 'v'){displayLine(v[i]);}
  if (ch == 'w'){displayLine(w[i]);}
  if (ch == 'x'){displayLine(x[i]);}
  if (ch == 'y'){displayLine(y[i]);}
  if (ch == 'z'){displayLine(z[i]);}
  if (ch == '!'){displayLine(excl[i]);
  if (ch == '?'){displayLine(ques[i]);
  if (ch == '.'){displayLine(eos[i]);
  }
  delay(charBreak);
}

void displayString(char* s)
{
  for (int i = 0; i<=strlen(s); i++)
  {
    displayChar(s[i]);
  }
}

void loop()
{   
  displayString(" hello ");
}
