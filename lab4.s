.section .text
.global find_sum            # initialize function

#Call function
find_sum:
    xor %eax, %eax              # initialize return
    xor %ecx, %ecx              # intialize count

#Loop function
num_loop:
    cmp %rsi, %rcx              # if count reached, end loop
    jge done

    mov (%rdi, %rcx, 4), %ebx   # move int at index to base

    add %ebx, %eax              # add int to find_sum

    inc %ecx                    # increment count
    jmp num_loop                # reset loop

#End function
done:
    ret

.section .note.GNU-stack,"",@progbits

