// TODO: include this again, use it to test not adding undefined references
//extern int sam[];

extern int bob[];

int bob[10];

void some_func() {
    bob[1] = 2;
}

int main() { return 0; }
