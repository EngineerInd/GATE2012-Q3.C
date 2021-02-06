Line 1 is replaced by “auto int a = 1;”
Line 2 is replaced by “register int a = 2;”
(A) 3 1
4 1
4 2
(B) 4 2
6 1
6 1
(C) 4 2
6 2
2 0
(D) 4 2
4 2
2 0

Answer (D)
If we replace line 1 by “auto int a = 1;” and line 2 by “register int a = 2;”, then ‘a’ becomes non-static in prtFun(). The output of first prtFun() remains same. But, the output of second prtFun() call is changed as a new instance of ‘a’ is created in second call. So “4 2” is printed again. Finally, the printf() in main will print “2 0”. Making ‘a’ a register variable won’t change anything in output.

Please see GATE Corner for all previous year paper/solutions/explanations, syllabus, important dates, notes, etc.

Please write comments if you find any of the answers/explanations incorrect, or you want to share more information about the topics discussed above.
