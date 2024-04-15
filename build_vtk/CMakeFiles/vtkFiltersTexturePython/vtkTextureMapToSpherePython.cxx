// python wrapper for vtkTextureMapToSphere
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTextureMapToSphere.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextureMapToSphere(PyObject *dict); }
extern "C" { PyObject *PyvtkTextureMapToSphere_ClassNew(); }


static PyObject *
PyvtkTextureMapToSphere_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextureMapToSphere::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextureMapToSphere::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextureMapToSphere *tempr = vtkTextureMapToSphere::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureMapToSphere *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextureMapToSphere::NewInstance());

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
PyvtkTextureMapToSphere_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTextureMapToSphere::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTextureMapToSphere::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextureMapToSphere::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToSphere_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkTextureMapToSphere::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToSphere_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextureMapToSphere_SetCenter_s1(self, args);
    case 1:
      return PyvtkTextureMapToSphere_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkTextureMapToSphere_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkTextureMapToSphere::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_SetAutomaticSphereGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticSphereGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticSphereGeneration(temp0);
    }
    else
    {
      op->vtkTextureMapToSphere::SetAutomaticSphereGeneration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_GetAutomaticSphereGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticSphereGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticSphereGeneration() :
      op->vtkTextureMapToSphere::GetAutomaticSphereGeneration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_AutomaticSphereGenerationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticSphereGenerationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticSphereGenerationOn();
    }
    else
    {
      op->vtkTextureMapToSphere::AutomaticSphereGenerationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_AutomaticSphereGenerationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticSphereGenerationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticSphereGenerationOff();
    }
    else
    {
      op->vtkTextureMapToSphere::AutomaticSphereGenerationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_SetPreventSeam(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreventSeam");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreventSeam(temp0);
    }
    else
    {
      op->vtkTextureMapToSphere::SetPreventSeam(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_GetPreventSeam(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreventSeam");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreventSeam() :
      op->vtkTextureMapToSphere::GetPreventSeam());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_PreventSeamOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreventSeamOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreventSeamOn();
    }
    else
    {
      op->vtkTextureMapToSphere::PreventSeamOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_PreventSeamOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreventSeamOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreventSeamOff();
    }
    else
    {
      op->vtkTextureMapToSphere::PreventSeamOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_ComputeCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->ComputeCenter(temp0);
    }
    else
    {
      op->vtkTextureMapToSphere::ComputeCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTextureMapToSphere_Methods[] = {
  {"IsTypeOf", PyvtkTextureMapToSphere_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextureMapToSphere_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextureMapToSphere_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTextureMapToSphere\nC++: static vtkTextureMapToSphere *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextureMapToSphere_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTextureMapToSphere\nC++: vtkTextureMapToSphere *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTextureMapToSphere_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTextureMapToSphere_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCenter", PyvtkTextureMapToSphere_SetCenter, METH_VARARGS,
   "SetCenter(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCenter(double _arg1, double _arg2,\n    double _arg3)\nSetCenter(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCenter(const double _arg[3])\n\nSpecify a point defining the center of the sphere.\n"},
  {"GetCenter", PyvtkTextureMapToSphere_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: virtual double *GetCenter()\n\n"},
  {"SetAutomaticSphereGeneration", PyvtkTextureMapToSphere_SetAutomaticSphereGeneration, METH_VARARGS,
   "SetAutomaticSphereGeneration(self, _arg:int) -> None\nC++: virtual void SetAutomaticSphereGeneration(vtkTypeBool _arg)\n\nTurn on/off automatic sphere generation. This means it\nautomatically finds the sphere center.\n"},
  {"GetAutomaticSphereGeneration", PyvtkTextureMapToSphere_GetAutomaticSphereGeneration, METH_VARARGS,
   "GetAutomaticSphereGeneration(self) -> int\nC++: virtual vtkTypeBool GetAutomaticSphereGeneration()\n\n"},
  {"AutomaticSphereGenerationOn", PyvtkTextureMapToSphere_AutomaticSphereGenerationOn, METH_VARARGS,
   "AutomaticSphereGenerationOn(self) -> None\nC++: virtual void AutomaticSphereGenerationOn()\n\n"},
  {"AutomaticSphereGenerationOff", PyvtkTextureMapToSphere_AutomaticSphereGenerationOff, METH_VARARGS,
   "AutomaticSphereGenerationOff(self) -> None\nC++: virtual void AutomaticSphereGenerationOff()\n\n"},
  {"SetPreventSeam", PyvtkTextureMapToSphere_SetPreventSeam, METH_VARARGS,
   "SetPreventSeam(self, _arg:int) -> None\nC++: virtual void SetPreventSeam(vtkTypeBool _arg)\n\nControl how the texture coordinates are generated. If PreventSeam\nis set, the s-coordinate ranges from 0->1 and 1->0 corresponding\nto the theta angle variation between 0->180 and 180->0 degrees.\nOtherwise, the s-coordinate ranges from 0->1 between 0->360\ndegrees.\n"},
  {"GetPreventSeam", PyvtkTextureMapToSphere_GetPreventSeam, METH_VARARGS,
   "GetPreventSeam(self) -> int\nC++: virtual vtkTypeBool GetPreventSeam()\n\n"},
  {"PreventSeamOn", PyvtkTextureMapToSphere_PreventSeamOn, METH_VARARGS,
   "PreventSeamOn(self) -> None\nC++: virtual void PreventSeamOn()\n\n"},
  {"PreventSeamOff", PyvtkTextureMapToSphere_PreventSeamOff, METH_VARARGS,
   "PreventSeamOff(self) -> None\nC++: virtual void PreventSeamOff()\n\n"},
  {"ComputeCenter", PyvtkTextureMapToSphere_ComputeCenter, METH_VARARGS,
   "ComputeCenter(self, input:vtkDataSet) -> None\nC++: virtual void ComputeCenter(vtkDataSet *input)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTextureMapToSphere_Doc =
  "vtkTextureMapToSphere - generate texture coordinates by mapping\npoints to sphere\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkTextureMapToSphere is a filter that generates 2D texture\n"
  "coordinates by mapping input dataset points onto a sphere. The sphere\n"
  "can either be user specified or generated automatically. (The sphere\n"
  "is generated automatically by computing the center (i.e., averaged\n"
  "coordinates) of the sphere.)  Note that the generated texture\n"
  "coordinates range between (0,1). The s-coordinate lies in the angular\n"
  "direction around the z-axis, measured counter-clockwise from the\n"
  "x-axis. The t-coordinate lies in the angular direction measured down\n"
  "from the north pole towards the south pole.\n\n"
  "A special ivar controls how the s-coordinate is generated. If\n"
  "PreventSeam is set to true, the s-texture varies from 0->1 and then\n"
  "1->0 (corresponding to angles of 0->180 and 180->360).\n\n"
  "@warning\n"
  "The resulting texture coordinates will lie between (0,1), and the\n"
  "texture coordinates are determined with respect to the modeler's\n"
  "x-y-z coordinate system. Use the class vtkTransformTextureCoords to\n"
  "linearly scale and shift the origin of the texture coordinates (if\n"
  "necessary).\n\n"
  "@sa\n"
  "vtkTextureMapToPlane vtkTextureMapToCylinder vtkTransformTexture\n"
  "vtkThresholdTextureCoords\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTextureMapToSphere_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersTexture.vtkTextureMapToSphere", // tp_name
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
  PyvtkTextureMapToSphere_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextureMapToSphere_StaticNew()
{
  return vtkTextureMapToSphere::New();
}

PyObject *PyvtkTextureMapToSphere_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTextureMapToSphere_Type, PyvtkTextureMapToSphere_Methods,
    "vtkTextureMapToSphere",
 &PyvtkTextureMapToSphere_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextureMapToSphere(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextureMapToSphere_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextureMapToSphere", o) != 0)
  {
    Py_DECREF(o);
  }

}

