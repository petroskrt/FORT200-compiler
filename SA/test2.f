integer x(10,100,2),z(2),i,j, list k, N
logical ll,yy(10)
record integer i,j real a(10) record logical t,f endrec logic(10) endrec r
complex a(3)

! Global Scope
! ------------

data a/-(5.0:3.2),(0.0:-4.1),(5.9:0.0)/
character _str_(2,10)
data x/2000/,z/2,-9/,N/0H3FC70/
data ll/.false./,yy/.false.,.true.,.true./
data r/5,3,7.0,9.0,3.0,-2.0,0.0,-4.5,2.0,0.0,1.0,-3.0/
data _str_/"string1", "string2"/
$ no comment

! Label 100 is in global scope

100 yy(z) = .not. ll .and. .not. x(10,i,g(j)).gt.y(z) .or. z .eq. 0B11
call aa
k = [7,8,4,-2,0]

! Label 1000 is in global scope

1000 if (b(i,j+cadr(k)) .and. (x(i,j,g(i+j)) .gt. a(k**i))) stop
1001 continue
do i=1,x(10,g(y(i*j)+j),1),3

! Do Loop scope
! -------------

integer i1,j1,k1,m(100)

! Label 135 is in the do loop scope 

135 read (m(i1),((x(i1,j1,k1),i1=1,x(i,j,2)),j1=1,100),k1=1,N,2*m(i1)),z
if (yy(i)) goto 1000
r.a(x(r.j)+1) = -3.2
if (a.gt.0B.01.and.b(0,a*k**i).and.g(m(i)).lt.x(i,i+2,g(car(k)))) then

    ! If block scope within the do loop scope
    ! ---------------------------------------

   integer z,a(10)

   ! Label 101 is in the if block scope

   101 read z,a(z)
   z1 = NeW(z)

   ! Label 105 is in the if block scope

   105 if (z .gt. 0 .and. z .le. 6) goto z,(100,101,102,103,104,105)
else
   
   ! Else block scope within the do loop scope
   ! -----------------------------------------

   integer i logical l(1000)
   do i=1,N,2
      1000 l(i) = x(i,g(i),g(j)).le.a
   enddo
endif
102 call _try_me_(x(i,int(ll),z),m,r.logic(z).t)
103 if (y(g(y(z-2)))+a) 100,1000,1001
104 yy(m(i*Length(l))) = .not. x(i,j,z) .ge. i
enddo $ 1000 $
end

! Subroutine Scope (inside the '_try_me_' subroutine)
! ----------------------------------------------------

subroutine _try_me_(integer n,a(n), logical list l)
integer i

    ! Subroutine Scope
    ! ----------------

do i=1,n
   if (caddr(l) .and. a(i) .gt. 0) a(i) = a(i) - i
enddo
return
end

! Function Scope (inside the 'y' function)
! ----------------------------------------

real function y(integer n)
integer i,j 

! If block scope inside the function
! -----------------------------------

if (n .gt. 0) then y = n
else
   j = 0

   ! Do Loop Scope inside the function
   ! ----------------------------------

   do i=1,n+1,n/2
      j = j+i
   enddo
   y = j
endif
return
end

! Function Scope (inside the 'g' function)
! ----------------------------------------

list function g(integer i)

   ! Function Scope
   ! --------------

g = i**5
return
end

! Function Scope (inside the 'int' function)
! ------------------------------------------

integer function int(logical l)

    ! Function Scope
    ! --------------

if (l) then int = 1 else int = 0 endif
stop
end

! Subroutine Scope (inside the 'www' subroutine)
! ------------------------------------------------

subroutine www

    ! Subroutine Scope
    ! ----------------

write "Hello!"
return
end

! Subroutine Scope (inside the 'aa' subroutine)
! ----------------------------------------------


subroutine aa

     ! Subroutine Scope
     ! ----------------

call www
end

! Function Scope (inside the 'a' function)
! ----------------------------------------

integer function a(integer z)
integer i

! Function Scope
! --------------

read i
a = 0
if (b(i,z)) if (i) 100,200,300
300 return
200 write z
a = 1
end

! Function Scope (inside the 'b' function)
! ----------------------------------------
 
logical function b(integer n)

   ! Function Scope
   ! --------------
   
b = .false.
if (n.eq.0H100) b = .true.
end
