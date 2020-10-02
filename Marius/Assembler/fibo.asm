.data
.text
	li $t0, 1
	li $s0, 5	#$s0 hällt den counter. 5 mall
	li $t2, 4	#wir gehen in 4 schritten
	mul $t3, $s0, $t2	
	sub $sp, $sp, $t3	#mach platzt im keller für n * 4 elemente
	sw $t0, 0($sp)		#fib(0), fib(1) sind 1
	sw $t0, 4($sp)
	subi $s0, $s0, 1	#die ersten beiden sind nicht interesant
	#keller 5*4 tief, 0,4 = 1
	#$s0, ändert, $s1 bleibt
loop:
	lw $t0, 0($sp)		#ladde speicher fib(n-1) und
	lw $t1, 4($sp)		#fib(n-2)
	add $t2, $t0, $t1	#berechne fib(n), aktuelles n
	sw $t2, 8($sp)		#speicher fib(n)
	addi $sp, $sp, 4	#stack nächstes element
	subi $s0, $s0, 1	#counter reduzieren
	li $t0, 0
	bgt  $s0, $t0, loop
ausgabe:
	lw $t0, 0($sp)
	add $a0, $zero, $t0 
	li $v0, 1
	syscall
exit:
	li $v0, 10
	syscall