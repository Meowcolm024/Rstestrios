#lang racket

(printf "I'm Racket. Nice to meet you!\n")

(define hello
  (lambda (name)
    (string-append "Hello " name)))

(define (goodbye name)
    (string-append "Goodbye " name))

(println (hello "World"))

(goodbye "World")
