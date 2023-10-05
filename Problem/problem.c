hi jegan 

// let code a simple step to find a strings

int main()

{
  char str[100];
  char str1[100];
  scanf("%s",&str);
  scanf("%s",&str1);
  int len=sizeof(str);
  for(int i=0;i<len;i++){
    for(int j=i+1;j<len;j++){
      if(i>65&& i<122){
      if(str[i]>str[j]){
      tp=str[i];
        str[i]=str[j];
        str[j]=tp;
      }
      }
      
    }
  }
  for(int i=0;i<len;i++){
  if(str1[i]==str[i]){
  printf("occours! same charcers");
  }
  }
}
