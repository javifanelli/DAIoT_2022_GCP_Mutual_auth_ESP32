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
"MIIEvQIBADANBgkqhkiG9w0BAQEFAASCBKcwggSjAgEAAoIBAQDEBqsBURNCHxWl\n"
"a1WL1qikvL/lLjfIBPwoK9WVbMYvnPOxIIktKaq0ZZVZHRrWarJSBl+cIlJuapQQ\n"
"O4gwq6zNAiW8a9IgRZgoJ9ArxJLEe2U1ENZvA0GctYpRfKo5l2YeQUCb/yc4OXis\n"
"LvIntRiRis3PS7GnKaqC5DuXskGpaqF8QzgVlIoD8hAY2ox/ZKXXQgBYUmYQorHh\n"
"fXLTm6Jo/tQssnRdsnEiB+Nt/GCjl1PqQxAMnL9Zbqu/4YGEn1KJ0RIh0eaAOPNm\n"
"4XSEAdgBNySid1UWOWWCj908REpHoJ6OyEzQ9QpLj/7TC5TQ6EqwUHRbLCxIl4bv\n"
"vYMM2kyvAgMBAAECggEAextM7cjC9XWcHITp9qZaxwqa4Q1DjuRCj9/nhK4JUQGa\n"
"sZSjUa+nOx/IyWxT3HCpiIXkKaQMbLeWQROCFj7aiO1eUZTNI+NRCXbnb3VGTwrH\n"
"pqnqYVGENSx1r3NBXGXOhhWow89cDB1bwZbCEVnUEiM/2X3KFhc+tHEtU7lpL0Fk\n"
"BxQIvPQ1LpRmhh+7W1JIRkJm2Hod+YBBXUQGt7yOknN5fgbqrxotOgVIdA/eOGv3\n"
"CK8H9LIn3cxD2I3f5qjrtSBekea1lF7SxQRuTiZV2inFxp6R8r5F8of84jzOFhkT\n"
"LeglMP6QwchFWFbS8XshWUjcVgMLRx2Br67xWGayQQKBgQDw7Kcw00InY7K56zX9\n"
"qGjaSf1wz1eKL9iVmfsfZXu/ZgKWf7iLGb+uB2mKZfcT3W6kWyPvao0tm1v9Ylgb\n"
"NvGpMnEsPaQtd9ROL4uaMdw4dA/iuVNfJBS/1w8akd6KkTPcMOZiIXxpB2VPTyDu\n"
"DjRYFg3POf2FFGHjpOMImZml0QKBgQDQSsqxAeCfMNasVWL3PbOoqsVeXgTh83w0\n"
"5ps32jtD1lnNL2F7KPkqpvZB4oMzt+bVH5kIwA151VWvN/hV5FUcu7OexVtq6ojz\n"
"Q84ZzEPggl7NRadSelVbfGshkWUv48LMQBStT/8rLCbCkcLZKj1NsneN3JSKQWDi\n"
"49jxGxDqfwKBgH6tQB+JBQCnCEN/bC0Kjs8wFkVpj/LFw5CtnP/eIVn67iNp1oO1\n"
"Lzb3CMRPZsGYLWPX1CY/lSnExXKOchslIZ3AOwdzBc8ucYAGudWCn/NC+1NP9IlS\n"
"9GIGVxe2WRfszyLYx1oTl1G2JMu1pG/nIhiqx+oM6MM/e1Txzron4UTxAoGAfC7r\n"
"M6c75Y03oB10WJXH5FqUO5Pwc0o4lk2a4yzQQrysY6HJC6W9EEnk7hj/Qjl1fUFO\n"
"eyINpsKjSEklXQg6GlxqVdGylEbqiaa2XTkkitkPbnEFti3LcDT4plXKL0gqnp3h\n"
"9gaIypOTNFO1CMafMBCkKMcHJHqgKgXQFMefST8CgYEAgpCXUupwuxKvnxXUjk4x\n"
"mXiikY8drA4nIc0yCkkyBzTPLkvLpvAXJ/HR1i1lOi25Pd/Ax4YKND8Irs8/cn8I\n"
"SB2dg8YDtXsERNa5SznCl7422ROXvXbWgkUgzfysLn6u9lr1FX8lBLBrODJg7Niq\n"
"i2iY7NtSGEBhkT4SkoGQK54=\n"
"-----END PRIVATE KEY-----\n";

#endif /* MAIN_PEMKEY_H_ */
