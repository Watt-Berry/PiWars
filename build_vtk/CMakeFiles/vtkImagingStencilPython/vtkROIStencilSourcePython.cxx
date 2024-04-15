// python wrapper for vtkROIStencilSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkROIStencilSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkROIStencilSource(PyObject *dict); }
extern "C" { PyObject *PyvtkROIStencilSource_ClassNew(); }


static PyObject *
PyvtkROIStencilSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkROIStencilSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkROIStencilSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkROIStencilSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkROIStencilSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkROIStencilSource *tempr = vtkROIStencilSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkROIStencilSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkROIStencilSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkROIStencilSource::NewInstance());

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
PyvtkROIStencilSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkROIStencilSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkROIStencilSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkROIStencilSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkROIStencilSource_GetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShape() :
      op->vtkROIStencilSource::GetShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkROIStencilSource_SetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShape(temp0);
    }
    else
    {
      op->vtkROIStencilSource::SetShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkROIStencilSource_GetShapeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShapeMinValue() :
      op->vtkROIStencilSource::GetShapeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkROIStencilSource_GetShapeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShapeMaxValue() :
      op->vtkROIStencilSource::GetShapeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkROIStencilSource_SetShapeToBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShapeToBox();
    }
    else
    {
      op->vtkROIStencilSource::SetShapeToBox();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkROIStencilSource_SetShapeToEllipsoid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToEllipsoid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShapeToEllipsoid();
    }
    else
    {
      op->vtkROIStencilSource::SetShapeToEllipsoid();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkROIStencilSource_SetShapeToCylinderX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToCylinderX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShapeToCylinderX();
    }
    else
    {
      op->vtkROIStencilSource::SetShapeToCylinderX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkROIStencilSource_SetShapeToCylinderY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToCylinderY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShapeToCylinderY();
    }
    else
    {
      op->vtkROIStencilSource::SetShapeToCylinderY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkROIStencilSource_SetShapeToCylinderZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToCylinderZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShapeToCylinderZ();
    }
    else
    {
      op->vtkROIStencilSource::SetShapeToCylinderZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkROIStencilSource_GetShapeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetShapeAsString() :
      op->vtkROIStencilSource::GetShapeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkROIStencilSource_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkROIStencilSource::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkROIStencilSource_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkROIStencilSource::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkROIStencilSource_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkROIStencilSource::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkROIStencilSource_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkROIStencilSource_SetBounds_s1(self, args);
    case 1:
      return PyvtkROIStencilSource_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}

static PyMethodDef PyvtkROIStencilSource_Methods[] = {
  {"IsTypeOf", PyvtkROIStencilSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkROIStencilSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkROIStencilSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkROIStencilSource\nC++: static vtkROIStencilSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkROIStencilSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkROIStencilSource\nC++: vtkROIStencilSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkROIStencilSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkROIStencilSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetShape", PyvtkROIStencilSource_GetShape, METH_VARARGS,
   "GetShape(self) -> int\nC++: virtual int GetShape()\n\nThe shape of the region of interest.  Cylinders can be oriented\nalong the X, Y, or Z axes.  The default shape is \"Box\".\n"},
  {"SetShape", PyvtkROIStencilSource_SetShape, METH_VARARGS,
   "SetShape(self, _arg:int) -> None\nC++: virtual void SetShape(int _arg)\n\n"},
  {"GetShapeMinValue", PyvtkROIStencilSource_GetShapeMinValue, METH_VARARGS,
   "GetShapeMinValue(self) -> int\nC++: virtual int GetShapeMinValue()\n\n"},
  {"GetShapeMaxValue", PyvtkROIStencilSource_GetShapeMaxValue, METH_VARARGS,
   "GetShapeMaxValue(self) -> int\nC++: virtual int GetShapeMaxValue()\n\n"},
  {"SetShapeToBox", PyvtkROIStencilSource_SetShapeToBox, METH_VARARGS,
   "SetShapeToBox(self) -> None\nC++: void SetShapeToBox()\n\n"},
  {"SetShapeToEllipsoid", PyvtkROIStencilSource_SetShapeToEllipsoid, METH_VARARGS,
   "SetShapeToEllipsoid(self) -> None\nC++: void SetShapeToEllipsoid()\n\n"},
  {"SetShapeToCylinderX", PyvtkROIStencilSource_SetShapeToCylinderX, METH_VARARGS,
   "SetShapeToCylinderX(self) -> None\nC++: void SetShapeToCylinderX()\n\n"},
  {"SetShapeToCylinderY", PyvtkROIStencilSource_SetShapeToCylinderY, METH_VARARGS,
   "SetShapeToCylinderY(self) -> None\nC++: void SetShapeToCylinderY()\n\n"},
  {"SetShapeToCylinderZ", PyvtkROIStencilSource_SetShapeToCylinderZ, METH_VARARGS,
   "SetShapeToCylinderZ(self) -> None\nC++: void SetShapeToCylinderZ()\n\n"},
  {"GetShapeAsString", PyvtkROIStencilSource_GetShapeAsString, METH_VARARGS,
   "GetShapeAsString(self) -> str\nC++: virtual const char *GetShapeAsString()\n\n"},
  {"GetBounds", PyvtkROIStencilSource_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\n\nSet the bounds of the region of interest.  The bounds take the\nspacing and origin into account.\n"},
  {"SetBounds", PyvtkROIStencilSource_SetBounds, METH_VARARGS,
   "SetBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetBounds(self, _arg:(float, float, float, float, float, float))\n    -> None\nC++: virtual void SetBounds(const double _arg[6])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkROIStencilSource_Doc =
  "vtkROIStencilSource - create simple mask shapes\n\n"
  "Superclass: vtkImageStencilSource\n\n"
  "vtkROIStencilSource will create an image stencil with a simple shape\n"
  "like a box, a sphere, or a cylinder.  Its output can be used with\n"
  "vtkImageStecil or other vtk classes that apply a stencil to an image.\n"
  "@sa\n"
  "vtkImplicitFunctionToImageStencil vtkLassoStencilSource@par Thanks:\n"
  "Thanks to David Gobbi for contributing this class to VTK.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkROIStencilSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingStencil.vtkROIStencilSource", // tp_name
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
  PyvtkROIStencilSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkROIStencilSource_StaticNew()
{
  return vtkROIStencilSource::New();
}

PyObject *PyvtkROIStencilSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkROIStencilSource_Type, PyvtkROIStencilSource_Methods,
    "vtkROIStencilSource",
 &PyvtkROIStencilSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageStencilSource");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "BOX", vtkROIStencilSource::BOX },
        { "ELLIPSOID", vtkROIStencilSource::ELLIPSOID },
        { "CYLINDERX", vtkROIStencilSource::CYLINDERX },
        { "CYLINDERY", vtkROIStencilSource::CYLINDERY },
        { "CYLINDERZ", vtkROIStencilSource::CYLINDERZ },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkROIStencilSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkROIStencilSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkROIStencilSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

