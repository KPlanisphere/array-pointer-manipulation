float mitad(int);
int main(){
	float x, mitad();
	printf("el valor de x antes de enviarse %3.4f\n",x);
	x = mitad();
	printf("El valor de x sin parametros %3.4f \n",x);
	x = mitad(2,5);
	printf("El valor de x con dos parametros %3,4f \n",x);
	x = mitad(7);
	printf("El valr de x con un parametro %3.4f \n",x);
	x = mitad(x);
	printf("El valor de x con el mismo parametro %3.4f \n",x);
}
	
float mitad(int num){
		return (num/2.5);
}
