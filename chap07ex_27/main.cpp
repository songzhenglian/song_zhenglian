 array<int,1000>a;
   for(size_t i=0;i<a.size();++i)
   {
     for(size_t j=2;j<=11;++j)
     {
         if(i<=11&&i%2=1)
            a[i]=0;
         if(i>11&&i%j=1)
            a[i]=0;
     }
   }
