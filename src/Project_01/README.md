# Lectura de una imagen en OpenCv - C++

Para que pueda correr en tu maquina debes cambiar el directorio donde se encuentra tu imagen.
```
cv::Mat img_rgb = cv::imread(
		"/home/elizabeth/Documents/CG/Test01_Project/data/pucca.png"
		, cv::IMREAD_GRAYSCALE);
```

```
IMREAD_GRAYSCALE 
```
Si está configurado, siempre convierte la imagen a la imagen en escala de grises de un solo canal (conversión interna de códec).

Color Gris.
```
IMREAD_COLOR 
```
Si está configurado, siempre convierte la imagen a la imagen en color BGR de 3 canales.

A colores.

## Referencias

https://docs.opencv.org/4.6.0/d8/d6a/group__imgcodecs__flags.html#gga61d9b0126a3e57d9277ac48327799c80ae29981cfc153d3b0cef5c0daeedd2125