
#ifndef __marshal_MARSHAL_H__
#define __marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:BOOLEAN,STRING,UINT,BOOLEAN,DOUBLE (marshal.list:1) */
extern void marshal_VOID__BOOLEAN_STRING_UINT_BOOLEAN_DOUBLE (GClosure     *closure,
                                                              GValue       *return_value,
                                                              guint         n_param_values,
                                                              const GValue *param_values,
                                                              gpointer      invocation_hint,
                                                              gpointer      marshal_data);

/* VOID:BOXED,BOOLEAN,STRING,UINT,BOOLEAN,DOUBLE (marshal.list:2) */
extern void marshal_VOID__BOXED_BOOLEAN_STRING_UINT_BOOLEAN_DOUBLE (GClosure     *closure,
                                                                    GValue       *return_value,
                                                                    guint         n_param_values,
                                                                    const GValue *param_values,
                                                                    gpointer      invocation_hint,
                                                                    gpointer      marshal_data);

G_END_DECLS

#endif /* __marshal_MARSHAL_H__ */

