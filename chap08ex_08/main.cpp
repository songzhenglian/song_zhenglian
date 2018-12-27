a) unsigned int values[5]={2,4,6,8,10};
b) unsigned int *vPtr;
c) cout<<fixed<<showpoint<<setprecision(1);
   for(size_t i=0;i<size;++i)
    cout<<values[i]<<' ';
d) vPtr=values;
   *vPtr=&values[0];
e) cout<<fixed<<showpoint<<setprecision(1);
   for(size_t j=0;j<size;++j)
    cout<<*(vPtr+j)<<' ';
f) cout<<fixed<<showpoint<<setprecision(1);
   for(size_t k=0;k<size;++K)
    cout<<*(values+k)<<' ';
g) cout<<fixed<<showpoint<<setprecision(1);
   for(size_t m=0;m<size;++m)
    cout<<vPtr[m]<<' ';
h) values[4]
   *(values+4)
   vPtr[4]
   *(vPtr+4)
i) 地址1002500+2*3=1002506;存储的值为values[3];
j) 1002500;存储的值为values[0];
