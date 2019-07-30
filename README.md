# Pass By Reference

C and Fortran are quite old languages. Most modern languages exist in a function based paradigm. The idea is as follows: Given a function 𝑓(𝑥)=𝑦
, your programming functions should accept an input x and return an output 𝑦y.

In C and Fortran, this behavior is the exception, not the norm. Instead, it was quite common to provide the address of where the function should write its results. This is more of a subroutine based paradigm.

I wrote c\_add to to highlight these differences so that python programmers can better understand the behavior they see while using the ctypes module.

This code was created in conjunction with [this blog post](https://blog.hardinglabs.com/python-ctypes-to-sgp4.html).

# Code Explanation

The `add_fun` function behaves like a modern programming function. It has two inputs, it computes and returns an output.

The `add_ref` structure is very different. The memory addresses of the three numbers are passed to the function, then they are directly modified using the de-reference operator, `*`. 
