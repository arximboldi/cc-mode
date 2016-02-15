template <typename Arg, typename... Args>
struct ArgListMatcher<Arg, Args...> :
    ArgListMatcher<MakeIndices<CountRef<Arg>::value>,
                   MakeIndices<sizeof...(Args) - CountRef<Arg>::value, CountRef<Arg>::value>,
                   Arg, Args...>
{
    using Parent = ArgListMatcher<
        MakeIndices<CountRef<Arg>::value>,
        MakeIndices<sizeof...(Args) + 1 - CountRef<Arg>::value,
                    CountRef<Arg>::value>, Arg, Args...>;
    using Parent::ArgListMatcher;
};
