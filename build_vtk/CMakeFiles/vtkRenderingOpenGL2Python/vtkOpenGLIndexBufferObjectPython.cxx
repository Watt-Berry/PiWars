// python wrapper for vtkOpenGLIndexBufferObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLIndexBufferObject.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLIndexBufferObject(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLIndexBufferObject_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLBufferObject_ClassNew
extern "C" { PyObject *PyvtkOpenGLBufferObject_ClassNew(); }
#define DECLARED_PyvtkOpenGLBufferObject_ClassNew
#endif

static PyObject *
PyvtkOpenGLIndexBufferObject_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLIndexBufferObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLIndexBufferObject *op = static_cast<vtkOpenGLIndexBufferObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLIndexBufferObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLIndexBufferObject *tempr = vtkOpenGLIndexBufferObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLIndexBufferObject *op = static_cast<vtkOpenGLIndexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLIndexBufferObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLIndexBufferObject::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(nullptr);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
    else if (tempr != nullptr)
    {
      ap.DeleteVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLIndexBufferObject::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLIndexBufferObject *op = static_cast<vtkOpenGLIndexBufferObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLIndexBufferObject::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_CreateTriangleLineIndexBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateTriangleLineIndexBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLIndexBufferObject *op = static_cast<vtkOpenGLIndexBufferObject *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    size_t tempr = (ap.IsBound() ?
      op->CreateTriangleLineIndexBuffer(temp0) :
      op->vtkOpenGLIndexBufferObject::CreateTriangleLineIndexBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_AppendLineIndexBuffer(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AppendLineIndexBuffer");

  std::vector<unsigned int> temp0(ap.GetArgSize(0));
  vtkCellArray *temp1 = nullptr;
  long long temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      ap.GetVTKObject(temp1, "vtkCellArray") &&
      ap.GetValue(temp2))
  {
    vtkOpenGLIndexBufferObject::AppendLineIndexBuffer(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp0.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp0.data(), temp0.size()));
      ap.SetContents(0, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_CreateLineIndexBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateLineIndexBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLIndexBufferObject *op = static_cast<vtkOpenGLIndexBufferObject *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    size_t tempr = (ap.IsBound() ?
      op->CreateLineIndexBuffer(temp0) :
      op->vtkOpenGLIndexBufferObject::CreateLineIndexBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_AppendTriangleLineIndexBuffer(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AppendTriangleLineIndexBuffer");

  std::vector<unsigned int> temp0(ap.GetArgSize(0));
  vtkCellArray *temp1 = nullptr;
  long long temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      ap.GetVTKObject(temp1, "vtkCellArray") &&
      ap.GetValue(temp2))
  {
    vtkOpenGLIndexBufferObject::AppendTriangleLineIndexBuffer(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp0.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp0.data(), temp0.size()));
      ap.SetContents(0, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_CreatePointIndexBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreatePointIndexBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLIndexBufferObject *op = static_cast<vtkOpenGLIndexBufferObject *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    size_t tempr = (ap.IsBound() ?
      op->CreatePointIndexBuffer(temp0) :
      op->vtkOpenGLIndexBufferObject::CreatePointIndexBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_AppendPointIndexBuffer(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AppendPointIndexBuffer");

  std::vector<unsigned int> temp0(ap.GetArgSize(0));
  vtkCellArray *temp1 = nullptr;
  long long temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      ap.GetVTKObject(temp1, "vtkCellArray") &&
      ap.GetValue(temp2))
  {
    vtkOpenGLIndexBufferObject::AppendPointIndexBuffer(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp0.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp0.data(), temp0.size()));
      ap.SetContents(0, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_CreateStripIndexBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateStripIndexBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLIndexBufferObject *op = static_cast<vtkOpenGLIndexBufferObject *>(vp);

  vtkCellArray *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCellArray") &&
      ap.GetValue(temp1))
  {
    size_t tempr = (ap.IsBound() ?
      op->CreateStripIndexBuffer(temp0, temp1) :
      op->vtkOpenGLIndexBufferObject::CreateStripIndexBuffer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_AppendStripIndexBuffer(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AppendStripIndexBuffer");

  std::vector<unsigned int> temp0(ap.GetArgSize(0));
  vtkCellArray *temp1 = nullptr;
  long long temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      ap.GetVTKObject(temp1, "vtkCellArray") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkOpenGLIndexBufferObject::AppendStripIndexBuffer(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp0.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp0.data(), temp0.size()));
      ap.SetContents(0, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_AppendEdgeFlagIndexBuffer(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AppendEdgeFlagIndexBuffer");

  std::vector<unsigned int> temp0(ap.GetArgSize(0));
  vtkCellArray *temp1 = nullptr;
  long long temp2;
  vtkDataArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      ap.GetVTKObject(temp1, "vtkCellArray") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataArray"))
  {
    vtkOpenGLIndexBufferObject::AppendEdgeFlagIndexBuffer(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp0.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp0.data(), temp0.size()));
      ap.SetContents(0, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLIndexBufferObject_CreateEdgeFlagIndexBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateEdgeFlagIndexBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLIndexBufferObject *op = static_cast<vtkOpenGLIndexBufferObject *>(vp);

  vtkCellArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCellArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    size_t tempr = (ap.IsBound() ?
      op->CreateEdgeFlagIndexBuffer(temp0, temp1) :
      op->vtkOpenGLIndexBufferObject::CreateEdgeFlagIndexBuffer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLIndexBufferObject_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLIndexBufferObject_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLIndexBufferObject_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLIndexBufferObject_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLIndexBufferObject\nC++: static vtkOpenGLIndexBufferObject *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLIndexBufferObject_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLIndexBufferObject\nC++: vtkOpenGLIndexBufferObject *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLIndexBufferObject_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLIndexBufferObject_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateTriangleLineIndexBuffer", PyvtkOpenGLIndexBufferObject_CreateTriangleLineIndexBuffer, METH_VARARGS,
   "CreateTriangleLineIndexBuffer(self, cells:vtkCellArray) -> int\nC++: size_t CreateTriangleLineIndexBuffer(vtkCellArray *cells)\n\ncreate a IBO for wireframe polys/tris\n"},
  {"AppendLineIndexBuffer", PyvtkOpenGLIndexBufferObject_AppendLineIndexBuffer, METH_VARARGS,
   "AppendLineIndexBuffer(indexArray:[int, ...], cells:vtkCellArray,\n    vertexOffset:int) -> None\nC++: static void AppendLineIndexBuffer(\n    std::vector<unsigned int> &indexArray, vtkCellArray *cells,\n    vtkIdType vertexOffset)\n\nused to create an IBO for line primitives\n"},
  {"CreateLineIndexBuffer", PyvtkOpenGLIndexBufferObject_CreateLineIndexBuffer, METH_VARARGS,
   "CreateLineIndexBuffer(self, cells:vtkCellArray) -> int\nC++: size_t CreateLineIndexBuffer(vtkCellArray *cells)\n\ncreate a IBO for wireframe polys/tris\n"},
  {"AppendTriangleLineIndexBuffer", PyvtkOpenGLIndexBufferObject_AppendTriangleLineIndexBuffer, METH_VARARGS,
   "AppendTriangleLineIndexBuffer(indexArray:[int, ...],\n    cells:vtkCellArray, vertexOffset:int) -> None\nC++: static void AppendTriangleLineIndexBuffer(\n    std::vector<unsigned int> &indexArray, vtkCellArray *cells,\n    vtkIdType vertexOffset)\n\ncreate a IBO for wireframe polys/tris\n"},
  {"CreatePointIndexBuffer", PyvtkOpenGLIndexBufferObject_CreatePointIndexBuffer, METH_VARARGS,
   "CreatePointIndexBuffer(self, cells:vtkCellArray) -> int\nC++: size_t CreatePointIndexBuffer(vtkCellArray *cells)\n\nused to create an IBO for primitives as points\n"},
  {"AppendPointIndexBuffer", PyvtkOpenGLIndexBufferObject_AppendPointIndexBuffer, METH_VARARGS,
   "AppendPointIndexBuffer(indexArray:[int, ...], cells:vtkCellArray,\n    vertexOffset:int) -> None\nC++: static void AppendPointIndexBuffer(\n    std::vector<unsigned int> &indexArray, vtkCellArray *cells,\n    vtkIdType vertexOffset)\n\nused to create an IBO for primitives as points\n"},
  {"CreateStripIndexBuffer", PyvtkOpenGLIndexBufferObject_CreateStripIndexBuffer, METH_VARARGS,
   "CreateStripIndexBuffer(self, cells:vtkCellArray,\n    wireframeTriStrips:bool) -> int\nC++: size_t CreateStripIndexBuffer(vtkCellArray *cells,\n    bool wireframeTriStrips)\n\nused to create an IBO for line strips and triangle strips\n"},
  {"AppendStripIndexBuffer", PyvtkOpenGLIndexBufferObject_AppendStripIndexBuffer, METH_VARARGS,
   "AppendStripIndexBuffer(indexArray:[int, ...], cells:vtkCellArray,\n    vertexOffset:int, wireframeTriStrips:bool) -> None\nC++: static void AppendStripIndexBuffer(\n    std::vector<unsigned int> &indexArray, vtkCellArray *cells,\n    vtkIdType vertexOffset, bool wireframeTriStrips)\n\n"},
  {"AppendEdgeFlagIndexBuffer", PyvtkOpenGLIndexBufferObject_AppendEdgeFlagIndexBuffer, METH_VARARGS,
   "AppendEdgeFlagIndexBuffer(indexArray:[int, ...],\n    cells:vtkCellArray, vertexOffset:int, edgeflags:vtkDataArray)\n    -> None\nC++: static void AppendEdgeFlagIndexBuffer(\n    std::vector<unsigned int> &indexArray, vtkCellArray *cells,\n    vtkIdType vertexOffset, vtkDataArray *edgeflags)\n\nspecial index buffer for polys wireframe with edge\nvisibilityflags\n"},
  {"CreateEdgeFlagIndexBuffer", PyvtkOpenGLIndexBufferObject_CreateEdgeFlagIndexBuffer, METH_VARARGS,
   "CreateEdgeFlagIndexBuffer(self, cells:vtkCellArray,\n    edgeflags:vtkDataArray) -> int\nC++: size_t CreateEdgeFlagIndexBuffer(vtkCellArray *cells,\n    vtkDataArray *edgeflags)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLIndexBufferObject_Doc =
  "vtkOpenGLIndexBufferObject - OpenGL vertex buffer object\n\n"
  "Superclass: vtkOpenGLBufferObject\n\n"
  "OpenGL buffer object to store geometry and/or attribute data on the\n"
  "GPU.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLIndexBufferObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLIndexBufferObject", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkOpenGLIndexBufferObject_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static vtkObjectBase *PyvtkOpenGLIndexBufferObject_StaticNew()
{
  return vtkOpenGLIndexBufferObject::New();
}

PyObject *PyvtkOpenGLIndexBufferObject_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLIndexBufferObject_Type, PyvtkOpenGLIndexBufferObject_Methods,
    "vtkOpenGLIndexBufferObject",
 &PyvtkOpenGLIndexBufferObject_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLBufferObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLIndexBufferObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLIndexBufferObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLIndexBufferObject", o) != 0)
  {
    Py_DECREF(o);
  }

}

