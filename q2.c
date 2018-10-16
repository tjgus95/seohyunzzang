#include<stdio.h>
int countDigits(int val,int val2);
void testCountDigits(int x, int d, int result, char *msg);

int main(int argc, char *argv[]){
testCountDigits(123, 1, 1, "single digit test");

testCountDigits(10, 0, 1, "single 0 test");

testCountDigits(456456, 4, 2, "two fours");

testCountDigits(111111, 1, 6, "six 1's");

return 0;
}
void testCountDigits(int x, int d, int result, char *msg){
int test = countDigits(x,d);
if(test==result){
printf("test passed\n");

}else{
printf("test failed\n");
}


} 

int countDigits(int val,int val2){
int temp=val;
int count=0;
int result =0;
int arr[100];
int i;
if(val>=0&&val<10){
if(val==val2){
return 1;
}else{
return 0;}
}
while(temp >=1){
      temp = temp/10;
      count++;
   }

for(i=0;i<count;i++){
      arr[i]= val%10;
       val = val/10;   
   }   

for(i=0;i<count;i++){
 if(arr[i]==val2){
  result++;
  }
}

return result;
}
