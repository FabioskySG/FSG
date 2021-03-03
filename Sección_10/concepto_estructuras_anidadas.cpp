/* Una estructura anidada es una estructura dentro de otra. EJ;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
};

Ahora dentro de dir_empleado tendremos la direccion, la ciudad y la provincia */