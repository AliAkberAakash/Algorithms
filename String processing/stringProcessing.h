#ifndef STRINGPROCESSING_H_INCLUDED
#define STRINGPROCESSING_H_INCLUDED

int length(char t[])
{
    int i=0;
    while(t[i]!='\0')
    i++;

    return i;
}

int index(char t[], char p[])
{
    int i,j=0;
    int m=length(t), n=length(p);
    for(i=0; i<m-n+1; i++)
    {
        if(j>=n)
        break;

        if(p[j]==t[i])
            j++;
        else
        j=0;
    }

    if(j>=n)
        return i-j+1;
    else
        return 0;
}




#endif // STRINGPROCESSING_H_INCLUDED
