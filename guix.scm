(define-module (proot)
  #:use-module (gnu packages linux)
  #:use-module (guix git-download)
  #:use-module (guix))

(define source-checkout
  (let ((vcs-file? (or (git-predicate
                        (current-source-directory))
                       (const #t))))
    (local-file "." "proot-checkout"
                #:recursive? #t
                #:select? vcs-file?)))


(define-public this-proot
  (package
    (inherit proot)
    (name "proot")
    (source source-checkout)))
this-proot
