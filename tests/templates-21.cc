template <typename X, typename... Y>
class bob {
};

template<typename... Args> inline void expand(Args&&... args) {
    pass( some_function(args)... );
}

template <typename... BaseClasses> class ClassName : public BaseClasses... {
public:
    ClassName (BaseClasses&&... base_classes) : BaseClasses(base_classes)... {}
};
