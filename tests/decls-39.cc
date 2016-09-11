template <class T> void barf (T t, const char *file_name) {
    std::ofstream fout (file_name);
    fout << t;
    fout.close ();
}
