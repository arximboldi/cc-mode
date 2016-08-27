struct foo : public bar {
    foo() {}

    ~foo() override {}
    ~foo() final {}

    Void do_something() {}
};
