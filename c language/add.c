struct complex
{
int real;
int imaginary;
};
int main(void)
{
    struct complex a,b,c;
    add(&a,&b,&c);
    printf("%d+i%d",c.real,c.imaginary);
    return 0;
}
void add(struct complex *a,struct complex *b,struct complex *c)
{
    c->real=a->real+b->real;
    c->imaginary=a->imaginary+b->imaginary;
}