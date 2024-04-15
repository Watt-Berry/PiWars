// python wrapper for vtkUnstructuredGridPreIntegration
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGridPreIntegration.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGridPreIntegration(PyObject *dict); }
extern "C" { PyObject *PyvtkUnstructuredGridPreIntegration_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew
#endif

static PyObject *
PyvtkUnstructuredGridPreIntegration_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridPreIntegration::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridPreIntegration::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridPreIntegration *tempr = vtkUnstructuredGridPreIntegration::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridPreIntegration *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridPreIntegration::NewInstance());

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
PyvtkUnstructuredGridPreIntegration_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkUnstructuredGridPreIntegration::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkUnstructuredGridPreIntegration::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

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
      op->vtkUnstructuredGridPreIntegration::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_Integrate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Integrate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

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
      op->vtkUnstructuredGridPreIntegration::Integrate(temp0, temp1, temp2, temp3);
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
PyvtkUnstructuredGridPreIntegration_GetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridVolumeRayIntegrator *tempr = (ap.IsBound() ?
      op->GetIntegrator() :
      op->vtkUnstructuredGridPreIntegration::GetIntegrator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  vtkUnstructuredGridVolumeRayIntegrator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGridVolumeRayIntegrator"))
  {
    if (ap.IsBound())
    {
      op->SetIntegrator(temp0);
    }
    else
    {
      op->vtkUnstructuredGridPreIntegration::SetIntegrator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SetIntegrationTableScalarResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationTableScalarResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationTableScalarResolution(temp0);
    }
    else
    {
      op->vtkUnstructuredGridPreIntegration::SetIntegrationTableScalarResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableScalarResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationTableScalarResolution() :
      op->vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SetIntegrationTableLengthResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationTableLengthResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationTableLengthResolution(temp0);
    }
    else
    {
      op->vtkUnstructuredGridPreIntegration::SetIntegrationTableLengthResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableLengthResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableLengthResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationTableLengthResolution() :
      op->vtkUnstructuredGridPreIntegration::GetIntegrationTableLengthResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableScalarShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntegrationTableScalarShift(temp0) :
      op->vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarShift(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableScalarScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntegrationTableScalarScale(temp0) :
      op->vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarScale(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableLengthScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableLengthScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntegrationTableLengthScale() :
      op->vtkUnstructuredGridPreIntegration::GetIntegrationTableLengthScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIncrementalPreIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrementalPreIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIncrementalPreIntegration() :
      op->vtkUnstructuredGridPreIntegration::GetIncrementalPreIntegration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SetIncrementalPreIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncrementalPreIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncrementalPreIntegration(temp0);
    }
    else
    {
      op->vtkUnstructuredGridPreIntegration::SetIncrementalPreIntegration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_IncrementalPreIntegrationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncrementalPreIntegrationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncrementalPreIntegrationOn();
    }
    else
    {
      op->vtkUnstructuredGridPreIntegration::IncrementalPreIntegrationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_IncrementalPreIntegrationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncrementalPreIntegrationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncrementalPreIntegrationOff();
    }
    else
    {
      op->vtkUnstructuredGridPreIntegration::IncrementalPreIntegrationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetPreIntegrationTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreIntegrationTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    float *tempr = (ap.IsBound() ?
      op->GetPreIntegrationTable(temp0) :
      op->vtkUnstructuredGridPreIntegration::GetPreIntegrationTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetTableEntry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int temp3 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    float *tempr = (ap.IsBound() ?
      op->GetTableEntry(temp0, temp1, temp2, temp3) :
      op->vtkUnstructuredGridPreIntegration::GetTableEntry(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIndexedTableEntry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedTableEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    float *tempr = (ap.IsBound() ?
      op->GetIndexedTableEntry(temp0, temp1, temp2, temp3) :
      op->vtkUnstructuredGridPreIntegration::GetIndexedTableEntry(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridPreIntegration_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridPreIntegration_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridPreIntegration_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridPreIntegration_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkUnstructuredGridPreIntegration\nC++: static vtkUnstructuredGridPreIntegration *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridPreIntegration_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkUnstructuredGridPreIntegration\nC++: vtkUnstructuredGridPreIntegration *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkUnstructuredGridPreIntegration_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkUnstructuredGridPreIntegration_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkUnstructuredGridPreIntegration_Initialize, METH_VARARGS,
   "Initialize(self, volume:vtkVolume, scalars:vtkDataArray) -> None\nC++: void Initialize(vtkVolume *volume, vtkDataArray *scalars)\n    override;\n\nSet up the integrator with the given properties and scalars.\n"},
  {"Integrate", PyvtkUnstructuredGridPreIntegration_Integrate, METH_VARARGS,
   "Integrate(self, intersectionLengths:vtkDoubleArray,\n    nearIntersections:vtkDataArray, farIntersections:vtkDataArray,\n     color:[float, float, float, float]) -> None\nC++: void Integrate(vtkDoubleArray *intersectionLengths,\n    vtkDataArray *nearIntersections,\n    vtkDataArray *farIntersections, float color[4]) override;\n\nGiven a set of intersections (defined by the three arrays),\ncompute the piecewise integration of the array in front to back\norder. /c intersectionLengths holds the lengths of each piecewise\nsegment. /c nearIntersections and /c farIntersections hold the\nscalar values at the front and back of each segment.  /c color\nshould contain the RGBA value of the volume in front of the\nsegments passed in, and the result will be placed back into /c\ncolor.\n"},
  {"GetIntegrator", PyvtkUnstructuredGridPreIntegration_GetIntegrator, METH_VARARGS,
   "GetIntegrator(self) -> vtkUnstructuredGridVolumeRayIntegrator\nC++: virtual vtkUnstructuredGridVolumeRayIntegrator *GetIntegrator(\n    )\n\nThe class used to fill the pre integration table.  By default, a\nvtkUnstructuredGridPartialPreIntegration is built.\n"},
  {"SetIntegrator", PyvtkUnstructuredGridPreIntegration_SetIntegrator, METH_VARARGS,
   "SetIntegrator(self, __a:vtkUnstructuredGridVolumeRayIntegrator)\n    -> None\nC++: virtual void SetIntegrator(\n    vtkUnstructuredGridVolumeRayIntegrator *)\n\n"},
  {"SetIntegrationTableScalarResolution", PyvtkUnstructuredGridPreIntegration_SetIntegrationTableScalarResolution, METH_VARARGS,
   "SetIntegrationTableScalarResolution(self, _arg:int) -> None\nC++: virtual void SetIntegrationTableScalarResolution(int _arg)\n\nSet/Get the size of the integration table built.\n"},
  {"GetIntegrationTableScalarResolution", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarResolution, METH_VARARGS,
   "GetIntegrationTableScalarResolution(self) -> int\nC++: virtual int GetIntegrationTableScalarResolution()\n\n"},
  {"SetIntegrationTableLengthResolution", PyvtkUnstructuredGridPreIntegration_SetIntegrationTableLengthResolution, METH_VARARGS,
   "SetIntegrationTableLengthResolution(self, _arg:int) -> None\nC++: virtual void SetIntegrationTableLengthResolution(int _arg)\n\n"},
  {"GetIntegrationTableLengthResolution", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableLengthResolution, METH_VARARGS,
   "GetIntegrationTableLengthResolution(self) -> int\nC++: virtual int GetIntegrationTableLengthResolution()\n\n"},
  {"GetIntegrationTableScalarShift", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarShift, METH_VARARGS,
   "GetIntegrationTableScalarShift(self, component:int=0) -> float\nC++: virtual double GetIntegrationTableScalarShift(\n    int component=0)\n\nGet how an integration table is indexed.\n"},
  {"GetIntegrationTableScalarScale", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarScale, METH_VARARGS,
   "GetIntegrationTableScalarScale(self, component:int=0) -> float\nC++: virtual double GetIntegrationTableScalarScale(\n    int component=0)\n\n"},
  {"GetIntegrationTableLengthScale", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableLengthScale, METH_VARARGS,
   "GetIntegrationTableLengthScale(self) -> float\nC++: virtual double GetIntegrationTableLengthScale()\n\n"},
  {"GetIncrementalPreIntegration", PyvtkUnstructuredGridPreIntegration_GetIncrementalPreIntegration, METH_VARARGS,
   "GetIncrementalPreIntegration(self) -> int\nC++: virtual vtkTypeBool GetIncrementalPreIntegration()\n\nGet/set whether to use incremental pre-integration (by default\nit's on).  Incremental pre-integration is much faster but can\nintroduce error due to numerical imprecision.  Under most\ncircumstances, the error is not noticeable.\n"},
  {"SetIncrementalPreIntegration", PyvtkUnstructuredGridPreIntegration_SetIncrementalPreIntegration, METH_VARARGS,
   "SetIncrementalPreIntegration(self, _arg:int) -> None\nC++: virtual void SetIncrementalPreIntegration(vtkTypeBool _arg)\n\n"},
  {"IncrementalPreIntegrationOn", PyvtkUnstructuredGridPreIntegration_IncrementalPreIntegrationOn, METH_VARARGS,
   "IncrementalPreIntegrationOn(self) -> None\nC++: virtual void IncrementalPreIntegrationOn()\n\n"},
  {"IncrementalPreIntegrationOff", PyvtkUnstructuredGridPreIntegration_IncrementalPreIntegrationOff, METH_VARARGS,
   "IncrementalPreIntegrationOff(self) -> None\nC++: virtual void IncrementalPreIntegrationOff()\n\n"},
  {"GetPreIntegrationTable", PyvtkUnstructuredGridPreIntegration_GetPreIntegrationTable, METH_VARARGS,
   "GetPreIntegrationTable(self, component:int=0) -> Pointer\nC++: virtual float *GetPreIntegrationTable(int component=0)\n\nGet the partial pre-integration table for the given scalar\ncomponent. The tables are built when Initialize is called.  A\nsegment of length d with a front scalar of sf and a back scalar\nof sb is referenced in the resulting table as 4 * ((l *\nIntegrationTableLengthScale) * \\c\nIntegrationTableScalarResolution *\nIntegrationTableScalarResolution + (sb *\nIntegrationTableScalarScale + \\c IntegrationTableScalarShift) *\nIntegrationTableScalarResolution + (sf *\nIntegrationTableScalarScale + \\c IntegrationTableScalarShift)).\n"},
  {"GetTableEntry", PyvtkUnstructuredGridPreIntegration_GetTableEntry, METH_VARARGS,
   "GetTableEntry(self, scalar_front:float, scalar_back:float,\n    length:float, component:int=0) -> Pointer\nC++: float *GetTableEntry(double scalar_front, double scalar_back,\n     double length, int component=0)\n\nGet an entry (RGBA) in one of the pre-integration tables.  The\ntables are built when Initialize is called.\n"},
  {"GetIndexedTableEntry", PyvtkUnstructuredGridPreIntegration_GetIndexedTableEntry, METH_VARARGS,
   "GetIndexedTableEntry(self, scalar_front_index:int,\n    scalar_back_index:int, length_index:int, component:int=0)\n    -> Pointer\nC++: float *GetIndexedTableEntry(int scalar_front_index,\n    int scalar_back_index, int length_index, int component=0)\n\nLike GetTableEntry, except the inputs are scaled indices into the\ntable rather than than the actual scalar and length values.  Use\nGetTableEntry unless you are really sure you know what you are\ndoing.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkUnstructuredGridPreIntegration_Doc =
  "vtkUnstructuredGridPreIntegration - performs ray integration with\npre-integration tables.\n\n"
  "Superclass: vtkUnstructuredGridVolumeRayIntegrator\n\n"
  "vtkUnstructuredGridPreIntegration performs ray integration by looking\n"
  "into a precomputed table.  The result should be equivalent to that\n"
  "computed by vtkUnstructuredGridLinearRayIntegrator and\n"
  "vtkUnstructuredGridPartialPreIntegration, but faster than either one.\n"
  "The pre-integration algorithm was first introduced by Roettger,\n"
  "Kraus, and Ertl in \"Hardware-Accelerated Volume And Isosurface\n"
  "Rendering Based On Cell-Projection.\"\n\n"
  "Due to table size limitations, a table can only be indexed by\n"
  "independent scalars.  Thus, dependent scalars are not supported.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkUnstructuredGridPreIntegration_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolume.vtkUnstructuredGridPreIntegration", // tp_name
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
  PyvtkUnstructuredGridPreIntegration_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGridPreIntegration_StaticNew()
{
  return vtkUnstructuredGridPreIntegration::New();
}

PyObject *PyvtkUnstructuredGridPreIntegration_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkUnstructuredGridPreIntegration_Type, PyvtkUnstructuredGridPreIntegration_Methods,
    "vtkUnstructuredGridPreIntegration",
 &PyvtkUnstructuredGridPreIntegration_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGridPreIntegration(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridPreIntegration_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridPreIntegration", o) != 0)
  {
    Py_DECREF(o);
  }

}

