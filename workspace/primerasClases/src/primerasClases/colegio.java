package primerasClases;

public class colegio extends edificio {
	private boolean pabellon;
	private int numeroAulas;
	public colegio(String dirección, int codigoPostal, float altura,
			boolean calefaccionCentral) {
		super(dirección, codigoPostal, altura, calefaccionCentral);
		// TODO Auto-generated constructor stub
		
	
	}
	public int getcapacidadcolegio(){
		int capacidadColegio;
		capacidadColegio=numeroAulas*30;
		return(capacidadColegio);
	}

}
