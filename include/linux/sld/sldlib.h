#ifndef _SLD_LIB_H
#define _SLD_LIB_H

#include <openssl/ssl.h>

struct sld_key_alias {
	char* alias;
};

struct sld_conn_handler {
	int socket;
	SSL *ssl_handler;
	SSL_CTX *ssl_context;
};

#endif


