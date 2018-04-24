package primerasClases;

public class edificio {
	private String dirección;
	private int codigoPostal;
	private float altura;
	private boolean calefaccionCentral;
	public edificio(String dirección, int codigoPostal, float altura,
			boolean calefaccionCentral) {
		super();
		this.dirección = dirección;
		this.codigoPostal = codigoPostal;
		this.altura = altura;
		this.calefaccionCentral = calefaccionCentral;
	}
	public String getDirección() {
		return dirección;
	}
	public void setDirección(String dirección) {
		this.dirección = dirección;
	}
	public int getCodigoPostal() {
		return codigoPostal;
	}
	public void setCodigoPostal(int codigoPostal) {
		this.codigoPostal = codigoPostal;
	}
	public float getAltura() {
		return altura;
	}
	public void setAltura(float altura) {
		this.altura = altura;
	}
	public boolean isCalefaccionCentral() {
		return calefaccionCentral;
	}
	public void setCalefaccionCentral(boolean calefaccionCentral) {
		this.calefaccionCentral = calefaccionCentral;
	}
	
}
