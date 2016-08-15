void lambda_functions_here() {
    [](int x, int y) { return x + y; };

    [](int x, int y) -> int {
        int z = x + y;
        return z + x;
    };

    std::vector<int> someList;
    int total = 0;
    //      XXX XXX       Fontify as function param ----+
    //                                                  |
    //                                                  V
    std::for_each(someList.begin(), someList.end(), [&total](int x) {
                                                        total += x;
                                                    });
    std::cout << total;

    std::vector<int> someList;
    int total = 0;
    std::for_each(someList.begin(), someList.end(), [&](int x) {
                                                        total += x;
                                                    });

    int total = 0;
    int value = 5;
    [&, value](int x) { total += (x * value); };

    //       XXX --+-- fontify as function parameter
    //             |
    //             V
    [](SomeType *typePtr) { typePtr->SomePrivateMemberFunction(); } (st);

    auto myLambdaFunc = [this]() {
                            this->SomePrivateMemberFunction(); };
    auto myLambdaFunc = [this] {
                            this->SomePrivateMemberFunction(); };

    auto myLambdaFunc = [this] (int x) -> char * {
                            return "string";
                        };
    auto myLambdaFunc = [str](int x) -> char [] {
                            return str;
                        };
    auto myLambdaFunc = [this](int x) [[noreturn]] -> void {
                            std::exit ();
                        };
    auto myLambdaFunc = [this](int x) throw (int, double)  -> void {
                            std::exit ();
                        };
    auto myLambdaFunc = [this](int x) throw (int, double) [[noreturn]] -> void {
                            std::exit ();
                        };

    auto myLambdaFunc = [&, total, bar = [&total] () -> int {
                                             return total} (5)] () -> void {
                            add_register (total, bar);
                        };
    auto myLambdaFunc = [foo, &bar] () -> int {return 0;};
    auto myLambdaFunc = [&, foo, &bar] () -> int {return 0;};
    auto myLambdaFunc = [=, foo, &bar] () -> int {return 0;};

    auto myLambdaFunc =
        [
	    &,
	    foo,
	    bar = [
                &total
		]
	    (int x)
	    ->
	    int
		  {
		      return total += x;
		  } (5),
	    baz
	    ]
        (int x)
        throw (int)
        ->
        int
        {
            return 0;
        };
}
