class A final
    : B<C>
{
public:
    void A(int arg)
        : B<C>(arg),
          a(0);
    int a;
};
