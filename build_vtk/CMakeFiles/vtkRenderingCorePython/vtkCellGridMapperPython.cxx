// python wrapper for vtkCellGridMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellGridMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellGridMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkCellGridMapper_ClassNew(); }

#ifndef DECLARED_PyvtkMapper_ClassNew
extern "C" { PyObject *PyvtkMapper_ClassNew(); }
#define DECLARED_PyvtkMapper_ClassNew
#endif

static PyObject *
PyvtkCellGridMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellGridMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridMapper *op = static_cast<vtkCellGridMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellGridMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellGridMapper *tempr = vtkCellGridMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridMapper *op = static_cast<vtkCellGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGridMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellGridMapper::NewInstance());

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
PyvtkCellGridMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellGridMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridMapper *op = static_cast<vtkCellGridMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellGridMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridMapper_SetVisualizePCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisualizePCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridMapper *op = static_cast<vtkCellGridMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisualizePCoords(temp0);
    }
    else
    {
      op->vtkCellGridMapper::SetVisualizePCoords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridMapper_GetVisualizePCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisualizePCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridMapper *op = static_cast<vtkCellGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVisualizePCoords() :
      op->vtkCellGridMapper::GetVisualizePCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridMapper_SetVisualizeBasisFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisualizeBasisFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridMapper *op = static_cast<vtkCellGridMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisualizeBasisFunction(temp0);
    }
    else
    {
      op->vtkCellGridMapper::SetVisualizeBasisFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridMapper_GetVisualizeBasisFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisualizeBasisFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridMapper *op = static_cast<vtkCellGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVisualizeBasisFunction() :
      op->vtkCellGridMapper::GetVisualizeBasisFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridMapper *op = static_cast<vtkCellGridMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkCellGridMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridMapper *op = static_cast<vtkCellGridMapper *>(vp);

  vtkCellGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellGrid"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkCellGridMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridMapper *op = static_cast<vtkCellGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGrid *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkCellGridMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridMapper_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridMapper *op = static_cast<vtkCellGridMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Update(temp0);
    }
    else
    {
      op->vtkCellGridMapper::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellGridMapper_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridMapper *op = static_cast<vtkCellGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkCellGridMapper::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellGridMapper_Update_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridMapper *op = static_cast<vtkCellGridMapper *>(vp);

  int temp0;
  vtkInformationVector *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformationVector"))
  {
    int tempr = (ap.IsBound() ?
      op->Update(temp0, temp1) :
      op->vtkCellGridMapper::Update(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellGridMapper_Update_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridMapper *op = static_cast<vtkCellGridMapper *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Update(temp0) :
      op->vtkCellGridMapper::Update(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellGridMapper_Update_Methods[] = {
  {"Update", PyvtkCellGridMapper_Update_s1, METH_VARARGS,
   "@i"},
  {"Update", PyvtkCellGridMapper_Update_s4, METH_VARARGS,
   "@V *vtkInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellGridMapper_Update(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellGridMapper_Update_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkCellGridMapper_Update_s2(self, args);
    case 2:
      return PyvtkCellGridMapper_Update_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return nullptr;
}


static PyObject *
PyvtkCellGridMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridMapper *op = static_cast<vtkCellGridMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkCellGridMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkCellGridMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridMapper *op = static_cast<vtkCellGridMapper *>(vp);

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
      op->vtkCellGridMapper::GetBounds(temp0);
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
PyvtkCellGridMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkCellGridMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkCellGridMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}

static PyMethodDef PyvtkCellGridMapper_Methods[] = {
  {"IsTypeOf", PyvtkCellGridMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellGridMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellGridMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellGridMapper\nC++: static vtkCellGridMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellGridMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellGridMapper\nC++: vtkCellGridMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellGridMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellGridMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetVisualizePCoords", PyvtkCellGridMapper_SetVisualizePCoords, METH_VARARGS,
   "SetVisualizePCoords(self, _arg:int) -> None\nC++: virtual void SetVisualizePCoords(int _arg)\n\n"},
  {"GetVisualizePCoords", PyvtkCellGridMapper_GetVisualizePCoords, METH_VARARGS,
   "GetVisualizePCoords(self) -> int\nC++: virtual int GetVisualizePCoords()\n\n"},
  {"SetVisualizeBasisFunction", PyvtkCellGridMapper_SetVisualizeBasisFunction, METH_VARARGS,
   "SetVisualizeBasisFunction(self, _arg:int) -> None\nC++: virtual void SetVisualizeBasisFunction(int _arg)\n\n"},
  {"GetVisualizeBasisFunction", PyvtkCellGridMapper_GetVisualizeBasisFunction, METH_VARARGS,
   "GetVisualizeBasisFunction(self) -> int\nC++: virtual int GetVisualizeBasisFunction()\n\n"},
  {"Render", PyvtkCellGridMapper_Render, METH_VARARGS,
   "Render(self, __a:vtkRenderer, __b:vtkActor) -> None\nC++: void Render(vtkRenderer *, vtkActor *) override;\n\nImplemented by sub classes. Actual rendering is done here.\n"},
  {"SetInputData", PyvtkCellGridMapper_SetInputData, METH_VARARGS,
   "SetInputData(self, in_:vtkCellGrid) -> None\nC++: void SetInputData(vtkCellGrid *in)\n\nSpecify the input data to map.\n"},
  {"GetInput", PyvtkCellGridMapper_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkCellGrid\nC++: vtkCellGrid *GetInput()\n\nGet the input as a vtkDataSet.  This method is overridden in the\nspecialized mapper classes to return more specific data types.\n"},
  {"Update", PyvtkCellGridMapper_Update, METH_VARARGS,
   "Update(self, port:int) -> None\nC++: void Update(int port) override;\nUpdate(self) -> None\nC++: void Update() override;\nUpdate(self, port:int, requests:vtkInformationVector) -> int\nC++: vtkTypeBool Update(int port, vtkInformationVector *requests)\n    override;\nUpdate(self, requests:vtkInformation) -> int\nC++: vtkTypeBool Update(vtkInformation *requests) override;\n\nBring this algorithm's outputs up-to-date.\n"},
  {"GetBounds", PyvtkCellGridMapper_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCellGridMapper_Doc =
  "vtkCellGridMapper - map a vtkCellGrid to graphics primitives.\n\n"
  "Superclass: vtkMapper\n\n"
  "This mapper is a prototype to help enhance VTK visualization\n"
  "capabilities for Discontinuous Galerkin fields. For now, it requires\n"
  "a `vtkDataObject` input.\n\n"
  "A vtkCellGrid does not couple the fields with geometric degrees of\n"
  "freedom, unlike vtkDataSet. This is useful to render Discontinuous\n"
  "Galerkin fields where two points sharing a common face might not have\n"
  "the same field value (discontinuous).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGridMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkCellGridMapper", // tp_name
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
  PyvtkCellGridMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellGridMapper_StaticNew()
{
  return vtkCellGridMapper::New();
}

PyObject *PyvtkCellGridMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellGridMapper_Type, PyvtkCellGridMapper_Methods,
    "vtkCellGridMapper",
 &PyvtkCellGridMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellGridMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellGridMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellGridMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

