void nowadata(int dni)
{
     time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    if (dni<=28)
    {
        printf("Nowa data: %i-%02i-%02i\n",tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday + dni);
    }
    if (dni>28 && dni<59)
    {
        printf("Nowa data: %i-%02i-%02i\n",tm.tm_year + 1901, tm.tm_mon -10,tm.tm_mday+dni-31);
    }
}

int main()
{
    int dni;
    printf("Podaj liczbę dni o ile chcesz się przenieść w czasie:\n");
    scanf("%i",&dni);

    nowadata(dni);

}

