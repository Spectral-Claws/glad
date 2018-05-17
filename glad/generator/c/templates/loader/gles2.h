{% import "template_utils.h" as template_utils with context %}
#ifdef GLAD_GLES2
{#
#ifndef __egl_h_
#error "gles2 loader requires egl.h, include egl.h (<glad/egl.h>) before including the loader."
#endif
#}

GLAD_API_CALL int gladLoaderLoadGLES2{{ 'Context' if options.mx }}({{ template_utils.context_arg(def='void') }});
{% if options.mx_global %}
GLAD_API_CALL int gladLoaderLoadGLES2(void);
{% endif %}
GLAD_API_CALL void gladUnloadGLES2InternalLoader(void);

#endif /* GLAD_GLES2 */
