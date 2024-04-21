(defpackage :hello-world
  (:use :cl)
  (:export :hello))

(in-package :hello-world)

(defun hello () "Hello, World!")

;; how can i print the string "Hello, World!" to the console?
;; (format t "Hello, World!")

(format t (hello))