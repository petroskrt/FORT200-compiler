integer x(g), z, i, j
list l

! Global Scope
! --------------

data x/5,-2,3/,z/.true./
record integer i,j real a(10) record logical t,f endrec logic(10) endrec r
complex a(3)

data a/-(5.0:3.2),(0.0:-4.1),(5.9:0.0)/
character _str_(2,10)
data _str_/"string1", "string2"/
$ no comment

! Function Scope (inside the 'y' function)
! ----------------------------------------

y(z) = .not. x .and. .not. x(0H10F,i,g(j)).gt.y .or. z .eq. k**3

! Label 100 is in global scope

100 call a

if (b .and. (x .gt. a(i**k))) stop

l = [8,9,0]

return

! Do Loop Scope
! --------------

do x=1,x(10,g(y+x)),3
  real a,i
  data i/.314159e-31/,b/5E2/

  ! Label 135 is in the do loop scope

  135 read (x,i=1,x(i)),z
  goto 1000

  if (a.gt.0B.01.and.b.lt.x(i+2.)) then
     integer z
     read z,a(z)
     goto z,(100,101,102,103,104,105)
  else
     logical l(x)
     data l/.false.,.true.,.true./

     ! Do loop scope within the else block

     do i=1,N,2
        l(i) = x(i+g(i)).le.r.logic(i).t
     enddo
  endif

end do

! Subroutine Scope (inside the '_try_me_' subroutine)
! ----------------------------------------------------

subroutine _try_me_(integer n,a(n))
  do i=1,n
     if (a(i) .gt. 0) a(i) = a(i) - i
  enddo
  return
end

! Global Scope
! --------------

if (y(g(y(z-2)))+a(1,cadr(l))) 100,1000,1001
y = .not. x(i)

enddo $ 1000 $

! End of the program
