/*
 * Generated by asn1c-1.1.1 (http://lionet.info/asn1c)
 * From ASN.1 module "RectangleModule"
 * 	found in "rectangle.asn"
 * 	`asn1c -no-gen-example`
 */

#ifndef	_Rectangle_H_
#define	_Rectangle_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Rectangle */
typedef struct Rectangle {
	long	 height;
	long	 width;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Rectangle_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Rectangle;

#ifdef __cplusplus
}
#endif

#endif	/* _Rectangle_H_ */
#include <asn_internal.h>
