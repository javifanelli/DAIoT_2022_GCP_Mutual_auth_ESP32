/*
 * pemkey.h
 *
 *  Created on: Jul 16, 2020
 *      Author: leopoldo
 */

#ifndef MAIN_PEMKEY_H_
#define MAIN_PEMKEY_H_

/*
 * Clave PRIVADA del dispositivo registrado en Google Cloud Platform - IotCore
 * https://cloud.google.com/iot/docs/how-tos/credentials/keys
 *
 * Crear claves publica y privada para cada dispositivo desde la consola de GCP con la herramienta OPENSSL
 * 
 * openssl req -x509 -nodes -newkey rsa:2048 -keyout rsa_lz_private.pem -out rsa_lz_cert.pem -subj "/CN=unused" -days 36500 
 *  
 * rsa_private.pem: The private key that must be securely stored on the device and used to sign the authentication JWT.
 * rsa_public.pem: The public key that must be stored in Cloud IoT Core and used to verify the signature of the authentication JWT.
 */

const char GCP_PEM_KEY[] =

"-----BEGIN PRIVATE KEY-----\n"
"MIIEvwIBADANBgkqhkiG9w0BAQEFAASCBKkwggSlAgEAAoIBAQDPupOJQnZGHxxn\n"
"4M8wolpmzyfLO4NqOmu5shqW7HgxEKpM08XdLoFYF8fjDL/nwB61uPMerGrsXKMX\n"
"ENsztePV6QltuxsXIrlhgHAcjSG5UI1hOG19JBVzrlpsGYbpxo53pSDl7xJD3eN4\n"
"5oTffMs7K/DWanPnY/SEP7ONStf2nvVQ/QbKP48Q6wmA8AXFTIbBkvV5Q6R2/7oi\n"
"a2K++xtxdfV0jpeFGneg/VL/9YItaCHi+u0ouaPtx6TwMc0gYDf75McF3FMDEL3N\n"
"9AYf2bTZTabU3/Dlr+0yML/PHYkCfHxNRg4DMJYUV0kqtcK9p2kmkgaJ9ayjuImA\n"
"kAPuusnhAgMBAAECggEBAMkm3NMfnrRMUA9vLHLl5DCGDPzKBnmJVOOeygy3s7Of\n"
"damrsIB8Fhgd/xuoLvTVn2dNT2+2elujYPJnCjzKt3NelBjEBHmk0GrQGsArEisH\n"
"C8DHCY8SsAszHLBtD6207iSBrJe7p648YZejcauQhqQn6rFWqCG7Mv4VSWNaxEI0\n"
"8EKzyYGSjP9VwrqhvUzRVA/WqYiHB7TiRboFM9FWstE+w+4dUqgVwSf62k6z9rC4\n"
"xES2sGEerpS07eKFYPOGbM/UQ7rguXG/JAtgsAXNptcw3ZVxDnfj+sopnO0OQuYD\n"
"/JT9hNeY9tHBZU/kZZJ6UXeTGu1CVAJnvIVkuOzipgECgYEA8OKQyRw6gAAInoE5\n"
"0Vy/tufAJhdPK/0IzrjOvVFo0YvS1dNnH3aCiE7O63TMa4k/6lq48wBtaGHEF8+a\n"
"/OjiPxARxA16Q+o75FNR4gwFCG6kzSj8/a0/50QhfhHQHWGvui0g8/GpCrfYLcve\n"
"lq5MlMFXt8ssIQhlp2icTpEYLjECgYEA3MNotua+j1hB5G0Rs7+lz3/O0a1awvV5\n"
"kUDjzhZv2LSqzrSqSRrMZydGzObC7ZbjQdx1K9DMSUfkJA/yu24vtH86INEK4odJ\n"
"HaA110cktjUjiuVgDuGV8G25IOBkhM6CL14zwwEORnmxbf7ylKXNz/2mmZS1YwXL\n"
"ujGSA5GX+rECgYEAmm6mpEiUuLtMy1HN34u23Wx2o/UNrQXsP5v77yPiL3WVFcES\n"
"u/kedoUP46Rd6hN0BqtjJ2d+vQzwytMuajZj1kpXGXoKiMAC5b8FIAbUszM8NMuy\n"
"ZnBMJ9hmII0K/8tA/fswxTSJS3XSAopRigj0z+mkcxCumf7oLQvEKhqbhgECgYEA\n"
"2JYaYP8my+mx09KyAGCw40+n8AyctBMzbq90EBfxKXGu9ldHjatuCHH/Qz3O1lwn\n"
"n9ETX6ZdFjQi/sJqyTpEMVh1BgcxH6fMsvUgfZG90cl2kmmRgWgOu7BaZYfg9m7I\n"
"SIKqU9HwWHJCAgGTqwS0VC+tyJWeE4V3J7hEYZ3wtjECgYBZh2OXTGlvDlPGCX6N\n"
"/wxmW4m8AUmq61InkfZsmeWuNmhHl+5t/yLGQ5dBGC3NM9rL1BtTaoZvGMA3dQ7c\n"
"/9UbHfJnDKjqZXogL6s4Y9cGpBrpUhBpmsokKQJAzluD4wIP+ODuzWETyabV7X1P\n"
"TU5WWMBtqwWhL5ufBkgU3Ma9Gw==\n"
"-----END PRIVATE KEY-----\n";

#endif /* MAIN_PEMKEY_H_ */
