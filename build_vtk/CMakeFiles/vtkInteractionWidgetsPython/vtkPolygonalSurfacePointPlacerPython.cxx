// python wrapper for vtkPolygonalSurfacePointPlacer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPolygonalSurfacePointPlacer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolygonalSurfacePointPlacer(PyObject *dict); }
static PyMethodDef PyvtkPolygonalSurfacePointPlacerNode_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkPolygonalSurfacePointPlacerNode_vtkPolygonalSurfacePointPlacerNode_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPolygonalSurfacePointPlacerNode");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPolygonalSurfacePointPlacerNode *op = new vtkPolygonalSurfacePointPlacerNode();

    result = PyVTKSpecialObject_New("vtkPolygonalSurfacePointPlacerNode", op);
  }

  return result;
}

static PyObject *
PyvtkPolygonalSurfacePointPlacerNode_vtkPolygonalSurfacePointPlacerNode_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPolygonalSurfacePointPlacerNode");

  vtkPolygonalSurfacePointPlacerNode *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPolygonalSurfacePointPlacerNode"))
  {
    vtkPolygonalSurfacePointPlacerNode *op = new vtkPolygonalSurfacePointPlacerNode(*temp0);

    result = PyVTKSpecialObject_New("vtkPolygonalSurfacePointPlacerNode", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPolygonalSurfacePointPlacerNode_vtkPolygonalSurfacePointPlacerNode_Methods[] = {
  {"vtkPolygonalSurfacePointPlacerNode", PyvtkPolygonalSurfacePointPlacerNode_vtkPolygonalSurfacePointPlacerNode_s2, METH_VARARGS,
   "@W vtkPolygonalSurfacePointPlacerNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolygonalSurfacePointPlacerNode_vtkPolygonalSurfacePointPlacerNode(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolygonalSurfacePointPlacerNode_vtkPolygonalSurfacePointPlacerNode_s1(self, args);
    case 1:
      return PyvtkPolygonalSurfacePointPlacerNode_vtkPolygonalSurfacePointPlacerNode_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkPolygonalSurfacePointPlacerNode");
  return nullptr;
}


static const char *PyvtkPolygonalSurfacePointPlacerNode_Doc =

  "vtkPolygonalSurfacePointPlacerNode()\n    -> vtkPolygonalSurfacePointPlacerNode\nC++: vtkPolygonalSurfacePointPlacerNode()\nvtkPolygonalSurfacePointPlacerNode(\n    __a:vtkPolygonalSurfacePointPlacerNode)\n    -> vtkPolygonalSurfacePointPlacerNode\nC++: vtkPolygonalSurfacePointPlacerNode(\n    const &vtkPolygonalSurfacePointPlacerNode)\n""\n"
  "vtkPolygonalSurfacePointPlacerNode - no description provided.\n\n"
;

static PyObject *
PyvtkPolygonalSurfacePointPlacerNode_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkPolygonalSurfacePointPlacerNode_vtkPolygonalSurfacePointPlacerNode(nullptr, args);
}

static void PyvtkPolygonalSurfacePointPlacerNode_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPolygonalSurfacePointPlacerNode *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkPolygonalSurfacePointPlacerNode_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolygonalSurfacePointPlacerNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkPolygonalSurfacePointPlacerNode", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPolygonalSurfacePointPlacerNode_Delete, // tp_dealloc
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
  PyvtkPolygonalSurfacePointPlacerNode_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPolygonalSurfacePointPlacerNode_Doc, // tp_doc
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
  PyvtkPolygonalSurfacePointPlacerNode_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkPolygonalSurfacePointPlacerNode_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkPolygonalSurfacePointPlacerNode(*static_cast<const vtkPolygonalSurfacePointPlacerNode*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkPolygonalSurfacePointPlacerNode_TypeNew
extern "C" { PyObject *PyvtkPolygonalSurfacePointPlacerNode_TypeNew(); }
#define DECLARED_PyvtkPolygonalSurfacePointPlacerNode_TypeNew
#endif

PyObject *PyvtkPolygonalSurfacePointPlacerNode_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkPolygonalSurfacePointPlacerNode_Type,
    PyvtkPolygonalSurfacePointPlacerNode_Methods,
    PyvtkPolygonalSurfacePointPlacerNode_vtkPolygonalSurfacePointPlacerNode_Methods,
    &PyvtkPolygonalSurfacePointPlacerNode_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkPolygonalSurfacePointPlacer_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataPointPlacer_ClassNew
extern "C" { PyObject *PyvtkPolyDataPointPlacer_ClassNew(); }
#define DECLARED_PyvtkPolyDataPointPlacer_ClassNew
#endif

static PyObject *
PyvtkPolygonalSurfacePointPlacer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolygonalSurfacePointPlacer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolygonalSurfacePointPlacer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolygonalSurfacePointPlacer *tempr = vtkPolygonalSurfacePointPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolygonalSurfacePointPlacer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolygonalSurfacePointPlacer::NewInstance());

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
PyvtkPolygonalSurfacePointPlacer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolygonalSurfacePointPlacer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolygonalSurfacePointPlacer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_AddProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->AddProp(temp0);
    }
    else
    {
      op->vtkPolygonalSurfacePointPlacer::AddProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_RemoveViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->RemoveViewProp(temp0);
    }
    else
    {
      op->vtkPolygonalSurfacePointPlacer::RemoveViewProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_RemoveAllProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllProps();
    }
    else
    {
      op->vtkPolygonalSurfacePointPlacer::RemoveAllProps();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_ComputeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 9;
  double temp3[9];
  double save3[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ComputeWorldPosition(temp0, temp1, temp2, temp3) :
      op->vtkPolygonalSurfacePointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygonalSurfacePointPlacer_ComputeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  const size_t size4 = 9;
  double temp4[9];
  double save4[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4) :
      op->vtkPolygonalSurfacePointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygonalSurfacePointPlacer_ComputeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPolygonalSurfacePointPlacer_ComputeWorldPosition_s1(self, args);
    case 5:
      return PyvtkPolygonalSurfacePointPlacer_ComputeWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWorldPosition");
  return nullptr;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_ValidateWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ValidateWorldPosition(temp0) :
      op->vtkPolygonalSurfacePointPlacer::ValidateWorldPosition(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygonalSurfacePointPlacer_ValidateWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ValidateWorldPosition(temp0, temp1) :
      op->vtkPolygonalSurfacePointPlacer::ValidateWorldPosition(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygonalSurfacePointPlacer_ValidateWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPolygonalSurfacePointPlacer_ValidateWorldPosition_s1(self, args);
    case 2:
      return PyvtkPolygonalSurfacePointPlacer_ValidateWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ValidateWorldPosition");
  return nullptr;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_UpdateNodeWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateNodeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->UpdateNodeWorldPosition(temp0, temp1) :
      op->vtkPolygonalSurfacePointPlacer::UpdateNodeWorldPosition(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_ValidateDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ValidateDisplayPosition(temp0, temp1) :
      op->vtkPolygonalSurfacePointPlacer::ValidateDisplayPosition(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_GetCellPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellPicker *tempr = (ap.IsBound() ?
      op->GetCellPicker() :
      op->vtkPolygonalSurfacePointPlacer::GetCellPicker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_GetPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataCollection *tempr = (ap.IsBound() ?
      op->GetPolys() :
      op->vtkPolygonalSurfacePointPlacer::GetPolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_SetDistanceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceOffset(temp0);
    }
    else
    {
      op->vtkPolygonalSurfacePointPlacer::SetDistanceOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_GetDistanceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceOffset() :
      op->vtkPolygonalSurfacePointPlacer::GetDistanceOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_SetSnapToClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapToClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSnapToClosestPoint(temp0);
    }
    else
    {
      op->vtkPolygonalSurfacePointPlacer::SetSnapToClosestPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_GetSnapToClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapToClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSnapToClosestPoint() :
      op->vtkPolygonalSurfacePointPlacer::GetSnapToClosestPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_SnapToClosestPointOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SnapToClosestPointOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SnapToClosestPointOn();
    }
    else
    {
      op->vtkPolygonalSurfacePointPlacer::SnapToClosestPointOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_SnapToClosestPointOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SnapToClosestPointOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SnapToClosestPointOff();
    }
    else
    {
      op->vtkPolygonalSurfacePointPlacer::SnapToClosestPointOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolygonalSurfacePointPlacer_Methods[] = {
  {"IsTypeOf", PyvtkPolygonalSurfacePointPlacer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolygonalSurfacePointPlacer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolygonalSurfacePointPlacer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPolygonalSurfacePointPlacer\nC++: static vtkPolygonalSurfacePointPlacer *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolygonalSurfacePointPlacer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolygonalSurfacePointPlacer\nC++: vtkPolygonalSurfacePointPlacer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolygonalSurfacePointPlacer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolygonalSurfacePointPlacer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddProp", PyvtkPolygonalSurfacePointPlacer_AddProp, METH_VARARGS,
   "AddProp(self, __a:vtkProp) -> None\nC++: void AddProp(vtkProp *) override;\n\nAdd /remove a prop, to place points on\n"},
  {"RemoveViewProp", PyvtkPolygonalSurfacePointPlacer_RemoveViewProp, METH_VARARGS,
   "RemoveViewProp(self, prop:vtkProp) -> None\nC++: void RemoveViewProp(vtkProp *prop) override;\n\nAdd /remove a prop, to place points on\n"},
  {"RemoveAllProps", PyvtkPolygonalSurfacePointPlacer_RemoveAllProps, METH_VARARGS,
   "RemoveAllProps(self) -> None\nC++: void RemoveAllProps() override;\n\nAdd /remove a prop, to place points on\n"},
  {"ComputeWorldPosition", PyvtkPolygonalSurfacePointPlacer_ComputeWorldPosition, METH_VARARGS,
   "ComputeWorldPosition(self, ren:vtkRenderer, displayPos:[float,\n    float], worldPos:[float, float, float], worldOrient:[float,\n    float, float, float, float, float, float, float, float])\n    -> int\nC++: int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double worldPos[3],\n    double worldOrient[9]) override;\nComputeWorldPosition(self, ren:vtkRenderer, displayPos:[float,\n    float], refWorldPos:[float, float, float], worldPos:[float,\n    float, float], worldOrient:[float, float, float, float, float,\n     float, float, float, float]) -> int\nC++: int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double refWorldPos[3],\n    double worldPos[3], double worldOrient[9]) override;\n\nGiven a renderer and a display position in pixel coordinates,\ncompute the world position and orientation where this point will\nbe placed. This method is typically used by the representation to\nplace the point initially. For the Terrain point placer this\ncomputes world points that lie at the specified height above the\nterrain.\n"},
  {"ValidateWorldPosition", PyvtkPolygonalSurfacePointPlacer_ValidateWorldPosition, METH_VARARGS,
   "ValidateWorldPosition(self, worldPos:[float, float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3]) override;\nValidateWorldPosition(self, worldPos:[float, float, float],\n    worldOrient:[float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3],\n    double worldOrient[9]) override;\n\nGiven a world position check the validity of this position\naccording to the constraints of the placer\n"},
  {"UpdateNodeWorldPosition", PyvtkPolygonalSurfacePointPlacer_UpdateNodeWorldPosition, METH_VARARGS,
   "UpdateNodeWorldPosition(self, worldPos:[float, float, float],\n    nodePointId:int) -> int\nC++: int UpdateNodeWorldPosition(double worldPos[3],\n    vtkIdType nodePointId) override;\n\nGive the node a chance to update its auxiliary point id.\n"},
  {"ValidateDisplayPosition", PyvtkPolygonalSurfacePointPlacer_ValidateDisplayPosition, METH_VARARGS,
   "ValidateDisplayPosition(self, __a:vtkRenderer, displayPos:[float,\n    float]) -> int\nC++: int ValidateDisplayPosition(vtkRenderer *,\n    double displayPos[2]) override;\n\nGiven a display position, check the validity of this position.\n"},
  {"GetCellPicker", PyvtkPolygonalSurfacePointPlacer_GetCellPicker, METH_VARARGS,
   "GetCellPicker(self) -> vtkCellPicker\nC++: virtual vtkCellPicker *GetCellPicker()\n\nGet the Prop picker.\n"},
  {"GetPolys", PyvtkPolygonalSurfacePointPlacer_GetPolys, METH_VARARGS,
   "GetPolys(self) -> vtkPolyDataCollection\nC++: virtual vtkPolyDataCollection *GetPolys()\n\nBe sure to add polydata on which you wish to place points to this\nlist or they will not be considered for placement.\n"},
  {"SetDistanceOffset", PyvtkPolygonalSurfacePointPlacer_SetDistanceOffset, METH_VARARGS,
   "SetDistanceOffset(self, _arg:float) -> None\nC++: virtual void SetDistanceOffset(double _arg)\n\nHeight offset at which points may be placed on the polygonal\nsurface. If you specify a non-zero value here, be sure to compute\ncell normals on your input polygonal data (easily done with\nvtkPolyDataNormals).\n"},
  {"GetDistanceOffset", PyvtkPolygonalSurfacePointPlacer_GetDistanceOffset, METH_VARARGS,
   "GetDistanceOffset(self) -> float\nC++: virtual double GetDistanceOffset()\n\n"},
  {"SetSnapToClosestPoint", PyvtkPolygonalSurfacePointPlacer_SetSnapToClosestPoint, METH_VARARGS,
   "SetSnapToClosestPoint(self, _arg:int) -> None\nC++: virtual void SetSnapToClosestPoint(vtkTypeBool _arg)\n\nSnap to the closest point on the surface ? This is useful for the\nvtkPolygonalSurfaceContourLineInterpolator, when drawing contours\nalong the edges of a surface mesh. OFF by default.\n"},
  {"GetSnapToClosestPoint", PyvtkPolygonalSurfacePointPlacer_GetSnapToClosestPoint, METH_VARARGS,
   "GetSnapToClosestPoint(self) -> int\nC++: virtual vtkTypeBool GetSnapToClosestPoint()\n\n"},
  {"SnapToClosestPointOn", PyvtkPolygonalSurfacePointPlacer_SnapToClosestPointOn, METH_VARARGS,
   "SnapToClosestPointOn(self) -> None\nC++: virtual void SnapToClosestPointOn()\n\n"},
  {"SnapToClosestPointOff", PyvtkPolygonalSurfacePointPlacer_SnapToClosestPointOff, METH_VARARGS,
   "SnapToClosestPointOff(self) -> None\nC++: virtual void SnapToClosestPointOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPolygonalSurfacePointPlacer_Doc =
  "vtkPolygonalSurfacePointPlacer - Place points on the surface of\npolygonal data.\n\n"
  "Superclass: vtkPolyDataPointPlacer\n\n"
  "vtkPolygonalSurfacePointPlacer places points on polygonal data and is\n"
  "meant to be used in conjunction with\n"
  "vtkPolygonalSurfaceContourLineInterpolator.\n\n"
  "@warning\n"
  "You should have computed cell normals for the input polydata if you\n"
  "are specifying a distance offset.\n\n"
  "@sa\n"
  "vtkPointPlacer vtkPolyDataNormals\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolygonalSurfacePointPlacer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkPolygonalSurfacePointPlacer", // tp_name
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
  PyvtkPolygonalSurfacePointPlacer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolygonalSurfacePointPlacer_StaticNew()
{
  return vtkPolygonalSurfacePointPlacer::New();
}

PyObject *PyvtkPolygonalSurfacePointPlacer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolygonalSurfacePointPlacer_Type, PyvtkPolygonalSurfacePointPlacer_Methods,
    "vtkPolygonalSurfacePointPlacer",
 &PyvtkPolygonalSurfacePointPlacer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataPointPlacer_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolygonalSurfacePointPlacer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolygonalSurfacePointPlacerNode_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPolygonalSurfacePointPlacerNode", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkPolygonalSurfacePointPlacer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolygonalSurfacePointPlacer", o) != 0)
  {
    Py_DECREF(o);
  }

}

