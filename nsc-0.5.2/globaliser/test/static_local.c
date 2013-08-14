void func()
{
    static int my_static_local;
}

void func2()
{
    static int my_init_static_local = 0;
}

void func3()
{
    int local_var;
    static char my_static_local_l = 'a';
}

void func4()
{
    static int multiple_static_locals = 0, msl2, msl3 = 10;

    msl2 = 500 / msl3;
}

void func5()
{
    static int my_static_local_l2;
    static char sam;
}

int var[1] = {0};

void func6()
{
    while (0) {
        static int var;

        var = 0;

        while (0) {
            int var;
            var = 1;
        }
        var = 2;
    }

    var[0] = 1;
}
