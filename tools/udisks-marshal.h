
#ifndef __udisks_marshal_MARSHAL_H__
#define __udisks_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:BOOLEAN,STRING,UINT,BOOLEAN,DOUBLE (../src/marshal.list:1) */
extern void udisks_marshal_VOID__BOOLEAN_STRING_UINT_BOOLEAN_DOUBLE (GClosure     *closure,
                                                                     GValue       *return_value,
                                                                     guint         n_param_values,
                                                                     const GValue *param_values,
                                                                     gpointer      invocation_hint,
                                                                     gpointer      marshal_data);

/* VOID:BOXED,BOOLEAN,STRING,UINT,BOOLEAN,DOUBLE (../src/marshal.list:2) */
extern void udisks_marshal_VOID__BOXED_BOOLEAN_STRING_UINT_BOOLEAN_DOUBLE (GClosure     *closure,
                                                                           GValue       *return_value,
                                                                           guint         n_param_values,
                                                                           const GValue *param_values,
                                                                           gpointer      invocation_hint,
                                                                           gpointer      marshal_data);

G_END_DECLS

#endif /* __udisks_marshal_MARSHAL_H__ */

