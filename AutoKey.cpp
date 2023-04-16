#include<iostream.h>
#include<conio.h>
#include<string.h>
void main(){
clrscr();
char *plain,*key,alp[]={'a', 'b','c','d','e','f,'g', 'h','"','j','k', 'T','m','n','o','p',' x','y','z'};
int plen,klen,i,count=0,ct[50];
cout<<"\n\n\t\t****This Program Done By:Sanjay Kumar Chakravarti***";
cout<<"\nEnter Text:";
cin>>plain;
cout<<"\nEnter Key:";
cin>>key;
plen=strlen(plain);
klen=strlen(key);
if(klen<plen) {
for(i=klen;i<plen;i++){
key[i]=plain[count];
count++;
}
}cout<<"\nNow Key will be:";
for(i=0;i<plen;i++){
cout<<key[i];
}
int j,k;
for(i=0;i<plen;i++){
for j = 0; j < 26 ;j++)\
if(plain[i] = alp[j]) \
ct[i] = j
for(k=0;k<26;k++){
if (key lceil i]=alp lceil k rceil)
ct[i] +=k;
}
}
}
{
{
char *cih;
cout<<"\nCipher Text will be:";
for(i=0;i<plen;i++){
ct[i]=ct[i]% 26;
cih[i]=alp[ct[i]];
//cout<<ct[i]<<<"";
cout<<alp[ct[i]];
}
cout<<"\n\t\tDecryption:";
int ct1[50];
for(i=0;i<plen;i++){
for(j=0;j<26;j++){
if(cih[i]=alp[j]){
ctl[i]=j;
for(k=0;k<26;k++){
if(key[i]=alp[k]){
ctl[i]--k;
}
}
}
}
}
cout<<"\nOriginal Plain Text will be:";
for(i=0;i<plen;i++){
ct1 [i]=ct1[i]% 26;
if(ct 1 [i]<0) {
ctl[i]=ctl[i]+26;
}
//cih[i]=alp[ct1[i]];
//cout<<ct[i]<<<<"";
cout<<alp[ct1 [i]];
}
getch();
}
