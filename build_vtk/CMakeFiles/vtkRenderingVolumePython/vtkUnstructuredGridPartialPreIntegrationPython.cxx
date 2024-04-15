// python wrapper for vtkUnstructuredGridPartialPreIntegration
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGridPartialPreIntegration.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGridPartialPreIntegration(PyObject *dict); }
extern "C" { PyObject *PyvtkUnstructuredGridPartialPreIntegration_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew
#endif

static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridPartialPreIntegration::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPartialPreIntegration *op = static_cast<vtkUnstructuredGridPartialPreIntegration *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridPartialPreIntegration::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridPartialPreIntegration *tempr = vtkUnstructuredGridPartialPreIntegration::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPartialPreIntegration *op = static_cast<vtkUnstructuredGridPartialPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridPartialPreIntegration *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridPartialPreIntegration::NewInstance());

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
PyvtkUnstructuredGridPartialPreIntegration_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkUnstructuredGridPartialPreIntegration::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPartialPreIntegration *op = static_cast<vtkUnstructuredGridPartialPreIntegration *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkUnstructuredGridPartialPreIntegration::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPartialPreIntegration *op = static_cast<vtkUnstructuredGridPartialPreIntegration *>(vp);

  vtkVolume *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGridPartialPreIntegration::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_Integrate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Integrate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPartialPreIntegration *op = static_cast<vtkUnstructuredGridPartialPreIntegration *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  const size_t size3 = 4;
  float temp3[4];
  float save3[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->Integrate(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkUnstructuredGridPartialPreIntegration::Integrate(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IntegrateRay");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  const size_t size5 = 4;
  float temp5[4];
  float save5[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp5, save5, size5);

    vtkUnstructuredGridPartialPreIntegration::IntegrateRay(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IntegrateRay");

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  const size_t size3 = 3;
  double temp3[3];
  double temp4;
  const size_t size5 = 4;
  float temp5[4];
  float save5[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp5, save5, size5);

    vtkUnstructuredGridPartialPreIntegration::IntegrateRay(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_Methods[] = {
  {"IntegrateRay", PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_s1, METH_VARARGS | METH_STATIC,
   "dddddP *f"},
  {"IntegrateRay", PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_s2, METH_VARARGS | METH_STATIC,
   "dPdPdP *d *d *f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IntegrateRay");
  return nullptr;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_Psi(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Psi");

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    float tempr = vtkUnstructuredGridPartialPreIntegration::Psi(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_GetPsiTable(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPsiTable");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = vtkUnstructuredGridPartialPreIntegration::GetPsiTable(temp0);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_BuildPsiTable(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "BuildPsiTable");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkUnstructuredGridPartialPreIntegration::BuildPsiTable();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridPartialPreIntegration_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridPartialPreIntegration_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridPartialPreIntegration_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridPartialPreIntegration_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkUnstructuredGridPartialPreIntegration\nC++: static vtkUnstructuredGridPartialPreIntegration *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridPartialPreIntegration_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkUnstructuredGridPartialPreIntegration\nC++: vtkUnstructuredGridPartialPreIntegration *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkUnstructuredGridPartialPreIntegration_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkUnstructuredGridPartialPreIntegration_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkUnstructuredGridPartialPreIntegration_Initialize, METH_VARARGS,
   "Initialize(self, volume:vtkVolume, scalars:vtkDataArray) -> None\nC++: void Initialize(vtkVolume *volume, vtkDataArray *scalars)\n    override;\n\nSet up the integrator with the given properties and scalars.\n"},
  {"Integrate", PyvtkUnstructuredGridPartialPreIntegration_Integrate, METH_VARARGS,
   "Integrate(self, intersectionLengths:vtkDoubleArray,\n    nearIntersections:vtkDataArray, farIntersections:vtkDataArray,\n     color:[float, float, float, float]) -> None\nC++: void Integrate(vtkDoubleArray *intersectionLengths,\n    vtkDataArray *nearIntersections,\n    vtkDataArray *farIntersections, float color[4]) override;\n\nGiven a set of intersections (defined by the three arrays),\ncompute the piecewise integration of the array in front to back\norder. /c intersectionLengths holds the lengths of each piecewise\nsegment. /c nearIntersections and /c farIntersections hold the\nscalar values at the front and back of each segment.  /c color\nshould contain the RGBA value of the volume in front of the\nsegments passed in, and the result will be placed back into /c\ncolor.\n"},
  {"IntegrateRay", PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay, METH_VARARGS,
   "IntegrateRay(length:float, intensity_front:float,\n    attenuation_front:float, intensity_back:float,\n    attenuation_back:float, color:[float, float, float, float])\n    -> None\nC++: static void IntegrateRay(double length,\n    double intensity_front, double attenuation_front,\n    double intensity_back, double attenuation_back,\n    float color[4])\nIntegrateRay(length:float, color_front:(float, float, float),\n    attenuation_front:float, color_back:(float, float, float),\n    attenuation_back:float, color:[float, float, float, float])\n    -> None\nC++: static void IntegrateRay(double length,\n    const double color_front[3], double attenuation_front,\n    const double color_back[3], double attenuation_back,\n    float color[4])\n\nIntegrates a single ray segment.  color is blended with the\nresult (with color in front).  The result is written back into\ncolor.\n"},
  {"Psi", PyvtkUnstructuredGridPartialPreIntegration_Psi, METH_VARARGS,
   "Psi(taufD:float, taubD:float) -> float\nC++: static float Psi(float taufD, float taubD)\n\nLooks up Psi (as defined by Moreland and Angel, \"A Fast High\nAccuracy Volume Renderer for Unstructured Data\") in a table.  The\ntable must be created first, which happens on the first\ninstantiation of this class or when BuildPsiTable is first\ncalled.\n"},
  {"GetPsiTable", PyvtkUnstructuredGridPartialPreIntegration_GetPsiTable, METH_VARARGS,
   "GetPsiTable(size:int) -> Pointer\nC++: static float *GetPsiTable(int &size)\n\n"},
  {"BuildPsiTable", PyvtkUnstructuredGridPartialPreIntegration_BuildPsiTable, METH_VARARGS,
   "BuildPsiTable() -> None\nC++: static void BuildPsiTable()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkUnstructuredGridPartialPreIntegration_Doc =
  "vtkUnstructuredGridPartialPreIntegration - performs piecewise linear\nray integration.\n\n"
  "Superclass: vtkUnstructuredGridVolumeRayIntegrator\n\n"
  "vtkUnstructuredGridPartialPreIntegration performs piecewise linear\n"
  "ray integration.  This will give the same results as\n"
  "vtkUnstructuredGridLinearRayIntegration (with potentially a error due\n"
  "to table lookup quantization), but should be notably faster.  The\n"
  "algorithm used is given by Moreland and Angel, \"A Fast High Accuracy\n"
  "Volume Renderer for Unstructured Data.\"\n\n"
  "This class is thread safe only after the first instance is created.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkUnstructuredGridPartialPreIntegration_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolume.vtkUnstructuredGridPartialPreIntegration", // tp_name
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
  PyvtkUnstructuredGridPartialPreIntegration_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGridPartialPreIntegration_StaticNew()
{
  return vtkUnstructuredGridPartialPreIntegration::New();
}

PyObject *PyvtkUnstructuredGridPartialPreIntegration_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkUnstructuredGridPartialPreIntegration_Type, PyvtkUnstructuredGridPartialPreIntegration_Methods,
    "vtkUnstructuredGridPartialPreIntegration",
 &PyvtkUnstructuredGridPartialPreIntegration_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGridPartialPreIntegration(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridPartialPreIntegration_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridPartialPreIntegration", o) != 0)
  {
    Py_DECREF(o);
  }

}

