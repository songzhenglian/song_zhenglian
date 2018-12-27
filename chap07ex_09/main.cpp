a)#include<iostream>
  #include<array>
  using namespace
  const size_t rows=2;
  const size_t columns=3;
  void printArray(const array<array<int,columns>,rows>&);

  int main()
  {
    array<array<int,columns>,rows>t1;
    array<array<int,columns>,rows>t2;
    cout<<"Values in t1 by row are:"<<endl;
    printArray(t1);
    cout<<"\nValues in t2 by row are:"<<endl;
    printArray(t2);
    }
b)2行；
c)3列；
d)6个；
e)1行：t[1][0],t[1][1],t[1][2];
f)2列：t[0][2],
       t[1][2],
       t[2][2];
g)t[1][2]=0;
h)t[0][0]=0;
  t[0][1]=0;
  t[0][2]=0;
  t[1][0]=0;
  t[1][1]=0;
  t[1][2]=0;
i)for(size_t row=0;row<t.size();++row)
{
   for(size_t column=0;column<t[row].size();++column)
    t[row][column]=0;
   cout<<t[row][column]<<' ';
   cout<<endl;
}
j)for(auto const &row:t)
{
    for(auto const &element:0)
        cout<<element<<' ';
    cout<<endl;
}
k)array<array<int,column>,row>t={各元素的值};
l)int getMinimum()const
  array<array<int,column>,row>t;
  cout<<"\nLowest t[row][column] is"<<getMinimum()<<endl;
m)cout<<t[1][0]<<' '<<t[1][1]<<' '<<t[1][2]<<endl;
n)total=0;
  for(size_t row=0;row<t.size;++row)
    total+=t[row][1];
o)


