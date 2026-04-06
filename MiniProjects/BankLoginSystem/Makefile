App : loginForm.o ab_lp_pswdMngr.o
	g++ loginForm.o ab_lp_pswdMngr.o -o loginForm


loginForm.o : loginForm.cpp ab_lp_main.h
	g++ -c loginForm.cpp
	
ab_lp_pswdMngr.o : ab_lp_pswdMngr.cpp ab_lp_main.h
	g++ -c ab_lp_pswdMngr.cpp

clean :
	rm *.o loginForm 