# my_ls

You must recode the ls [-lRdrt] [FILE] command.
Options can be given in either order:

    • ./my_ls -l -t
    • ./my_ls -lRt
    • ./my_ls -lt -R -t

It must be possible to pass a list of files/folders as parameters:

    • /my_ls -l /dev /usr/sbin
    • ./my_ls -l -r file1 file2

As a bonus, you could also handle others options, such as -uFgf.
