//max of 2 nos. --

int getMax(int n1, int n2){
int result;
if(n1>n2){
result = n1;
}else{ result = n2;
}
return result;
}
int main(){
cout<<getMax(2,5);
return 0;
}

//max of 3 nos. --
int getMax(int n1, int n2, int n3){
int result;
if(n1>=n2 && n1>=n3){
result = n1;
}else if(n2>=n1 && n2>=n3)
{ 
result = n2;
}else{
result = n3;
}
return result;
}
int main(){
cout<<getMax(2,5,20); //20(n3)
return 0;
}
