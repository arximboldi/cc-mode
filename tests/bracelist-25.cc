int main()
{
    int foo
        {
        };
    int foo
        {
            1
        };
    int foo =
        {
            1
        };
    int&& foo =
        {
            1
        };
    Bar foo
        {
        };
    Bar foo
        (2
            );
    std::string foo
        {
            'f',
            'o',
            'o'
        };
    std::map<int, std::string> foo =
        {
            {1, "f"},
            {2, {'f', 'o', 'o'} }
        };
    std::cout << foo(
    {
        "foo",
        "bar"
    }
        ).first
              << '\n';
    std::string ars[] = {std::string("one"),
                         "two",
                         {
                             't',
                             'h',
                             'r',
                             'e',
                             'e'
                         }
    };

}

struct Foo {
    std::vector<int> mem =
    {1,2,3
    };
    std::vector
    <int
     > mem2;
    Foo() : mem2
    {-1, -2, -3}
    {}
};

std::pair<std::string, std::string> foo(std::pair<std::string, std::string> bar)
{
    return
        {
            bar.second,
            bar.first
        };
}
