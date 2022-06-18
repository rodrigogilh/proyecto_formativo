
$regfile = "m328pdef.dat"
$crystal = 16000000


'SALIDAS
Ddrd.1 = 1 : Portd.1 = 0 : Led_1 Alias Portd.1
Ddrd.4 = 1 : Portd.4 = 0 : Led_2 Alias Portd.4
Ddrd.7 = 1 : Portd.7 = 0 : Led_3 Alias Portd.7

Wait 1

Do

    Led_1 = 1 : Waitms 300
    Led_2 = 1 : Waitms 300
    Led_3 = 1 : Waitms 300

    Led_3 = 0 : Waitms 300
    Led_2 = 0 : Waitms 300
    Led_1 = 0 : Waitms 300


    Led_1 = 1 : Led_2 = 1 : Led_3 = 1 : Waitms 100
    Led_1 = 0 : Led_2 = 0 : Led_3 = 0 : Waitms 100
    Led_1 = 1 : Led_2 = 1 : Led_3 = 1 : Waitms 100
    Led_1 = 0 : Led_2 = 0 : Led_3 = 0 : Waitms 100
    Led_1 = 1 : Led_2 = 1 : Led_3 = 1 : Waitms 100
    Led_1 = 0 : Led_2 = 0 : Led_3 = 0 : Waitms 100
    Led_1 = 1 : Led_2 = 1 : Led_3 = 1 : Waitms 100
    Led_1 = 0 : Led_2 = 0 : Led_3 = 0 : Waitms 100

Loop
