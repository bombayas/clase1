
public class manejaMascota {

	public static void main(String[] args) {
		Mascota cuqui;
		cuqui=new Mascota("cuqui",3,"perro",'h'); //nombre a�os tipo hembra
		System.out.println("Mi mascota se llama "+cuqui.getnombre());
		System.out.println("y tiene "+cuqui.getEdad()+ "a�os");
		System.out.println("ahora tiene "+cuqui.getEdad());
		System.out.println("por lo tanto naci� en el a�o "+cuqui.getAnioNacimiento(2018));

	}

}
