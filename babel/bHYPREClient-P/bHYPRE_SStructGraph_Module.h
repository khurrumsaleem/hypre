/*
 * File:          bHYPRE_SStructGraph_Module.h
 * Symbol:        bHYPRE.SStructGraph-v1.0.0
 * Symbol Type:   class
 * Babel Version: 1.0.4
 * Description:   expose a constructor for the Python wrapper
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

/*
 * THIS CODE IS AUTOMATICALLY GENERATED BY THE BABEL
 * COMPILER. DO NOT EDIT THIS!
 * 
 * External clients need an entry point to wrap a pointer
 * to an instance of bHYPRE.SStructGraph.
 * This header files defines two methods that such clients
 * will need.
 *     bHYPRE_SStructGraph__import
 *         This should be called in the client's init
 *         module method.
 *     bHYPRE_SStructGraph__wrap
 *         This will wrap an IOR in a Python object.
 */

#ifndef included_bHYPRE_SStructGraph_MODULE
#define included_bHYPRE_SStructGraph_MODULE

#include <Python.h>
#include "sidlType.h"
#ifdef HAVE_PTHREAD
#include <pthread.h>
#endif /* HAVE_PTHREAD */

#ifdef __cplusplus
extern "C" {
#endif

struct sidl__array;

/* Forward declaration of IOR structure */
struct bHYPRE_SStructGraph__object;
struct bHYPRE_SStructGraph__array;
struct sidl_BaseInterface__object;

#define bHYPRE_SStructGraph__wrap_NUM 0
#define bHYPRE_SStructGraph__wrap_RETURN PyObject *
#define bHYPRE_SStructGraph__wrap_PROTO (struct bHYPRE_SStructGraph__object *sidlobj)

#define bHYPRE_SStructGraph__convert_NUM 1
#define bHYPRE_SStructGraph__convert_RETURN int
#define bHYPRE_SStructGraph__convert_PROTO (PyObject *obj, struct bHYPRE_SStructGraph__object **sidlobj)

#define bHYPRE_SStructGraph__convert_python_array_NUM 2
#define bHYPRE_SStructGraph__convert_python_array_RETURN int
#define bHYPRE_SStructGraph__convert_python_array_PROTO (PyObject *obj, struct bHYPRE_SStructGraph__array **sidlarray)

#define bHYPRE_SStructGraph__convert_sidl_array_NUM 3
#define bHYPRE_SStructGraph__convert_sidl_array_RETURN PyObject *
#define bHYPRE_SStructGraph__convert_sidl_array_PROTO (struct sidl__array *sidlarray)

#define bHYPRE_SStructGraph__weakRef_NUM 4
#define bHYPRE_SStructGraph__weakRef_RETURN PyObject *
#define bHYPRE_SStructGraph__weakRef_PROTO (struct bHYPRE_SStructGraph__object *sidlobj)

#define bHYPRE_SStructGraph_deref_NUM 5
#define bHYPRE_SStructGraph_deref_RETURN void
#define bHYPRE_SStructGraph_deref_PROTO (struct bHYPRE_SStructGraph__object *sidlobj)

#define bHYPRE_SStructGraph__newRef_NUM 6
#define bHYPRE_SStructGraph__newRef_RETURN PyObject *
#define bHYPRE_SStructGraph__newRef_PROTO (struct bHYPRE_SStructGraph__object *sidlobj)

#define bHYPRE_SStructGraph__addRef_NUM 7
#define bHYPRE_SStructGraph__addRef_RETURN void
#define bHYPRE_SStructGraph__addRef_PROTO (struct bHYPRE_SStructGraph__object *sidlobj)

#define bHYPRE_SStructGraph_PyType_NUM 8
#define bHYPRE_SStructGraph_PyType_RETURN PyTypeObject *
#define bHYPRE_SStructGraph_PyType_PROTO (void)

#define bHYPRE_SStructGraph__connectI_NUM 9
#define bHYPRE_SStructGraph__connectI_RETURN struct bHYPRE_SStructGraph__object* 
#define bHYPRE_SStructGraph__connectI_PROTO (const char* url, sidl_bool ar, struct sidl_BaseInterface__object ** _ex)

#define bHYPRE_SStructGraph__rmicast_NUM 10
#define bHYPRE_SStructGraph__rmicast_RETURN struct bHYPRE_SStructGraph__object* 
#define bHYPRE_SStructGraph__rmicast_PROTO (void* bi, struct sidl_BaseInterface__object ** _ex)

#define bHYPRE_SStructGraph__API_NUM 11

#ifdef bHYPRE_SStructGraph_INTERNAL

#define bHYPRE_SStructGraph__import() ;


/*
 * This declaration is not for clients.
 */

static bHYPRE_SStructGraph__wrap_RETURN
bHYPRE_SStructGraph__wrap
bHYPRE_SStructGraph__wrap_PROTO;

static bHYPRE_SStructGraph__convert_RETURN
bHYPRE_SStructGraph__convert
bHYPRE_SStructGraph__convert_PROTO;

static bHYPRE_SStructGraph__convert_python_array_RETURN
bHYPRE_SStructGraph__convert_python_array
bHYPRE_SStructGraph__convert_python_array_PROTO;

static bHYPRE_SStructGraph__convert_sidl_array_RETURN
bHYPRE_SStructGraph__convert_sidl_array
bHYPRE_SStructGraph__convert_sidl_array_PROTO;

static bHYPRE_SStructGraph__weakRef_RETURN
bHYPRE_SStructGraph__weakRef
bHYPRE_SStructGraph__weakRef_PROTO;

static bHYPRE_SStructGraph_deref_RETURN
bHYPRE_SStructGraph_deref
bHYPRE_SStructGraph_deref_PROTO;

static bHYPRE_SStructGraph__newRef_RETURN
bHYPRE_SStructGraph__newRef
bHYPRE_SStructGraph__newRef_PROTO;

static bHYPRE_SStructGraph__addRef_RETURN
bHYPRE_SStructGraph__addRef
bHYPRE_SStructGraph__addRef_PROTO;

static bHYPRE_SStructGraph_PyType_RETURN
bHYPRE_SStructGraph_PyType
bHYPRE_SStructGraph_PyType_PROTO;

#else

static void **bHYPRE_SStructGraph__API = NULL;

#define bHYPRE_SStructGraph__wrap \
  (*((bHYPRE_SStructGraph__wrap_RETURN (*) \
  bHYPRE_SStructGraph__wrap_PROTO) \
  (bHYPRE_SStructGraph__API \
  [bHYPRE_SStructGraph__wrap_NUM])))

#define bHYPRE_SStructGraph__convert \
  (*((bHYPRE_SStructGraph__convert_RETURN (*) \
  bHYPRE_SStructGraph__convert_PROTO) \
  (bHYPRE_SStructGraph__API \
  [bHYPRE_SStructGraph__convert_NUM])))

#define bHYPRE_SStructGraph__convert_python_array \
  (*((bHYPRE_SStructGraph__convert_python_array_RETURN (*) \
  bHYPRE_SStructGraph__convert_python_array_PROTO) \
  (bHYPRE_SStructGraph__API \
  [bHYPRE_SStructGraph__convert_python_array_NUM])))

#define bHYPRE_SStructGraph__convert_sidl_array \
  (*((bHYPRE_SStructGraph__convert_sidl_array_RETURN (*) \
  bHYPRE_SStructGraph__convert_sidl_array_PROTO) \
  (bHYPRE_SStructGraph__API \
  [bHYPRE_SStructGraph__convert_sidl_array_NUM])))

#define bHYPRE_SStructGraph__weakRef \
  (*((bHYPRE_SStructGraph__weakRef_RETURN (*) \
  bHYPRE_SStructGraph__weakRef_PROTO) \
  (bHYPRE_SStructGraph__API \
  [bHYPRE_SStructGraph__weakRef_NUM])))

#define bHYPRE_SStructGraph_deref \
  (*((bHYPRE_SStructGraph_deref_RETURN (*) \
  bHYPRE_SStructGraph_deref_PROTO) \
  (bHYPRE_SStructGraph__API \
  [bHYPRE_SStructGraph_deref_NUM])))

#define bHYPRE_SStructGraph__newRef \
  (*((bHYPRE_SStructGraph__newRef_RETURN (*) \
  bHYPRE_SStructGraph__newRef_PROTO) \
  (bHYPRE_SStructGraph__API \
  [bHYPRE_SStructGraph__newRef_NUM])))

#define bHYPRE_SStructGraph__addRef \
  (*((bHYPRE_SStructGraph__addRef_RETURN (*) \
  bHYPRE_SStructGraph__addRef_PROTO) \
  (bHYPRE_SStructGraph__API \
  [bHYPRE_SStructGraph__addRef_NUM])))

#define bHYPRE_SStructGraph_PyType \
  (*((bHYPRE_SStructGraph_PyType_RETURN (*) \
  bHYPRE_SStructGraph_PyType_PROTO) \
  (bHYPRE_SStructGraph__API \
  [bHYPRE_SStructGraph_PyType_NUM])))

#define bHYPRE_SStructGraph__connectI \
  (*((bHYPRE_SStructGraph__connectI_RETURN (*) \
  bHYPRE_SStructGraph__connectI_PROTO) \
  (bHYPRE_SStructGraph__API \
  [bHYPRE_SStructGraph__connectI_NUM])))

#define bHYPRE_SStructGraph__rmicast \
  (*((bHYPRE_SStructGraph__rmicast_RETURN (*) \
  bHYPRE_SStructGraph__rmicast_PROTO) \
  (bHYPRE_SStructGraph__API \
  [bHYPRE_SStructGraph__rmicast_NUM])))

#ifdef HAVE_PTHREAD
#define bHYPRE_SStructGraph__import() \
{ \
  pthread_mutex_t __sidl_pyapi_mutex = PTHREAD_MUTEX_INITIALIZER; \
  pthread_mutex_lock(&__sidl_pyapi_mutex); \
  if (!bHYPRE_SStructGraph__API) { \
    PyObject *module = PyImport_ImportModule("bHYPRE.SStructGraph"); \
    if (module != NULL) { \
      PyObject *module_dict = PyModule_GetDict(module); \
      PyObject *c_api_object = \
        PyDict_GetItemString(module_dict, "_C_API"); \
      if (c_api_object && PyCObject_Check(c_api_object)) { \
        bHYPRE_SStructGraph__API = \
          (void **)PyCObject_AsVoidPtr(c_api_object); \
      } \
      else { fprintf(stderr, "babel: bHYPRE_SStructGraph__import failed to lookup _C_API (%p %p %s).\n", c_api_object, c_api_object ? c_api_object->ob_type : NULL, c_api_object ? c_api_object->ob_type->tp_name : ""); }\
      Py_DECREF(module); \
    } else { fprintf(stderr, "babel: bHYPRE_SStructGraph__import failed to import its module.\n"); }\
  }\
  pthread_mutex_unlock(&__sidl_pyapi_mutex); \
  pthread_mutex_destroy(&__sidl_pyapi_mutex); \
}
#else /* !HAVE_PTHREAD */
#define bHYPRE_SStructGraph__import() \
if (!bHYPRE_SStructGraph__API) { \
  PyObject *module = PyImport_ImportModule("bHYPRE.SStructGraph"); \
  if (module != NULL) { \
    PyObject *module_dict = PyModule_GetDict(module); \
    PyObject *c_api_object = \
      PyDict_GetItemString(module_dict, "_C_API"); \
    if (c_api_object && PyCObject_Check(c_api_object)) { \
      bHYPRE_SStructGraph__API = \
        (void **)PyCObject_AsVoidPtr(c_api_object); \
    } \
    else { fprintf(stderr, "babel: bHYPRE_SStructGraph__import failed to lookup _C_API (%p %p %s).\n", c_api_object, c_api_object ? c_api_object->ob_type : NULL, c_api_object ? c_api_object->ob_type->tp_name : ""); }\
    Py_DECREF(module); \
  } else { fprintf(stderr, "babel: bHYPRE_SStructGraph__import failed to import its module.\n"); }\
}
#endif /* HAVE_PTHREAD */

#endif

#ifdef __cplusplus
}
#endif

#endif
