//14.print all the ASCII character 0to127 ?
#include<stdio.h>
#include<conio.h>

void main()
{
int i;
printf("ASCII table (0 to 127)\n") ;
    for(i=0;i<128;i++)
    {
        if(i<32||i==127)
        printf("%3d\t non-printable\n",i);
        else
        printf("%3d\t%c\n",i,i);
    }
}

/*
OUTPUT:-
ASCII table (0 to 127)
  0     non-printable
  1     non-printable
  2     non-printable
  3     non-printable
  4     non-printable
  5     non-printable
  6     non-printable
  7     non-printable
  8     non-printable
  9     non-printable
 10     non-printable
 11     non-printable
 12     non-printable
 13     non-printable
 14     non-printable
 15     non-printable
 16     non-printable
 17     non-printable
 18     non-printable
 19     non-printable
 20     non-printable
 21     non-printable
 22     non-printable
 23     non-printable
 24     non-printable
 25     non-printable
 26     non-printable
 27     non-printable
 28     non-printable
 29     non-printable
 30     non-printable
 31     non-printable
 32      
 33     !
 34     "
 35     #
 36     $
 37     %
 38     &
 39     '
 40     (
 41     )
 42     *
 43     +
 44     ,
 45     -
 46     .
 47     /
 48     0
 49     1
 50     2
 51     3
 52     4
 53     5
 54     6
 55     7
 56     8
 57     9
 58     :
 59     ;
 60     <
 61     =
 62     >
 63     ?
 64     @
 65     A
 66     B
 67     C
 68     D
 69     E
 70     F
 71     G
 72     H
 73     I
 74     J
 75     K
 76     L
 77     M
 78     N
 79     O
 80     P
 81     Q
 82     R
 83     S
 84     T
 85     U
 86     V
 87     W
 88     X
 89     Y
 90     Z
 91     [
 92     \
 93     ]
 94     ^
 95     _
 96     `
 97     a
 98     b
 99     c
100     d
101     e
102     f
103     g
104     h
105     i
106     j
107     k
108     l
109     m
110     n
111     o
112     p
113     q
114     r
115     s
116     t
117     u
118     v
119     w
120     x
121     y
122     z
123     {
124     |
125     }
126     ~
127     non-printable

*/