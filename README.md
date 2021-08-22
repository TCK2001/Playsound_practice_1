## Practice Playsound
----------
This Program important thing is ...
```c
#include <MMsystem.h>
#pragma comment(lib,"winmm.lib") 
```
#### xxx.wav You can put another songs, But only xxx.wav files.
#### I use Maplestory OST to practice. Because I really love Maplestory OST HAHAHA.
```c
PlaySound(TEXT("maple.wav"),NULL,SND_LOOP|SND_ASYNC);
```
+ SND_LOOP = just loop HAHAHA.
+ SND_ASYNC = after play the song go to executive next program.
+ In here The next program is guess_number.
----------
```c
#include <time.h>
srand(time(NULL));
randnum=rand()%50+1; // 1~50 number.....
```
```c
if(guess>=randnum)
{
	printf("It's too big\n"); ....
else if(guess<=randnum)
{
	printf("It's too small\n"); ....
```
