App : loginForm.o ab_lp_pswdMngr.o
	g++ loginForm.o ab_lp_pswdMngr.o -o BankLoginSystem

loginForm.o : loginForm.cpp
	g++ -c loginForm.cpp

ab_lp_pswdMngr.o : ab_lp_pswdMngr.cpp
	g++ -c ab_lp_pswdMngr.cpp

clean :
	rm -rf *.o loginForm