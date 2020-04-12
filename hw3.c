{\rtf1\ansi\ansicpg1251\cocoartf1671\cocoasubrtf400
{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;\f1\fnil\fcharset0 Menlo-Bold;}
{\colortbl;\red255\green255\blue255;\red109\green111\blue5;\red15\green112\blue3;\red0\green0\blue109;
\red14\green110\blue109;\red82\green0\blue103;\red41\green15\blue109;\red0\green0\blue254;\red25\green68\blue35;
}
{\*\expandedcolortbl;;\csgenericrgb\c42745\c43529\c1961;\csgenericrgb\c5882\c43922\c1176;\csgenericrgb\c0\c0\c42745;
\csgenericrgb\c5490\c43137\c42745;\csgenericrgb\c32157\c0\c40392;\csgenericrgb\c16078\c5882\c42745;\csgenericrgb\c0\c0\c99608;\csgenericrgb\c9804\c26667\c13725;
}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs26 \cf2 #include 
\f1\b \cf3 <stdio.h>\

\f0\b0 \cf2 #include 
\f1\b \cf3 <stdlib.h>\

\f0\b0 \cf2 #include 
\f1\b \cf3 <locale.h>\
\
\cf4 typedef struct 
\f0\b0 \cf5 Node\cf0 \{\
	
\f1\b \cf4 char 
\f0\b0 \cf0 *\cf6 name\cf0 ;\
	
\f1\b \cf4 struct 
\f0\b0 \cf5 Node \cf0 *\cf6 next\cf0 ;\
	
\f1\b \cf4 struct 
\f0\b0 \cf5 Node \cf0 *\cf6 prev\cf0 ;\
\}\cf7 Node\cf0 ;\
\
\cf7 Node\cf0 * push(\cf7 Node \cf0 *last)\{\
    \cf7 Node \cf0 *a = (\cf7 Node\cf0 *)malloc(
\f1\b \cf4 sizeof
\f0\b0 \cf0 (\cf7 Node\cf0 ));\
    
\f1\b \cf4 char 
\f0\b0 \cf0 element[\cf8 10\cf0 ];\
\
    scanf(
\f1\b \cf3 "%s"
\f0\b0 \cf0 , element);\
\
    a->\cf6 name \cf0 = strdup(element);\
    a->\cf6 next \cf0 = 
\f1\b \cf9 NULL
\f0\b0 \cf0 ;\
\
\
    
\f1\b \cf4 return 
\f0\b0 \cf0 a;\
\}\
\
\cf7 Node \cf0 *getLast (\cf7 Node \cf0 *last) \{\
    \cf7 Node \cf0 *p;\
    \cf7 Node \cf0 *a = (\cf7 Node\cf0 *)malloc(
\f1\b \cf4 sizeof
\f0\b0 \cf0 (\cf7 Node\cf0 ));\
    
\f1\b \cf4 char 
\f0\b0 \cf0 element[\cf8 10\cf0 ];\
\
\
    
\f1\b \cf4 if
\f0\b0 \cf0 (last!=
\f1\b \cf9 NULL
\f0\b0 \cf0 )\{\
        printf(
\f1\b \cf3 "\uc0\u1042 \u1074 \u1077 \u1076 \u1080 \u1090 \u1077  \u1101 \u1083 \u1077 \u1084 \u1077 \u1085 \u1090 : "
\f0\b0 \cf0 );\
        scanf(
\f1\b \cf3 "%s"
\f0\b0 \cf0 , element);\
\
        p = last->\cf6 next\cf0 ;\
        last->\cf6 next \cf0 = a;\
        a->\cf6 name \cf0 = strdup(element);\
        a->\cf6 next \cf0 = p;\
\
        
\f1\b \cf4 return 
\f0\b0 \cf0 a;\
    \}\
    
\f1\b \cf4 else
\f0\b0 \cf0 \{\
        printf(
\f1\b \cf3 "\cf4 \\n\cf3 \uc0\u1054 \u1096 \u1080 \u1073 \u1086 \u1095 \u1082 \u1072 \cf4 \\n\cf3 "
\f0\b0 \cf0 );\
    \}\
\
    
\f1\b \cf4 return 
\f0\b0 \cf0 a;\
\
\
\}\
\
\cf7 Node\cf0 * popBack(\cf7 Node \cf0 *last, \cf7 Node \cf0 *start)\{\
    \cf7 Node \cf0 *temp;\
    temp = start;\
\
    
\f1\b \cf4 if
\f0\b0 \cf0 (last!=
\f1\b \cf9 NULL
\f0\b0 \cf0 )\{\
        
\f1\b \cf4 while
\f0\b0 \cf0 (temp->\cf6 next \cf0 != last)\{\
        temp = temp->\cf6 next\cf0 ;\
        \}\
        temp->\cf6 next \cf0 = last->\cf6 next\cf0 ;\
        free(last);\
        printf(
\f1\b \cf3 "\cf4 \\n\cf3 \uc0\u1059 \u1076 \u1072 \u1083 \u1077 \u1085 \u1086 \cf4 \\n\cf3 "
\f0\b0 \cf0 );\
\
    \}\
    
\f1\b \cf4 else
\f0\b0 \cf0 \{\
        printf(
\f1\b \cf3 "\cf4 \\n\cf3 \uc0\u1054 \u1096 \u1080 \u1073 \u1086 \u1095 \u1082 \u1072 !\cf4 \\n\cf3 "
\f0\b0 \cf0 );\
    \}\
\}\
\

\f1\b \cf4 void 
\f0\b0 \cf0 display(\cf7 Node \cf0 *start)\{\
    \cf7 Node \cf0 *a = start;\
    
\f1\b \cf4 for 
\f0\b0 \cf0 ( ; a != 
\f1\b \cf9 NULL
\f0\b0 \cf0 ; a=a->\cf6 next\cf0 )\{\
        printf(
\f1\b \cf3 "%s, "
\f0\b0 \cf0 , a->\cf6 name\cf0 );\
    \}\
\}\
\
\
\cf7 Node\cf0 * deleteList(\cf7 Node\cf0 * start)\{\
    \cf7 Node\cf0 * temp, *tmp;\
    temp = start;\
\
    
\f1\b \cf4 while
\f0\b0 \cf0 (temp!=
\f1\b \cf9 NULL
\f0\b0 \cf0 )\{\
        tmp = temp->\cf6 next\cf0 ;\
        free(temp);\
        temp = tmp;\
    \}\
    start = 
\f1\b \cf9 NULL
\f0\b0 \cf0 ;\
\}\
\
\
\
\cf7 Node\cf0 * element_searching(\cf7 Node \cf0 *start, 
\f1\b \cf4 char 
\f0\b0 \cf0 *name)\{\
    \cf7 Node\cf0 * temp;\
    temp = start;\
\
    
\f1\b \cf4 for
\f0\b0 \cf0 ( ; temp!=
\f1\b \cf9 NULL
\f0\b0 \cf0 ; temp=temp->\cf6 next\cf0 )\{\
        
\f1\b \cf4 if
\f0\b0 \cf0 (strcmp(temp->\cf6 name\cf0 , name) == \cf8 0\cf0 )\{\
            
\f1\b \cf4 return 
\f0\b0 \cf0 temp;\
            
\f1\b \cf4 break
\f0\b0 \cf0 ;\
        \}\
        temp = temp->\cf6 next\cf0 ;\
    \}\
    
\f1\b \cf4 return \cf9 NULL
\f0\b0 \cf0 ;\
\}\
\
\

\f1\b \cf4 int 
\f0\b0 \cf0 main()\{\
    setlocale(
\f1\b \cf9 LC_ALL
\f0\b0 \cf0 , 
\f1\b \cf3 ""
\f0\b0 \cf0 );\
\
    
\f1\b \cf4 int 
\f0\b0 \cf0 n, count=\cf8 0\cf0 ;\
    \cf7 Node \cf0 *start = 
\f1\b \cf9 NULL
\f0\b0 \cf0 ;\
    \cf7 Node \cf0 *last = 
\f1\b \cf9 NULL
\f0\b0 \cf0 ;\
    \cf7 Node \cf0 *a = 
\f1\b \cf9 NULL
\f0\b0 \cf0 ;\
    
\f1\b \cf4 char 
\f0\b0 \cf0 elements[\cf8 20\cf0 ];\
    \cf7 Node\cf0 * temp = 
\f1\b \cf9 NULL
\f0\b0 \cf0 ;\
\
\
    
\f1\b \cf4 while
\f0\b0 \cf0 (\cf8 1\cf0 )\{\
        printf(
\f1\b \cf3 "\cf4 \\n\cf3 "
\f0\b0 \cf0 );\
        printf(
\f1\b \cf3 "1)\uc0\u1057 \u1086 \u1079 \u1076 \u1072 \u1090 \u1100  \u1087 \u1077 \u1088 \u1074 \u1099 \u1081  \u1101 \u1083 \u1077 \u1084 \u1077 \u1085 \u1090  \u1086 \u1076 \u1085 \u1086 \u1089 \u1074 \u1103 \u1079 \u1085 \u1086 \u1075 \u1086  \u1089 \u1087 \u1080 \u1089 \u1082 \u1072 \cf4 \\n\cf3 "
\f0\b0 \cf0 );\
        printf(
\f1\b \cf3 "2)\uc0\u1044 \u1086 \u1073 \u1072 \u1074 \u1080 \u1090 \u1100  \u1101 \u1083 \u1077 \u1084 \u1077 \u1085 \u1090  \u1074  \u1082 \u1086 \u1085 \u1077 \u1094  \u1086 \u1076 \u1085 \u1086 \u1089 \u1074 \u1103 \u1079 \u1085 \u1086 \u1075 \u1086  \u1089 \u1087 \u1080 \u1089 \u1082 \u1072 \cf4 \\n\cf3 "
\f0\b0 \cf0 );\
        printf(
\f1\b \cf3 "3)\uc0\u1059 \u1076 \u1072 \u1083 \u1080 \u1090 \u1100  \u1101 \u1083 \u1077 \u1084 \u1077 \u1085 \u1090  \u1089  \u1082 \u1086 \u1085 \u1094 \u1072  \u1086 \u1076 \u1085 \u1086 \u1089 \u1074 \u1103 \u1079 \u1085 \u1086 \u1075 \u1086  \u1089 \u1087 \u1080 \u1089 \u1082 \u1072 \cf4 \\n\cf3 "
\f0\b0 \cf0 );\
        printf(
\f1\b \cf3 "4)\uc0\u1055 \u1088 \u1086 \u1089 \u1084 \u1086 \u1090 \u1088 \u1077 \u1090 \u1100  \u1086 \u1076 \u1085 \u1086 \u1089 \u1074 \u1103 \u1079 \u1085 \u1099 \u1081  \u1089 \u1087 \u1080 \u1089 \u1086 \u1082 \cf4 \\n\cf3 "
\f0\b0 \cf0 );\
        printf(
\f1\b \cf3 "5)\uc0\u1059 \u1076 \u1072 \u1083 \u1080 \u1090 \u1100  \u1074 \u1077 \u1089 \u1100  \u1086 \u1076 \u1085 \u1086 \u1089 \u1074 \u1103 \u1079 \u1085 \u1099 \u1081  \u1089 \u1087 \u1080 \u1089 \u1086 \u1082 \cf4 \\n\cf3 "
\f0\b0 \cf0 );\
        printf(
\f1\b \cf3 "6)\uc0\u1042 \u1099 \u1087 \u1086 \u1083 \u1085 \u1080 \u1090 \u1100  \u1087 \u1086 \u1089 \u1083 \u1077 \u1076 \u1086 \u1074 \u1072 \u1090 \u1077 \u1083 \u1100 \u1085 \u1099 \u1081  \u1087 \u1086 \u1080 \u1089 \u1082  \u1079 \u1072 \u1076 \u1072 \u1085 \u1085 \u1086 \u1075 \u1086  \u1101 \u1083 \u1077 \u1084 \u1077 \u1085 \u1090 \u1072  \u1074  \u1086 \u1076 \u1085 \u1086 \u1089 \u1074 \u1103 \u1079 \u1085 \u1086 \u1084  \u1089 \u1087 \u1080 \u1089 \u1082 \u1077 \cf4 \\n\cf3 "
\f0\b0 \cf0 );\
        printf(
\f1\b \cf3 "7)\uc0\u1042 \u1099 \u1081 \u1090 \u1080  \u1080 \u1079  \u1087 \u1088 \u1086 \u1075 \u1088 \u1072 \u1084 \u1084 \u1099 \cf4 \\n\cf3 "
\f0\b0 \cf0 );\
        printf(
\f1\b \cf3 "\cf4 \\n\cf3 "
\f0\b0 \cf0 );\
\
        printf(
\f1\b \cf3 "\uc0\u1042 \u1074 \u1077 \u1076 \u1080 \u1090 \u1077  \u1085 \u1091 \u1078 \u1085 \u1091 \u1102  \u1082 \u1086 \u1084 \u1072 \u1085 \u1076 \u1091 : \cf4 \\n\cf3 "
\f0\b0 \cf0 );\
\
        scanf(
\f1\b \cf3 "%d"
\f0\b0 \cf0 , &n);\
\
\
        
\f1\b \cf4 switch
\f0\b0 \cf0 (n)\{\
        
\f1\b \cf4 case 
\f0\b0 \cf8 1\cf0 :\
            printf(
\f1\b \cf3 "\uc0\u1042 \u1074 \u1077 \u1076 \u1080 \u1090 \u1077  \u1101 \u1083 \u1077 \u1084 \u1077 \u1085 \u1090 : "
\f0\b0 \cf0 );\
\
            a = push(last);\
            
\f1\b \cf4 if 
\f0\b0 \cf0 (count>=\cf8 1\cf0 )\{\
                last = a;\
                count++;\
                printf(
\f1\b \cf3 "\uc0\u1057 \u1076 \u1077 \u1083 \u1072 \u1085 \u1086 ! \cf4 \\n\cf3 "
\f0\b0 \cf0 );\
            \}\
            
\f1\b \cf4 else 
\f0\b0 \cf0 \{\
                start = a;\
                last = a;\
                count++;\
                printf(
\f1\b \cf3 "\uc0\u1057 \u1076 \u1077 \u1083 \u1072 \u1085 \u1086 ! \cf4 \\n\cf3 "
\f0\b0 \cf0 );\
            \}\
            
\f1\b \cf4 break
\f0\b0 \cf0 ;\
\
\
        
\f1\b \cf4 case 
\f0\b0 \cf8 2\cf0 :\
\
            a = getLast(last);\
            last = a;\
            printf(
\f1\b \cf3 "\uc0\u1057 \u1076 \u1077 \u1083 \u1072 \u1085 \u1086 ! \cf4 \\n\cf3 "
\f0\b0 \cf0 );\
            
\f1\b \cf4 break
\f0\b0 \cf0 ;\
\
        
\f1\b \cf4 case 
\f0\b0 \cf8 3\cf0 :\
            a = popBack(last, start);\
            printf(
\f1\b \cf3 "\uc0\u1057 \u1076 \u1077 \u1083 \u1072 \u1085 \u1086 ! \cf4 \\n\cf3 "
\f0\b0 \cf0 );\
            
\f1\b \cf4 break
\f0\b0 \cf0 ;\
\
\
        
\f1\b \cf4 case 
\f0\b0 \cf8 4\cf0 :\
            
\f1\b \cf4 if
\f0\b0 \cf0 (start -> \cf6 name \cf0 != 
\f1\b \cf9 NULL
\f0\b0 \cf0 )\{\
                display(start);\
            \}\
            printf(
\f1\b \cf3 "\uc0\u1057 \u1076 \u1077 \u1083 \u1072 \u1085 \u1086 ! \cf4 \\n\cf3 "
\f0\b0 \cf0 );\
            
\f1\b \cf4 break
\f0\b0 \cf0 ;\
\
\
        
\f1\b \cf4 case 
\f0\b0 \cf8 5\cf0 :\
            a = deleteList(start);\
            last = 
\f1\b \cf9 NULL
\f0\b0 \cf0 ;\
            printf(
\f1\b \cf3 "\uc0\u1057 \u1076 \u1077 \u1083 \u1072 \u1085 \u1086 ! \cf4 \\n\cf3 "
\f0\b0 \cf0 );\
            
\f1\b \cf4 break
\f0\b0 \cf0 ;\
\
\
        
\f1\b \cf4 case 
\f0\b0 \cf8 6\cf0 :\
\
\
            printf(
\f1\b \cf3 "\uc0\u1042 \u1074 \u1077 \u1076 \u1080 \u1090 \u1077  \u1101 \u1083 \u1077 \u1084 \u1077 \u1085 \u1090 :\cf4 \\n\cf3  "
\f0\b0 \cf0 );\
            scanf(
\f1\b \cf3 "%s"
\f0\b0 \cf0 , elements);\
            temp = element_searching(start, elements);\
            
\f1\b \cf4 if
\f0\b0 \cf0 (temp!=
\f1\b \cf9 NULL
\f0\b0 \cf0 )\{\
                printf(
\f1\b \cf3 "%s\cf4 \\n\cf3 "
\f0\b0 \cf0 , temp->\cf6 name\cf0 );\
            \}\
            
\f1\b \cf4 else
\f0\b0 \cf0 \{\
                printf(
\f1\b \cf3 "\uc0\u1069 \u1083 \u1077 \u1084 \u1077 \u1085 \u1090  \u1085 \u1077  \u1085 \u1072 \u1081 \u1076 \u1077 \u1085 :("
\f0\b0 \cf0 );\
            \}\
            
\f1\b \cf4 break
\f0\b0 \cf0 ;\
\
\
\
        
\f1\b \cf4 case 
\f0\b0 \cf8 7\cf0 :\
            printf(
\f1\b \cf3 "\uc0\u1044 \u1086  \u1089 \u1074 \u1080 \u1076 \u1072 \u1085 \u1080 \u1103 !"
\f0\b0 \cf0 );\
            
\f1\b \cf4 break
\f0\b0 \cf0 ;\
\
\
    \}\
    \}\
    
\f1\b \cf4 return 
\f0\b0 \cf8 0\cf0 ;\
\
\}\
}