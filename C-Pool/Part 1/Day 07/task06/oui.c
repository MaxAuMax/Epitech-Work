int main(int argc, char **argv)
{
    int i = 1;
    int res;

    my_putchar(argv[0]);

    while (i < argc) {
        if (argv[i][0] < argv[i + 1][0]) {
            res = argv[i][0];
            i++;
        } else {
            res = argv[i + 1][0];
            i++;
        }
    }
    return (res);
}
