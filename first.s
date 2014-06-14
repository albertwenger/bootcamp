/* -- first.s */
.global main
.func main

main:
	mov r1, #4
	mov r0, #0

add:
	add r0, r0, r1
	subs r1, r1, #1 /* sets the condition flag */
	bpl add		/* branch back to add as long as positive */	

	bx lr
  

