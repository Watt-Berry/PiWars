// python wrapper for vtkLODProp3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLODProp3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLODProp3D(PyObject *dict); }
static PyMethodDef PyvtkLODProp3DEntry_t_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkLODProp3DEntry_t_vtkLODProp3DEntry_t_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkLODProp3DEntry_t");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkLODProp3DEntry_t *op = new vtkLODProp3DEntry_t();

    result = PyVTKSpecialObject_New("vtkLODProp3DEntry_t", op);
  }

  return result;
}

static PyObject *
PyvtkLODProp3DEntry_t_vtkLODProp3DEntry_t_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkLODProp3DEntry_t");

  vtkLODProp3DEntry_t *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkLODProp3DEntry_t"))
  {
    vtkLODProp3DEntry_t *op = new vtkLODProp3DEntry_t(*temp0);

    result = PyVTKSpecialObject_New("vtkLODProp3DEntry_t", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkLODProp3DEntry_t_vtkLODProp3DEntry_t_Methods[] = {
  {"vtkLODProp3DEntry_t", PyvtkLODProp3DEntry_t_vtkLODProp3DEntry_t_s2, METH_VARARGS,
   "@W vtkLODProp3DEntry_t"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLODProp3DEntry_t_vtkLODProp3DEntry_t(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkLODProp3DEntry_t_vtkLODProp3DEntry_t_s1(self, args);
    case 1:
      return PyvtkLODProp3DEntry_t_vtkLODProp3DEntry_t_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkLODProp3DEntry_t");
  return nullptr;
}


static const char *PyvtkLODProp3DEntry_t_Doc =

  "vtkLODProp3DEntry_t() -> vtkLODProp3DEntry_t\nC++: vtkLODProp3DEntry_t()\nvtkLODProp3DEntry_t(__a:vtkLODProp3DEntry_t) -> vtkLODProp3DEntry_t\nC++: vtkLODProp3DEntry_t(const &vtkLODProp3DEntry_t)\n""\n"
  "vtkLODProp3DEntry_t - no description provided.\n\n"
;

static PyObject *
PyvtkLODProp3DEntry_t_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkLODProp3DEntry_t_vtkLODProp3DEntry_t(nullptr, args);
}

static void PyvtkLODProp3DEntry_t_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkLODProp3DEntry_t *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkLODProp3DEntry_t_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLODProp3DEntry_t_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkLODProp3DEntry_t", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkLODProp3DEntry_t_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkLODProp3DEntry_t_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkLODProp3DEntry_t_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkLODProp3DEntry_t_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkLODProp3DEntry_t_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkLODProp3DEntry_t(*static_cast<const vtkLODProp3DEntry_t*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkLODProp3DEntry_t_TypeNew
extern "C" { PyObject *PyvtkLODProp3DEntry_t_TypeNew(); }
#define DECLARED_PyvtkLODProp3DEntry_t_TypeNew
#endif

PyObject *PyvtkLODProp3DEntry_t_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkLODProp3DEntry_t_Type,
    PyvtkLODProp3DEntry_t_Methods,
    PyvtkLODProp3DEntry_t_vtkLODProp3DEntry_t_Methods,
    &PyvtkLODProp3DEntry_t_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkLODProp3D_ClassNew(); }

#ifndef DECLARED_PyvtkProp3D_ClassNew
extern "C" { PyObject *PyvtkProp3D_ClassNew(); }
#define DECLARED_PyvtkProp3D_ClassNew
#endif

static PyObject *
PyvtkLODProp3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLODProp3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLODProp3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLODProp3D *tempr = vtkLODProp3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLODProp3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLODProp3D::NewInstance());

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
PyvtkLODProp3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLODProp3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLODProp3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkLODProp3D::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLODProp3D_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkLODProp3D::GetBounds(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLODProp3D_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkLODProp3D_GetBounds_s1(self, args);
    case 1:
      return PyvtkLODProp3D_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkLODProp3D_AddLOD_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkMapper *temp0 = nullptr;
  vtkProperty *temp1 = nullptr;
  vtkProperty *temp2 = nullptr;
  vtkTexture *temp3 = nullptr;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkMapper") &&
      ap.GetVTKObject(temp1, "vtkProperty") &&
      ap.GetVTKObject(temp2, "vtkProperty") &&
      ap.GetVTKObject(temp3, "vtkTexture") &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->AddLOD(temp0, temp1, temp2, temp3, temp4) :
      op->vtkLODProp3D::AddLOD(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLODProp3D_AddLOD_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkMapper *temp0 = nullptr;
  vtkProperty *temp1 = nullptr;
  vtkTexture *temp2 = nullptr;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMapper") &&
      ap.GetVTKObject(temp1, "vtkProperty") &&
      ap.GetVTKObject(temp2, "vtkTexture") &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->AddLOD(temp0, temp1, temp2, temp3) :
      op->vtkLODProp3D::AddLOD(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLODProp3D_AddLOD_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkMapper *temp0 = nullptr;
  vtkProperty *temp1 = nullptr;
  vtkProperty *temp2 = nullptr;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMapper") &&
      ap.GetVTKObject(temp1, "vtkProperty") &&
      ap.GetVTKObject(temp2, "vtkProperty") &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->AddLOD(temp0, temp1, temp2, temp3) :
      op->vtkLODProp3D::AddLOD(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLODProp3D_AddLOD_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkMapper *temp0 = nullptr;
  vtkProperty *temp1 = nullptr;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMapper") &&
      ap.GetVTKObject(temp1, "vtkProperty") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->AddLOD(temp0, temp1, temp2) :
      op->vtkLODProp3D::AddLOD(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLODProp3D_AddLOD_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkMapper *temp0 = nullptr;
  vtkTexture *temp1 = nullptr;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMapper") &&
      ap.GetVTKObject(temp1, "vtkTexture") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->AddLOD(temp0, temp1, temp2) :
      op->vtkLODProp3D::AddLOD(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLODProp3D_AddLOD_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkMapper *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMapper") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->AddLOD(temp0, temp1) :
      op->vtkLODProp3D::AddLOD(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLODProp3D_AddLOD_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkAbstractVolumeMapper *temp0 = nullptr;
  vtkVolumeProperty *temp1 = nullptr;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAbstractVolumeMapper") &&
      ap.GetVTKObject(temp1, "vtkVolumeProperty") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->AddLOD(temp0, temp1, temp2) :
      op->vtkLODProp3D::AddLOD(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLODProp3D_AddLOD_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkAbstractVolumeMapper *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractVolumeMapper") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->AddLOD(temp0, temp1) :
      op->vtkLODProp3D::AddLOD(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLODProp3D_AddLOD_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkImageMapper3D *temp0 = nullptr;
  vtkImageProperty *temp1 = nullptr;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageMapper3D") &&
      ap.GetVTKObject(temp1, "vtkImageProperty") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->AddLOD(temp0, temp1, temp2) :
      op->vtkLODProp3D::AddLOD(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLODProp3D_AddLOD_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkImageMapper3D *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageMapper3D") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->AddLOD(temp0, temp1) :
      op->vtkLODProp3D::AddLOD(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLODProp3D_AddLOD_Methods[] = {
  {"AddLOD", PyvtkLODProp3D_AddLOD_s2, METH_VARARGS,
   "@VVVd *vtkMapper *vtkProperty *vtkTexture"},
  {"AddLOD", PyvtkLODProp3D_AddLOD_s3, METH_VARARGS,
   "@VVVd *vtkMapper *vtkProperty *vtkProperty"},
  {"AddLOD", PyvtkLODProp3D_AddLOD_s4, METH_VARARGS,
   "@VVd *vtkMapper *vtkProperty"},
  {"AddLOD", PyvtkLODProp3D_AddLOD_s5, METH_VARARGS,
   "@VVd *vtkMapper *vtkTexture"},
  {"AddLOD", PyvtkLODProp3D_AddLOD_s6, METH_VARARGS,
   "@Vd *vtkMapper"},
  {"AddLOD", PyvtkLODProp3D_AddLOD_s7, METH_VARARGS,
   "@VVd *vtkAbstractVolumeMapper *vtkVolumeProperty"},
  {"AddLOD", PyvtkLODProp3D_AddLOD_s8, METH_VARARGS,
   "@Vd *vtkAbstractVolumeMapper"},
  {"AddLOD", PyvtkLODProp3D_AddLOD_s9, METH_VARARGS,
   "@VVd *vtkImageMapper3D *vtkImageProperty"},
  {"AddLOD", PyvtkLODProp3D_AddLOD_s10, METH_VARARGS,
   "@Vd *vtkImageMapper3D"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLODProp3D_AddLOD(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLODProp3D_AddLOD_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkLODProp3D_AddLOD_s1(self, args);
    case 2:
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddLOD");
  return nullptr;
}


static PyObject *
PyvtkLODProp3D_GetNumberOfLODs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLODs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLODs() :
      op->vtkLODProp3D::GetNumberOfLODs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetCurrentIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentIndex() :
      op->vtkLODProp3D::GetCurrentIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_RemoveLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveLOD(temp0);
    }
    else
    {
      op->vtkLODProp3D::RemoveLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetLODProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  vtkProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLODProperty(temp0, temp1);
    }
    else
    {
      op->vtkLODProp3D::SetLODProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLODProp3D_SetLODProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  vtkVolumeProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkVolumeProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLODProperty(temp0, temp1);
    }
    else
    {
      op->vtkLODProp3D::SetLODProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLODProp3D_SetLODProperty_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  vtkImageProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLODProperty(temp0, temp1);
    }
    else
    {
      op->vtkLODProp3D::SetLODProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLODProp3D_SetLODProperty_Methods[] = {
  {"SetLODProperty", PyvtkLODProp3D_SetLODProperty_s1, METH_VARARGS,
   "@iV *vtkProperty"},
  {"SetLODProperty", PyvtkLODProp3D_SetLODProperty_s2, METH_VARARGS,
   "@iV *vtkVolumeProperty"},
  {"SetLODProperty", PyvtkLODProp3D_SetLODProperty_s3, METH_VARARGS,
   "@iV *vtkImageProperty"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLODProp3D_SetLODProperty(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLODProp3D_SetLODProperty_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLODProperty");
  return nullptr;
}


static PyObject *
PyvtkLODProp3D_SetLODMapper_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  vtkMapper *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMapper"))
  {
    if (ap.IsBound())
    {
      op->SetLODMapper(temp0, temp1);
    }
    else
    {
      op->vtkLODProp3D::SetLODMapper(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLODProp3D_SetLODMapper_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  vtkAbstractVolumeMapper *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAbstractVolumeMapper"))
  {
    if (ap.IsBound())
    {
      op->SetLODMapper(temp0, temp1);
    }
    else
    {
      op->vtkLODProp3D::SetLODMapper(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLODProp3D_SetLODMapper_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  vtkImageMapper3D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageMapper3D"))
  {
    if (ap.IsBound())
    {
      op->SetLODMapper(temp0, temp1);
    }
    else
    {
      op->vtkLODProp3D::SetLODMapper(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLODProp3D_SetLODMapper_Methods[] = {
  {"SetLODMapper", PyvtkLODProp3D_SetLODMapper_s1, METH_VARARGS,
   "@iV *vtkMapper"},
  {"SetLODMapper", PyvtkLODProp3D_SetLODMapper_s2, METH_VARARGS,
   "@iV *vtkAbstractVolumeMapper"},
  {"SetLODMapper", PyvtkLODProp3D_SetLODMapper_s3, METH_VARARGS,
   "@iV *vtkImageMapper3D"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLODProp3D_SetLODMapper(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLODProp3D_SetLODMapper_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLODMapper");
  return nullptr;
}


static PyObject *
PyvtkLODProp3D_GetLODMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractMapper3D *tempr = (ap.IsBound() ?
      op->GetLODMapper(temp0) :
      op->vtkLODProp3D::GetLODMapper(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetLODBackfaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODBackfaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  vtkProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLODBackfaceProperty(temp0, temp1);
    }
    else
    {
      op->vtkLODProp3D::SetLODBackfaceProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetLODTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  vtkTexture *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetLODTexture(temp0, temp1);
    }
    else
    {
      op->vtkLODProp3D::SetLODTexture(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_EnableLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->EnableLOD(temp0);
    }
    else
    {
      op->vtkLODProp3D::EnableLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_DisableLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisableLOD(temp0);
    }
    else
    {
      op->vtkLODProp3D::DisableLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_IsLODEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLODEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsLODEnabled(temp0) :
      op->vtkLODProp3D::IsLODEnabled(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetLODLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLODLevel(temp0, temp1);
    }
    else
    {
      op->vtkLODProp3D::SetLODLevel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetLODLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLODLevel(temp0) :
      op->vtkLODProp3D::GetLODLevel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetLODIndexLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODIndexLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLODIndexLevel(temp0) :
      op->vtkLODProp3D::GetLODIndexLevel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetLODEstimatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLODEstimatedRenderTime(temp0) :
      op->vtkLODProp3D::GetLODEstimatedRenderTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetLODIndexEstimatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODIndexEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLODIndexEstimatedRenderTime(temp0) :
      op->vtkLODProp3D::GetLODIndexEstimatedRenderTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetAutomaticLODSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticLODSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticLODSelection(temp0);
    }
    else
    {
      op->vtkLODProp3D::SetAutomaticLODSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetAutomaticLODSelectionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticLODSelectionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticLODSelectionMinValue() :
      op->vtkLODProp3D::GetAutomaticLODSelectionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetAutomaticLODSelectionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticLODSelectionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticLODSelectionMaxValue() :
      op->vtkLODProp3D::GetAutomaticLODSelectionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetAutomaticLODSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticLODSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticLODSelection() :
      op->vtkLODProp3D::GetAutomaticLODSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_AutomaticLODSelectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticLODSelectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticLODSelectionOn();
    }
    else
    {
      op->vtkLODProp3D::AutomaticLODSelectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_AutomaticLODSelectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticLODSelectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticLODSelectionOff();
    }
    else
    {
      op->vtkLODProp3D::AutomaticLODSelectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetSelectedLODID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedLODID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedLODID(temp0);
    }
    else
    {
      op->vtkLODProp3D::SetSelectedLODID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetSelectedLODID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLODID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedLODID() :
      op->vtkLODProp3D::GetSelectedLODID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetLastRenderedLODID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRenderedLODID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastRenderedLODID() :
      op->vtkLODProp3D::GetLastRenderedLODID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetPickLODID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickLODID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickLODID() :
      op->vtkLODProp3D::GetPickLODID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkLODProp3D::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetVolumes(temp0);
    }
    else
    {
      op->vtkLODProp3D::GetVolumes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetSelectedPickLODID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPickLODID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedPickLODID(temp0);
    }
    else
    {
      op->vtkLODProp3D::SetSelectedPickLODID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetSelectedPickLODID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPickLODID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedPickLODID() :
      op->vtkLODProp3D::GetSelectedPickLODID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetAutomaticPickLODSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticPickLODSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticPickLODSelection(temp0);
    }
    else
    {
      op->vtkLODProp3D::SetAutomaticPickLODSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetAutomaticPickLODSelectionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticPickLODSelectionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticPickLODSelectionMinValue() :
      op->vtkLODProp3D::GetAutomaticPickLODSelectionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetAutomaticPickLODSelectionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticPickLODSelectionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticPickLODSelectionMaxValue() :
      op->vtkLODProp3D::GetAutomaticPickLODSelectionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetAutomaticPickLODSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticPickLODSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticPickLODSelection() :
      op->vtkLODProp3D::GetAutomaticPickLODSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_AutomaticPickLODSelectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticPickLODSelectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticPickLODSelectionOn();
    }
    else
    {
      op->vtkLODProp3D::AutomaticPickLODSelectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_AutomaticPickLODSelectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticPickLODSelectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticPickLODSelectionOff();
    }
    else
    {
      op->vtkLODProp3D::AutomaticPickLODSelectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkLODProp3D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkLODProp3D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkLODProp3D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkLODProp3D::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkLODProp3D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkLODProp3D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetAllocatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllocatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  double temp0;
  vtkViewport *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->SetAllocatedRenderTime(temp0, temp1);
    }
    else
    {
      op->vtkLODProp3D::SetAllocatedRenderTime(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_RestoreEstimatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestoreEstimatedRenderTime();
    }
    else
    {
      op->vtkLODProp3D::RestoreEstimatedRenderTime();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODProp3D_AddEstimatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  double temp0;
  vtkViewport *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->AddEstimatedRenderTime(temp0, temp1);
    }
    else
    {
      op->vtkLODProp3D::AddEstimatedRenderTime(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLODProp3D_Methods[] = {
  {"IsTypeOf", PyvtkLODProp3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLODProp3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLODProp3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLODProp3D\nC++: static vtkLODProp3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLODProp3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLODProp3D\nC++: vtkLODProp3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLODProp3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLODProp3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetBounds", PyvtkLODProp3D_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nStandard vtkProp method to get 3D bounds of a 3D prop\n"},
  {"AddLOD", PyvtkLODProp3D_AddLOD, METH_VARARGS,
   "AddLOD(self, m:vtkMapper, p:vtkProperty, back:vtkProperty,\n    t:vtkTexture, time:float) -> int\nC++: int AddLOD(vtkMapper *m, vtkProperty *p, vtkProperty *back,\n    vtkTexture *t, double time)\nAddLOD(self, m:vtkMapper, p:vtkProperty, t:vtkTexture, time:float)\n     -> int\nC++: int AddLOD(vtkMapper *m, vtkProperty *p, vtkTexture *t,\n    double time)\nAddLOD(self, m:vtkMapper, p:vtkProperty, back:vtkProperty,\n    time:float) -> int\nC++: int AddLOD(vtkMapper *m, vtkProperty *p, vtkProperty *back,\n    double time)\nAddLOD(self, m:vtkMapper, p:vtkProperty, time:float) -> int\nC++: int AddLOD(vtkMapper *m, vtkProperty *p, double time)\nAddLOD(self, m:vtkMapper, t:vtkTexture, time:float) -> int\nC++: int AddLOD(vtkMapper *m, vtkTexture *t, double time)\nAddLOD(self, m:vtkMapper, time:float) -> int\nC++: int AddLOD(vtkMapper *m, double time)\nAddLOD(self, m:vtkAbstractVolumeMapper, p:vtkVolumeProperty,\n    time:float) -> int\nC++: int AddLOD(vtkAbstractVolumeMapper *m, vtkVolumeProperty *p,\n    double time)\nAddLOD(self, m:vtkAbstractVolumeMapper, time:float) -> int\nC++: int AddLOD(vtkAbstractVolumeMapper *m, double time)\nAddLOD(self, m:vtkImageMapper3D, p:vtkImageProperty, time:float)\n    -> int\nC++: int AddLOD(vtkImageMapper3D *m, vtkImageProperty *p,\n    double time)\nAddLOD(self, m:vtkImageMapper3D, time:float) -> int\nC++: int AddLOD(vtkImageMapper3D *m, double time)\n\nAdd a level of detail with a given mapper, property, backface\nproperty, texture, and guess of rendering time.  The property and\ntexture fields can be set to NULL (the other methods are included\nfor script access where null variables are not allowed). The time\nfield can be set to 0.0 indicating that no initial guess for\nrendering time is being supplied. The returned integer value is\nan ID that can be used later to delete this LOD, or set it as the\nselected LOD.\n"},
  {"GetNumberOfLODs", PyvtkLODProp3D_GetNumberOfLODs, METH_VARARGS,
   "GetNumberOfLODs(self) -> int\nC++: virtual int GetNumberOfLODs()\n\nGet the current number of LODs.\n"},
  {"GetCurrentIndex", PyvtkLODProp3D_GetCurrentIndex, METH_VARARGS,
   "GetCurrentIndex(self) -> int\nC++: virtual int GetCurrentIndex()\n\nGet the current index, used to determine the ID of the next LOD\nthat is added.  Useful for guessing what IDs have been used (with\nNumberOfLODs, without depending on the constructor initialization\nto 1000.\n"},
  {"RemoveLOD", PyvtkLODProp3D_RemoveLOD, METH_VARARGS,
   "RemoveLOD(self, id:int) -> None\nC++: void RemoveLOD(int id)\n\nDelete a level of detail given an ID. This is the ID returned by\nthe AddLOD method\n"},
  {"SetLODProperty", PyvtkLODProp3D_SetLODProperty, METH_VARARGS,
   "SetLODProperty(self, id:int, p:vtkProperty) -> None\nC++: void SetLODProperty(int id, vtkProperty *p)\nSetLODProperty(self, id:int, p:vtkVolumeProperty) -> None\nC++: void SetLODProperty(int id, vtkVolumeProperty *p)\nSetLODProperty(self, id:int, p:vtkImageProperty) -> None\nC++: void SetLODProperty(int id, vtkImageProperty *p)\n\nMethods to set / get the property of an LOD. Since the LOD could\nbe a volume or an actor, you have to pass in the pointer to the\nproperty to get it. The returned property will be NULL if the id\nis not valid, or the property is of the wrong type for the\ncorresponding Prop3D.\n"},
  {"SetLODMapper", PyvtkLODProp3D_SetLODMapper, METH_VARARGS,
   "SetLODMapper(self, id:int, m:vtkMapper) -> None\nC++: void SetLODMapper(int id, vtkMapper *m)\nSetLODMapper(self, id:int, m:vtkAbstractVolumeMapper) -> None\nC++: void SetLODMapper(int id, vtkAbstractVolumeMapper *m)\nSetLODMapper(self, id:int, m:vtkImageMapper3D) -> None\nC++: void SetLODMapper(int id, vtkImageMapper3D *m)\n\nMethods to set / get the mapper of an LOD. Since the LOD could be\na volume or an actor, you have to pass in the pointer to the\nmapper to get it. The returned mapper will be NULL if the id is\nnot valid, or the mapper is of the wrong type for the\ncorresponding Prop3D.\n"},
  {"GetLODMapper", PyvtkLODProp3D_GetLODMapper, METH_VARARGS,
   "GetLODMapper(self, id:int) -> vtkAbstractMapper3D\nC++: vtkAbstractMapper3D *GetLODMapper(int id)\n\nGet the LODMapper as an vtkAbstractMapper3D.  It is the user's\nrespondibility to safe down cast this to a vtkMapper or\nvtkVolumeMapper as appropriate.\n"},
  {"SetLODBackfaceProperty", PyvtkLODProp3D_SetLODBackfaceProperty, METH_VARARGS,
   "SetLODBackfaceProperty(self, id:int, t:vtkProperty) -> None\nC++: void SetLODBackfaceProperty(int id, vtkProperty *t)\n\nMethods to set / get the backface property of an LOD. This method\nis only valid for LOD ids that are Actors (not Volumes)\n"},
  {"SetLODTexture", PyvtkLODProp3D_SetLODTexture, METH_VARARGS,
   "SetLODTexture(self, id:int, t:vtkTexture) -> None\nC++: void SetLODTexture(int id, vtkTexture *t)\n\nMethods to set / get the texture of an LOD. This method is only\nvalid for LOD ids that are Actors (not Volumes)\n"},
  {"EnableLOD", PyvtkLODProp3D_EnableLOD, METH_VARARGS,
   "EnableLOD(self, id:int) -> None\nC++: void EnableLOD(int id)\n\nEnable / disable a particular LOD. If it is disabled, it will not\nbe used during automatic selection, but can be selected as the\nLOD if automatic LOD selection is off.\n"},
  {"DisableLOD", PyvtkLODProp3D_DisableLOD, METH_VARARGS,
   "DisableLOD(self, id:int) -> None\nC++: void DisableLOD(int id)\n\n"},
  {"IsLODEnabled", PyvtkLODProp3D_IsLODEnabled, METH_VARARGS,
   "IsLODEnabled(self, id:int) -> int\nC++: int IsLODEnabled(int id)\n\n"},
  {"SetLODLevel", PyvtkLODProp3D_SetLODLevel, METH_VARARGS,
   "SetLODLevel(self, id:int, level:float) -> None\nC++: void SetLODLevel(int id, double level)\n\nSet the level of a particular LOD. When a LOD is selected for\nrendering because it has the largest render time that fits within\nthe allocated time, all LOD are then checked to see if any one\ncan render faster but has a lower (more resolution/better) level.\nThis quantity is a double to ensure that a level can be inserted\nbetween 2 and 3.\n"},
  {"GetLODLevel", PyvtkLODProp3D_GetLODLevel, METH_VARARGS,
   "GetLODLevel(self, id:int) -> float\nC++: double GetLODLevel(int id)\n\n"},
  {"GetLODIndexLevel", PyvtkLODProp3D_GetLODIndexLevel, METH_VARARGS,
   "GetLODIndexLevel(self, index:int) -> float\nC++: double GetLODIndexLevel(int index)\n\n"},
  {"GetLODEstimatedRenderTime", PyvtkLODProp3D_GetLODEstimatedRenderTime, METH_VARARGS,
   "GetLODEstimatedRenderTime(self, id:int) -> float\nC++: double GetLODEstimatedRenderTime(int id)\n\nAccess method that can be used to find out the estimated render\ntime (the thing used to select an LOD) for a given LOD ID or\nindex. Value is returned in seconds.\n"},
  {"GetLODIndexEstimatedRenderTime", PyvtkLODProp3D_GetLODIndexEstimatedRenderTime, METH_VARARGS,
   "GetLODIndexEstimatedRenderTime(self, index:int) -> float\nC++: double GetLODIndexEstimatedRenderTime(int index)\n\n"},
  {"SetAutomaticLODSelection", PyvtkLODProp3D_SetAutomaticLODSelection, METH_VARARGS,
   "SetAutomaticLODSelection(self, _arg:int) -> None\nC++: virtual void SetAutomaticLODSelection(vtkTypeBool _arg)\n\nTurn on / off automatic selection of LOD. This is on by default.\nIf it is off, then the SelectedLODID is rendered regardless of\nrendering time or desired update rate.\n"},
  {"GetAutomaticLODSelectionMinValue", PyvtkLODProp3D_GetAutomaticLODSelectionMinValue, METH_VARARGS,
   "GetAutomaticLODSelectionMinValue(self) -> int\nC++: virtual vtkTypeBool GetAutomaticLODSelectionMinValue()\n\n"},
  {"GetAutomaticLODSelectionMaxValue", PyvtkLODProp3D_GetAutomaticLODSelectionMaxValue, METH_VARARGS,
   "GetAutomaticLODSelectionMaxValue(self) -> int\nC++: virtual vtkTypeBool GetAutomaticLODSelectionMaxValue()\n\n"},
  {"GetAutomaticLODSelection", PyvtkLODProp3D_GetAutomaticLODSelection, METH_VARARGS,
   "GetAutomaticLODSelection(self) -> int\nC++: virtual vtkTypeBool GetAutomaticLODSelection()\n\n"},
  {"AutomaticLODSelectionOn", PyvtkLODProp3D_AutomaticLODSelectionOn, METH_VARARGS,
   "AutomaticLODSelectionOn(self) -> None\nC++: virtual void AutomaticLODSelectionOn()\n\n"},
  {"AutomaticLODSelectionOff", PyvtkLODProp3D_AutomaticLODSelectionOff, METH_VARARGS,
   "AutomaticLODSelectionOff(self) -> None\nC++: virtual void AutomaticLODSelectionOff()\n\n"},
  {"SetSelectedLODID", PyvtkLODProp3D_SetSelectedLODID, METH_VARARGS,
   "SetSelectedLODID(self, _arg:int) -> None\nC++: virtual void SetSelectedLODID(int _arg)\n\nSet the id of the LOD that is to be drawn when automatic LOD\nselection is turned off.\n"},
  {"GetSelectedLODID", PyvtkLODProp3D_GetSelectedLODID, METH_VARARGS,
   "GetSelectedLODID(self) -> int\nC++: virtual int GetSelectedLODID()\n\n"},
  {"GetLastRenderedLODID", PyvtkLODProp3D_GetLastRenderedLODID, METH_VARARGS,
   "GetLastRenderedLODID(self) -> int\nC++: int GetLastRenderedLODID()\n\nGet the ID of the previously (during the last render) selected\nLOD index\n"},
  {"GetPickLODID", PyvtkLODProp3D_GetPickLODID, METH_VARARGS,
   "GetPickLODID(self) -> int\nC++: int GetPickLODID()\n\nGet the ID of the appropriate pick LOD index\n"},
  {"GetActors", PyvtkLODProp3D_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"GetVolumes", PyvtkLODProp3D_GetVolumes, METH_VARARGS,
   "GetVolumes(self, __a:vtkPropCollection) -> None\nC++: void GetVolumes(vtkPropCollection *) override;\n\n"},
  {"SetSelectedPickLODID", PyvtkLODProp3D_SetSelectedPickLODID, METH_VARARGS,
   "SetSelectedPickLODID(self, id:int) -> None\nC++: void SetSelectedPickLODID(int id)\n\nSet the id of the LOD that is to be used for picking when\nautomatic LOD pick selection is turned off.\n"},
  {"GetSelectedPickLODID", PyvtkLODProp3D_GetSelectedPickLODID, METH_VARARGS,
   "GetSelectedPickLODID(self) -> int\nC++: virtual int GetSelectedPickLODID()\n\n"},
  {"SetAutomaticPickLODSelection", PyvtkLODProp3D_SetAutomaticPickLODSelection, METH_VARARGS,
   "SetAutomaticPickLODSelection(self, _arg:int) -> None\nC++: virtual void SetAutomaticPickLODSelection(vtkTypeBool _arg)\n\nTurn on / off automatic selection of picking LOD. This is on by\ndefault. If it is off, then the SelectedLODID is rendered\nregardless of rendering time or desired update rate.\n"},
  {"GetAutomaticPickLODSelectionMinValue", PyvtkLODProp3D_GetAutomaticPickLODSelectionMinValue, METH_VARARGS,
   "GetAutomaticPickLODSelectionMinValue(self) -> int\nC++: virtual vtkTypeBool GetAutomaticPickLODSelectionMinValue()\n\n"},
  {"GetAutomaticPickLODSelectionMaxValue", PyvtkLODProp3D_GetAutomaticPickLODSelectionMaxValue, METH_VARARGS,
   "GetAutomaticPickLODSelectionMaxValue(self) -> int\nC++: virtual vtkTypeBool GetAutomaticPickLODSelectionMaxValue()\n\n"},
  {"GetAutomaticPickLODSelection", PyvtkLODProp3D_GetAutomaticPickLODSelection, METH_VARARGS,
   "GetAutomaticPickLODSelection(self) -> int\nC++: virtual vtkTypeBool GetAutomaticPickLODSelection()\n\n"},
  {"AutomaticPickLODSelectionOn", PyvtkLODProp3D_AutomaticPickLODSelectionOn, METH_VARARGS,
   "AutomaticPickLODSelectionOn(self) -> None\nC++: virtual void AutomaticPickLODSelectionOn()\n\n"},
  {"AutomaticPickLODSelectionOff", PyvtkLODProp3D_AutomaticPickLODSelectionOff, METH_VARARGS,
   "AutomaticPickLODSelectionOff(self) -> None\nC++: virtual void AutomaticPickLODSelectionOff()\n\n"},
  {"ShallowCopy", PyvtkLODProp3D_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of this vtkLODProp3D.\n"},
  {"RenderOpaqueGeometry", PyvtkLODProp3D_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkLODProp3D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"RenderVolumetricGeometry", PyvtkLODProp3D_RenderVolumetricGeometry, METH_VARARGS,
   "RenderVolumetricGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderVolumetricGeometry(vtkViewport *viewport) override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkLODProp3D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"ReleaseGraphicsResources", PyvtkLODProp3D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"SetAllocatedRenderTime", PyvtkLODProp3D_SetAllocatedRenderTime, METH_VARARGS,
   "SetAllocatedRenderTime(self, t:float, vp:vtkViewport) -> None\nC++: void SetAllocatedRenderTime(double t, vtkViewport *vp)\n    override;\n\nUsed by the culler / renderer to set the allocated render time\nfor this prop. This is based on the desired update rate, and\npossibly some other properties such as potential screen coverage\nof this prop.\n"},
  {"RestoreEstimatedRenderTime", PyvtkLODProp3D_RestoreEstimatedRenderTime, METH_VARARGS,
   "RestoreEstimatedRenderTime(self) -> None\nC++: void RestoreEstimatedRenderTime() override;\n\nUsed when the render process is aborted to restore the previous\nestimated render time. Overridden here to allow previous time for\na particular LOD to be restored - otherwise the time for the last\nrendered LOD will be copied into the currently selected LOD.\n"},
  {"AddEstimatedRenderTime", PyvtkLODProp3D_AddEstimatedRenderTime, METH_VARARGS,
   "AddEstimatedRenderTime(self, t:float, vp:vtkViewport) -> None\nC++: void AddEstimatedRenderTime(double t, vtkViewport *vp)\n    override;\n\nOverride method from vtkProp in order to push this call down to\nthe selected LOD as well.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLODProp3D_Doc =
  "vtkLODProp3D - level of detail 3D prop\n\n"
  "Superclass: vtkProp3D\n\n"
  "vtkLODProp3D is a class to support level of detail rendering for\n"
  "Prop3D. Any number of mapper/property/texture items can be added to\n"
  "this object. Render time will be measured, and will be used to select\n"
  "a LOD based on the AllocatedRenderTime of this Prop3D. Depending on\n"
  "the type of the mapper/property, a vtkActor or a vtkVolume will be\n"
  "created behind the scenes.\n\n"
  "@sa\n"
  "vtkProp3D vtkActor vtkVolume vtkLODActor\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLODProp3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkLODProp3D", // tp_name
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
  PyvtkLODProp3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLODProp3D_StaticNew()
{
  return vtkLODProp3D::New();
}

PyObject *PyvtkLODProp3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLODProp3D_Type, PyvtkLODProp3D_Methods,
    "vtkLODProp3D",
 &PyvtkLODProp3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkProp3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLODProp3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLODProp3DEntry_t_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkLODProp3DEntry_t", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkLODProp3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLODProp3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

