class Foo {
    public void Bar(String foo) {
        int a = 0;

        switch (a) {
        case 0:
        case 1:
            a += 1;
            a += 2;
            break;
        }

        switch (foo) {
        case "foo":
            a += 1;
            a += 2;
            break;
        }

        switch (foo) {
        case "foo":
        case "bar":
            a += 1;
            a += 2;
            break;
        }
    }
}
