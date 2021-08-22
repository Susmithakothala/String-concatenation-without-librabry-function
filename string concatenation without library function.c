# include < stdio .h >
# include < string .h >
main () {
char s1 [50] , s2 [30];
int i , j , len ;
printf ("\ nEnter String 1 :");
gets ( s1 );
printf ("\ nEnter String 2 :");
gets ( s2 );
for ( i =0; s1 [ i ] != ’\0 ’; i ++)
len ++;
for ( j = 0; s2 [ j ] != ’\0 ’; len ++ , j ++) {
s1 [ len ] = s2 [ j ];
}
s1 [ len ] = ’\0 ’;
printf (" concated string is :%s", s1 );
}