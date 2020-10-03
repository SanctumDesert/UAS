.data
	con1: .float 1
	con2: .float 2
	con3: .float 0.5
	k: .float 3	#wurzel aus 3
	wurzelResult: .float 42.0
	leufe: .word 5
	p: .float 6
	q: .float 5
	inf0: .asciiz "ausgabe 1 : "
	info1: .asciiz " ausgabe 2 : "
	info2: .asciiz " keine i´s !"
	info3: .asciiz "Biite p eingeben "
	info4: .asciiz "Biite q eingeben "
.text
#f$5-$f10 = static
einlesen:
	la $a0, info3
	li $v0, 4
	syscall
	li $v0, 6	# p einlesen
	syscall
	mov.s $f1, $f0
	
	la $a0, info4
	li $v0, 4
	syscall
	li $v0, 6	# q einlesen
	syscall
	mov.s $f6, $f0

main:
	l.s $f2, con2
	
	div.s $f5, $f1, $f2 	#p/2
	mul.s $f1, $f5, $f5	# (p/2)^2
	sub.s $f1, $f1, $f6
	s.s $f1, k
	
	jal wurzel
	l.s $f1, wurzelResult
	
	la $a0, inf0
	li $v0, 4
	syscall
	
	neg.s $f1, $f5
	add.s $f12, $f1, $f0
	li $v0, 2
	syscall
	
	la $a0, info1
	li $v0, 4
	syscall
	
	sub.s $f12, $f1, $f0,
	li $v0, 2
	syscall
	
	
	j exit
wurzel:
	lw $s0, leufe	#durchleufe
	l.s $f0, con1
	l.s $f1, con2
	l.s $f2, k
	
	#wenn eine negative zahl eingegeben wird, wird die wurzel abgebrochen
	mfc1 $t0, $f2
	li $t1, 0
	blt $t0, $t1, negativValue
	
	add.s $f4, $f2, $f0	#k + 1 -> $f2
	div.s $f0, $f4, $f1	# $f0 -> x0
	#$f0 = xi-1	$f1 = xi  $f2 = k
	subi $s0, $s0, 1	#counter 1 runter
heron:
	div.s $f3, $f2, $f0	# k/xi-1 ->$f3
	add.s $f3, $f3, $f0	# (k/xi-1) + xi-1 -> $f3
	l.s $f4, con3
	mul.s $f1, $f4, $f3	# 1/2 * (k/xi-1) -> $f1
	mov.s $f0, $f1		
	subi $s0, $s0, 1
	li $t0, 0
	bgt $s0, $t0, heron
	s.s $f1, wurzelResult
	jr $ra
	
negativValue:
	la $a0, info2
	li $v0, 4
	syscall
	j exit
exit:
	li $v0, 10
	syscall