TITLE Project

; Author: Angela
; Date: 30 June 2025

include Irvine32.inc
.data
welcomeMsg BYTE "Welcome to CPU Benchmark Program", 0dh, 0ah, 0
explainMsg BYTE "Benchmark CPU time Using Equation y = 4*x^3 + 10*x^2 + 23*x + 24", 0dh, 0ah, \
				"		 (with delay coef1, coef2, coef3, coef4 = 4, 10, 23, 24 msec)", 0dh, 0ah, 0
inputMsg BYTE "Enter Number of Looping (N) = ", 0
progressMsg BYTE "CPU time Stress Test in progress...", 0dh, 0ah, 0
resultMsg BYTE "Result: ", 0dh, 0ah, 0
first_msecMsg BYTE "First Capture Execution time in millisecond: ", 0
second_msecMsg BYTE "Second Capture Execution time in millisecond: ", 0
differenceMsg BYTE "Different Execution time in millisecond: ", 0
sumMsg BYTE "Value of Sum from the Stress Test (polymonial) = ", 0
anotherMsg BYTE "Press 'y' to continue or 'n' to exit the benchmark : ", 0

coef1 DWORD 4
coef2 DWORD 10
coef3 DWORD 23
coef4 DWORD 24

sum DWORD 0
max_loop DWORD ?
x DWORD ?
y DWORD ?
first_msec DWORD ?
second_msec DWORD ?
diff_time DWORD ?

.code
	main proc
	MainMenu :
		call Clrscr
		mov edx, OFFSET welcomeMsg
		call WriteString
		call Crlf

		mov edx, OFFSET explainMsg
		call WriteString
		call Crlf

		mov edx, OFFSET inputMsg
		call WriteString
		call ReadDec
		mov max_loop, eax

		mov edx, OFFSET progressMsg
		call WriteString
		call Crlf

		call GetMseconds
		mov first_msec, eax

		mov ecx, max_loop
		mov x, 1
		mov sum, 0

	Benchmark_loop:
		; x^2
		mov eax, x
		mul eax
		mov ebx, eax

		; b*x^2
		mov eax, coef2
		mul ebx
		mov y, eax
		mov eax, coef2
		call Delay

		; x^3
		mov eax, ebx
		mul x
		mov ebx, eax

		; a*x^3
		mov eax, coef1
		mul ebx
		add y, eax
		mov eax, coef1
		call Delay

		; c*x
		mov eax, coef3
		mul x
		add y, eax
		mov eax, coef3
		call Delay

		; d
		mov eax, coef4
		add y, eax
		mov eax, coef4
		call Delay

		mov eax, y
		add sum, eax

		inc x
		dec ecx
		jnz Benchmark_loop

		call GetMseconds
		mov second_msec, eax
		
		; Display Results
		mov edx, OFFSET resultMsg
		call WriteString
		call Crlf

		mov edx, OFFSET first_msecMsg
		call WriteString
		mov eax, first_msec
		call WriteDec
		call Crlf

		mov edx, OFFSET second_msecMsg
		call WriteString
		mov eax, second_msec
		call WriteDec
		call Crlf

		; Calculate time difference
		sub eax, first_msec
		mov diff_time, eax
		mov edx, OFFSET differenceMsg
		call WriteString
		call WriteDec
		call Crlf

		mov edx, OFFSET sumMsg
		call WriteString
		mov eax, sum
		call WriteDec
		call Crlf
		call Crlf

		jmp Another_loop

	Another_loop :
		mov edx, OFFSET anotherMsg
		call WriteString
		call ReadChar
		call WriteChar
		call Crlf
		call Crlf

		cmp al, 'Y'
		je MainMenu
		cmp al, 'y'
		je MainMenu

	exit
	main ENDP

END main