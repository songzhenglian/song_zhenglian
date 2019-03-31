#include <iostream.h>
#include <string>

class Term
{
public:
    Term(int c,int e);
    Term(int c,int e,Term* next);
    Term* insertafter(int c,int e);
    int coef;
    int exp;
    Term *link;
private:
    friend ostream &operator<<(ostream &,const Term &);
    friend class Polynominal;
};

Term::Term(int c,int e)
{
    coef=c;
    exp=e;
    link=NULL;
}

Term::Term(int c,int e,Term* next)
{
    coef=c;
    exp=e;
    link=next;
}

Term* Term::insertafter(int c,int e)
{
    link=new Term(c,e,link);
    return link;
}

ostream &operator<<(ostream & out,const Term &val)
{
    if(val.coef==0) return out;
    out<<val.coef;
    switch(val.exp)
    {
        case 0:
        break;
    case 1:
        out<<"X";
        break;
    default:
        out<<"X^"<<val.exp;
        break;
    }
    return out;
}
