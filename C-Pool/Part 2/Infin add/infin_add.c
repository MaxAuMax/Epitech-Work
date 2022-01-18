/*
** EPITECH PROJECT, 2021
** Epitech
** File description:
** infin_add.c
*/

void topr(t_num *nb1, t_num *nb2)
{
    nb1->value++;

    if (my_strlen(nb1->value) == my_strlen(nb2->value)){
        if(my_strcmp(nb1->value, nb2->value) < 0) {
            char *c;
                
            c = nb1->value;
            nb1->value = nb2->value;
            nb2->value = c ;
        }
        else if(my_strcmp(nb1->value, nb2->value) > 0) 
            my_putchar('-');
    }
    else if(my_strlen(nb1->value) < my_strlen(nb2->value)) {
        char *c;
        
        c = nb1->value;
        nb1->value = nb2->value;
        nb2->value = c ;           
    }
    else
        my_putchar('-');
    nb1->len = my_strlen(nb1->value) - 1;
    nb2->len = my_strlen(nb2->value) - 1;
}       
    
void top1(t_num *nb1, t_num *nb2)
{
    if(my_strlen(nb2->value) > my_strlen(nb1->value)) {
        char *c;
            
        c = nb1->value;
        nb1->value = nb2->value;
        nb2->value = c ;
    }
    nb1->len = my_strlen(nb1->value) - 1;
    nb2->len = my_strlen(nb2->value) - 1;
}
        
char *add_inf(t_num *nb1, t_num *nb2)
{    
    int i = 0, j = 0, ret = 0;
    char *res;
            
    res = malloc(nb1->len + 3);
    my_memset(res, '\0', nb1->len +3);

    while (i <= nb1->len) {
        if (i <= nb2->len)
            res[j] = nb1->value[nb1->len - i]
                + nb2->value[nb2->len -i] - '0' + ret;
        else
            res[j] = nb1->value[nb1->len -i] + ret;
        if (res[j] >= 10 + '0') {
            ret = 1;
            res[j] = res[j] - 10;
        } else
            ret = 0;
        i++;
        j++;
    }

    if (ret != 0)
        res[j] = '0' + ret;
    return (my_revstr(res));
}
    
char *sub_inf(t_num *nb1, t_num *nb2)
{
    int i = 0, j = 0, ret = 0;
    char *res;

    res = malloc(nb1->len + 3);
    my_memset(res, '\0', nb1->len +3);

    while (i <= nb1->len - 1) {
        if (i <= nb2->len - 1)
            res[j] = nb1->value[nb1->len - i]
                + nb2->value[nb2->len -i] - '0' + ret;
        else
            res[j] = nb1->value[nb1->len -i] + ret;
        if (res[j] >= 10 + '0') {
            ret = 1;
            res[j] = res[j] - 10;
        } else
            ret = 0;
        i++;
        j++;
    }

    if (ret != 0)
        res[j] = '0' + ret;
    return (my_revstr(res));
}

char *sub_inf2(t_num *nb1, t_num *nb2)
{
    int i = 0, j = 0, ret = 0, count = 0;
    char *res;

    res = malloc(nb1->len + 3);
    my_memset(res, '\0', nb1->len +3);
    while (i <= nb1->len) {
        if (i <= nb2->len)
            res[j] = nb1->value[nb1->len - i]
                - nb2->value[nb2->len -i] + '0' + ret;
        else
            res[j] = nb1->value[nb1->len -i] + ret;
        if (res[j] < '0') {
            ret = - 1;
            res[j] = res[j] + 10;
        } else
            ret = 0;
        i++;
        j++;
    }
    my_revstr(res);
    
    if (res[0] == '0') {
        while (res[count] == '0') {
            count++;
            if (res[count] == '\0')
                return "0";
        }
        return (&res[count]);
        }
    return (res);
}

