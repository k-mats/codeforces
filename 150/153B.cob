       IDENTIFICATION DIVISION.
       PROGRAM-ID. SOLUTION.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 A        PIC 9(10)   VALUE ZEROES.
       01 B        PIC 9(10)   VALUE ZEROES.
       01 STR      PIC X(10).
       01 I        PIC 9(10).
       01 NISHINS.
               02 NISHIN OCCURS 30 PIC 9(10).
       01 WS-EDIT  PIC Z(0)9.
       01 FLAG     PIC 9(1) VALUE 0.
       01 FLAG2    PIC 9(1) VALUE 0.


       PROCEDURE DIVISION.
         ACCEPT STR
         MOVE STR TO A
         PERFORM VARYING I FROM 1 BY 1 UNTIL I > 30
	     DIVIDE A BY 2 GIVING A REMAINDER NISHIN(I)
	 END-PERFORM.
         PERFORM VARYING I FROM 30 BY -1 UNTIL I <= 0
             MOVE NISHIN(I) TO WS-EDIT
             IF WS-EDIt = 0
                 IF FLAG2 = 1
                     DISPLAY WS-EDIT WITH NO ADVANCING
                 END-IF
             ELSE
                 DISPLAY WS-EDIT WITH NO ADVANCING
                 IF FLAG2 = 0 
                     ADD 1 TO FLAG FLAG2
                 END-IF
             END-IF
         END-PERFORM.
         STOP RUN.
