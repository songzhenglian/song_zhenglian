#include <string>
#incluge "Term.h"

class Polynominal
{
    friend std::ostream &operator<<(std::ostream & ,const Polynominal & );
    friend std::istream &operator>>(std::istream & ,Polynominal & );

private:
     Term *thelist;
    Polynominal operator+(const Polynominal & )const;
    Polynominal operator-(const Polynominal & )const;
    Polynominal operator*(const Polynominal & )const;
    Polynominal operator=(const Polynominal & )const;

public:
    Polynominal();
    ~Polynominal();
    void addterms(istream& in);
    void addterms(int c,int e);
    void padd(Polynominal & r);
    void padd(int c,int e);
    void psub(Polynominal & r);
    void pmul(Polynominal & r);
    void pequ(Polynominal & r);
    void output(ostream &out)const;
};

Polynominal::Polynominal()
{
    thelist=new Term(0,-1);
    thelist->link=thelist;
}

Polynominal::~Polynominal()
{
    Term* p=thelist->link;
    while(p!=thelist)
    {
        thelist->link=p->link;
        delete p;
        p=thelist->link;
    }
}


void Polynominal::addterms(istream& in)
{
    Term* q=thelist;
    int c,e;
    for(;;)
    {
        cout<<"input a term(coef,exp):\n"<<endl;
        cin>>c>>e;
        if(e<0) break;
        q=q->insertafter(c,e);
    }
}
void Polynominal::addterms(int c,int e)
{
    if(e<0) return;
    Term *q=new Term(0,-1);
    Term *p=thelist;
    q->coef=c;
    q->exp=e;
    q->link=thelist;
    while(p->link->exp>0)
    {
        p=p->link;
    }
    p->link=q;
}


void Polynominal::output(ostream &out)const
{
    int first=1;
    Term *p=thelist->link;
    cout<<"the polynominal is:\n"<<endl;
    for(;p!=thelist;p=p->link)
    {
        if(!first && (p->coef>0))  cout<<"+";
        first=0;
        cout<<*p;
    }
    cout<<"\n"<<endl;
}


void Polynominal::padd(Polynominal &r)
{
    Term *q,*q1=thelist,*p;
    p=r.thelist->link;
    q=q1->link;
    while (p->exp>=0)
    {
        while(p->exp<q->exp)
        {
            q1=q;
            q=q->link;
        }
        if(p->exp==q->exp)
        {
            q->coef=q->coef+p->coef;
            if(q->coef==0)
            {
                q1->link=q->link;
                delete(q);
                q=q1->link;
            }
            else
            {
                q1=q;
                q=q->link;
            }
        }
        else
        {
            q1=q1->insertafter(p->coef,p->exp);
        }
        p=p->link;
    }
    cout<<"1";
}


void Polynominal::padd(int c,int e)
{
    Term *q,*q1=thelist;
    q=q1->link;
    while(e<q->exp)
    {
        q1=q;
        q=q->link;
    }

    if(e==q->exp)
    {
        q->coef=q->coef+c;

        if(q->coef==0)
        {
            q1->link=q->link;
            delete(q);
            q=q1->link;
        }

    }
    else
    {
        q1=q1->insertafter(c,e);
    }

}

void Polynominal::psub(Polynominal &r)
{
    Term *q,*q1=theist,*;
    p=r.theList->link;
    q1=->link;
    while (p->exp>=0)
    {
        while(p->exp<q->exp)
        {
            q1=q;
            q=q->link;
        }
        if (p->exp==q->exp)
        {
            q->coef=q->coef-p->coef;
            if (q->coef==0)
            {
                q1->link=q->link;
                delete(q);
                q=q1->link;
            }
            else
                {q1=q;
            q=q->link;
            }
        }
        else
        q1=q1->InsertAfter(p->coef,p->exp);
        p=p->link;
    }

}

void Polynominal::pmul(Polynominal &r)
{
    Polynominal *a=this;
    Term *p,*q;
    p=thelist->link;
    q=r.thelist->link;
    Polynominal n;
    while(p->exp>=0)
    {
        while(q->exp>=0)
        {
             n.padd(p->coef*q->coef,p->exp+q->exp);
             q=q->link;
        }
        q=r.thelist->link;
        p=p->link;
    }
    Term *np=n.thelist->link;
    thelist->link->coef=0;
    thelist->link->exp=-1;
    thelist->link->link=thelist;

    while(np->exp>=0)
    {
        a->addterms(np->coef,np->exp);
        np=np->link;
    }
    a->addterms(0,-1);
}

void Polynominal::pequ(Polynominal &r)
{
    Polynominal *a=this;
    Term *p,*q;
    p=thelist->link;
    q=r.thelist->link;
    Polynominal n;
    while(p->exp>=0)
    {
        while(q->exp>=0)
        {
             n.padd(p->coef*q->coef,p->exp+q->exp);
             q=q->link;
        }
        q=r.thelist->link;
        p=p->link;

        if (p->exp==q->exp)
        {
            if (q->coef==p->coef)
            {
                p=q;
                delete(q);
            }
            else
            {
                p=p->link;
                q=q->link;
            }
        }
        else
        q=q->InsertAfter(p->coef,p->exp);
        p=p->link;
    }

}


