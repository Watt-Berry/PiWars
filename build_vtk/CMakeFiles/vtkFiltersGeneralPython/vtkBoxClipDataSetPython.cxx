// python wrapper for vtkBoxClipDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBoxClipDataSet.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBoxClipDataSet(PyObject *dict); }
extern "C" { PyObject *PyvtkBoxClipDataSet_ClassNew(); }


static PyObject *
PyvtkBoxClipDataSet_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBoxClipDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoxClipDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBoxClipDataSet *tempr = vtkBoxClipDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBoxClipDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoxClipDataSet::NewInstance());

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
PyvtkBoxClipDataSet_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBoxClipDataSet::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBoxClipDataSet::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SetBoxClip_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

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
      op->SetBoxClip(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkBoxClipDataSet::SetBoxClip(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoxClipDataSet_SetBoxClip_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(size3);
  double *temp3 = store3.Data();
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(size4);
  double *temp4 = store4.Data();
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(size5);
  double *temp5 = store5.Data();
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<double> store6(size6);
  double *temp6 = store6.Data();
  size_t size7 = ap.GetArgSize(7);
  vtkPythonArgs::Array<double> store7(size7);
  double *temp7 = store7.Data();
  size_t size8 = ap.GetArgSize(8);
  vtkPythonArgs::Array<double> store8(size8);
  double *temp8 = store8.Data();
  size_t size9 = ap.GetArgSize(9);
  vtkPythonArgs::Array<double> store9(size9);
  double *temp9 = store9.Data();
  size_t size10 = ap.GetArgSize(10);
  vtkPythonArgs::Array<double> store10(size10);
  double *temp10 = store10.Data();
  size_t size11 = ap.GetArgSize(11);
  vtkPythonArgs::Array<double> store11(size11);
  double *temp11 = store11.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(12) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7) &&
      ap.GetArray(temp8, size8) &&
      ap.GetArray(temp9, size9) &&
      ap.GetArray(temp10, size10) &&
      ap.GetArray(temp11, size11))
  {
    if (ap.IsBound())
    {
      op->SetBoxClip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11);
    }
    else
    {
      op->vtkBoxClipDataSet::SetBoxClip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoxClipDataSet_SetBoxClip(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkBoxClipDataSet_SetBoxClip_s1(self, args);
    case 12:
      return PyvtkBoxClipDataSet_SetBoxClip_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBoxClip");
  return nullptr;
}


static PyObject *
PyvtkBoxClipDataSet_SetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateClipScalars(temp0);
    }
    else
    {
      op->vtkBoxClipDataSet::SetGenerateClipScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClipScalars() :
      op->vtkBoxClipDataSet::GetGenerateClipScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GenerateClipScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClipScalarsOn();
    }
    else
    {
      op->vtkBoxClipDataSet::GenerateClipScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GenerateClipScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClipScalarsOff();
    }
    else
    {
      op->vtkBoxClipDataSet::GenerateClipScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateClippedOutput(temp0);
    }
    else
    {
      op->vtkBoxClipDataSet::SetGenerateClippedOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClippedOutput() :
      op->vtkBoxClipDataSet::GetGenerateClippedOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GenerateClippedOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClippedOutputOn();
    }
    else
    {
      op->vtkBoxClipDataSet::GenerateClippedOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GenerateClippedOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClippedOutputOff();
    }
    else
    {
      op->vtkBoxClipDataSet::GenerateClippedOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetClippedOutput() :
      op->vtkBoxClipDataSet::GetClippedOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetNumberOfOutputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfOutputs() :
      op->vtkBoxClipDataSet::GetNumberOfOutputs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkBoxClipDataSet::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkBoxClipDataSet::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkBoxClipDataSet::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkBoxClipDataSet::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkBoxClipDataSet::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkBoxClipDataSet::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_InterpolateEdge(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolateEdge");

  vtkDataSetAttributes *temp0 = nullptr;
  long long temp1;
  long long temp2;
  long long temp3;
  double temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkBoxClipDataSet::InterpolateEdge(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_MinEdgeF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MinEdgeF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned int> store0(size0);
  unsigned int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned int> store2(2*size2);
  unsigned int *temp2 = store2.Data();
  unsigned int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->MinEdgeF(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBoxClipDataSet::MinEdgeF(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_PyramidToTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PyramidToTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  vtkCellArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->PyramidToTetra(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBoxClipDataSet::PyramidToTetra(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_WedgeToTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WedgeToTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  vtkCellArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->WedgeToTetra(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBoxClipDataSet::WedgeToTetra(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_CellGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  vtkCellArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->CellGrid(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBoxClipDataSet::CellGrid(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_CreateTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  vtkCellArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->CreateTetra(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBoxClipDataSet::CreateTetra(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkGenericCell *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  long long temp7;
  vtkCellData *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->ClipBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkBoxClipDataSet::ClipBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkGenericCell *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  long long temp7;
  vtkCellData *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->ClipHexahedron(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkBoxClipDataSet::ClipHexahedron(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipBox2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipBox2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkGenericCell *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  long long temp7;
  vtkCellData *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->ClipBox2D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkBoxClipDataSet::ClipBox2D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipHexahedron2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipHexahedron2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkGenericCell *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  long long temp7;
  vtkCellData *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->ClipHexahedron2D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkBoxClipDataSet::ClipHexahedron2D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipBox1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipBox1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkGenericCell *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  long long temp7;
  vtkCellData *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->ClipBox1D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkBoxClipDataSet::ClipBox1D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipHexahedron1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipHexahedron1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkGenericCell *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  long long temp7;
  vtkCellData *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->ClipHexahedron1D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkBoxClipDataSet::ClipHexahedron1D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipBox0D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipBox0D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkGenericCell *temp0 = nullptr;
  vtkIncrementalPointLocator *temp1 = nullptr;
  vtkCellArray *temp2 = nullptr;
  vtkPointData *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkCellData *temp5 = nullptr;
  long long temp6;
  vtkCellData *temp7 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkGenericCell") &&
      ap.GetVTKObject(temp1, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetVTKObject(temp3, "vtkPointData") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkCellData") &&
      ap.GetValue(temp6) &&
      ap.GetVTKObject(temp7, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->ClipBox0D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkBoxClipDataSet::ClipBox0D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipHexahedron0D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipHexahedron0D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkGenericCell *temp0 = nullptr;
  vtkIncrementalPointLocator *temp1 = nullptr;
  vtkCellArray *temp2 = nullptr;
  vtkPointData *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkCellData *temp5 = nullptr;
  long long temp6;
  vtkCellData *temp7 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkGenericCell") &&
      ap.GetVTKObject(temp1, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetVTKObject(temp3, "vtkPointData") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkCellData") &&
      ap.GetValue(temp6) &&
      ap.GetVTKObject(temp7, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->ClipHexahedron0D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkBoxClipDataSet::ClipHexahedron0D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBoxClipDataSet_Methods[] = {
  {"IsTypeOf", PyvtkBoxClipDataSet_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBoxClipDataSet_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBoxClipDataSet_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBoxClipDataSet\nC++: static vtkBoxClipDataSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBoxClipDataSet_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBoxClipDataSet\nC++: vtkBoxClipDataSet *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBoxClipDataSet_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBoxClipDataSet_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetBoxClip", PyvtkBoxClipDataSet_SetBoxClip, METH_VARARGS,
   "SetBoxClip(self, xmin:float, xmax:float, ymin:float, ymax:float,\n    zmin:float, zmax:float) -> None\nC++: void SetBoxClip(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\nSetBoxClip(self, n0:(float, ...), o0:(float, ...), n1:(float, ...)\n    , o1:(float, ...), n2:(float, ...), o2:(float, ...), n3:(\n    float, ...), o3:(float, ...), n4:(float, ...), o4:(float, ...)\n    , n5:(float, ...), o5:(float, ...)) -> None\nC++: void SetBoxClip(const double *n0, const double *o0,\n    const double *n1, const double *o1, const double *n2,\n    const double *o2, const double *n3, const double *o3,\n    const double *n4, const double *o4, const double *n5,\n    const double *o5)\n\nSpecify the Box with which to perform the clipping. If the box is\nnot parallel to axis, you need to especify normal vector of each\nplane and a point on the plane.\n"},
  {"SetGenerateClipScalars", PyvtkBoxClipDataSet_SetGenerateClipScalars, METH_VARARGS,
   "SetGenerateClipScalars(self, _arg:int) -> None\nC++: virtual void SetGenerateClipScalars(vtkTypeBool _arg)\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated, and not the input scalar data.\n"},
  {"GetGenerateClipScalars", PyvtkBoxClipDataSet_GetGenerateClipScalars, METH_VARARGS,
   "GetGenerateClipScalars(self) -> int\nC++: virtual vtkTypeBool GetGenerateClipScalars()\n\n"},
  {"GenerateClipScalarsOn", PyvtkBoxClipDataSet_GenerateClipScalarsOn, METH_VARARGS,
   "GenerateClipScalarsOn(self) -> None\nC++: virtual void GenerateClipScalarsOn()\n\n"},
  {"GenerateClipScalarsOff", PyvtkBoxClipDataSet_GenerateClipScalarsOff, METH_VARARGS,
   "GenerateClipScalarsOff(self) -> None\nC++: virtual void GenerateClipScalarsOff()\n\n"},
  {"SetGenerateClippedOutput", PyvtkBoxClipDataSet_SetGenerateClippedOutput, METH_VARARGS,
   "SetGenerateClippedOutput(self, _arg:int) -> None\nC++: virtual void SetGenerateClippedOutput(vtkTypeBool _arg)\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {"GetGenerateClippedOutput", PyvtkBoxClipDataSet_GetGenerateClippedOutput, METH_VARARGS,
   "GetGenerateClippedOutput(self) -> int\nC++: virtual vtkTypeBool GetGenerateClippedOutput()\n\n"},
  {"GenerateClippedOutputOn", PyvtkBoxClipDataSet_GenerateClippedOutputOn, METH_VARARGS,
   "GenerateClippedOutputOn(self) -> None\nC++: virtual void GenerateClippedOutputOn()\n\n"},
  {"GenerateClippedOutputOff", PyvtkBoxClipDataSet_GenerateClippedOutputOff, METH_VARARGS,
   "GenerateClippedOutputOff(self) -> None\nC++: virtual void GenerateClippedOutputOff()\n\n"},
  {"GetClippedOutput", PyvtkBoxClipDataSet_GetClippedOutput, METH_VARARGS,
   "GetClippedOutput(self) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetClippedOutput()\n\nReturn the Clipped output.\n"},
  {"GetNumberOfOutputs", PyvtkBoxClipDataSet_GetNumberOfOutputs, METH_VARARGS,
   "GetNumberOfOutputs(self) -> int\nC++: virtual int GetNumberOfOutputs()\n\n"},
  {"SetLocator", PyvtkBoxClipDataSet_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkIncrementalPointLocator) -> None\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkBoxClipDataSet_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\n"},
  {"CreateDefaultLocator", PyvtkBoxClipDataSet_CreateDefaultLocator, METH_VARARGS,
   "CreateDefaultLocator(self) -> None\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {"GetMTime", PyvtkBoxClipDataSet_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the mtime also considering the locator.\n"},
  {"GetOrientation", PyvtkBoxClipDataSet_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> int\nC++: virtual unsigned int GetOrientation()\n\nTells if clipping happens with a box parallel with coordinate\naxis (0) or with an hexahedral box (1). Initial value is 1.\n"},
  {"SetOrientation", PyvtkBoxClipDataSet_SetOrientation, METH_VARARGS,
   "SetOrientation(self, _arg:int) -> None\nC++: virtual void SetOrientation(unsigned int _arg)\n\n"},
  {"InterpolateEdge", PyvtkBoxClipDataSet_InterpolateEdge, METH_VARARGS,
   "InterpolateEdge(attributes:vtkDataSetAttributes, toId:int,\n    fromId1:int, fromId2:int, t:float) -> None\nC++: static void InterpolateEdge(vtkDataSetAttributes *attributes,\n     vtkIdType toId, vtkIdType fromId1, vtkIdType fromId2,\n    double t)\n\n"},
  {"MinEdgeF", PyvtkBoxClipDataSet_MinEdgeF, METH_VARARGS,
   "MinEdgeF(self, id_v:(int, ...), cellIds:(int, ...), edgF:[int,\n    ...]) -> None\nC++: void MinEdgeF(const unsigned int *id_v,\n    const vtkIdType *cellIds, unsigned int *edgF)\n\n"},
  {"PyramidToTetra", PyvtkBoxClipDataSet_PyramidToTetra, METH_VARARGS,
   "PyramidToTetra(self, pyramId:(int, ...), cellIds:(int, ...),\n    newCellArray:vtkCellArray) -> None\nC++: void PyramidToTetra(const vtkIdType *pyramId,\n    const vtkIdType *cellIds, vtkCellArray *newCellArray)\n\n"},
  {"WedgeToTetra", PyvtkBoxClipDataSet_WedgeToTetra, METH_VARARGS,
   "WedgeToTetra(self, wedgeId:(int, ...), cellIds:(int, ...),\n    newCellArray:vtkCellArray) -> None\nC++: void WedgeToTetra(const vtkIdType *wedgeId,\n    const vtkIdType *cellIds, vtkCellArray *newCellArray)\n\n"},
  {"CellGrid", PyvtkBoxClipDataSet_CellGrid, METH_VARARGS,
   "CellGrid(self, typeobj:int, npts:int, cellIds:(int, ...),\n    newCellArray:vtkCellArray) -> None\nC++: void CellGrid(vtkIdType typeobj, vtkIdType npts,\n    const vtkIdType *cellIds, vtkCellArray *newCellArray)\n\n"},
  {"CreateTetra", PyvtkBoxClipDataSet_CreateTetra, METH_VARARGS,
   "CreateTetra(self, npts:int, cellIds:(int, ...),\n    newCellArray:vtkCellArray) -> None\nC++: void CreateTetra(vtkIdType npts, const vtkIdType *cellIds,\n    vtkCellArray *newCellArray)\n\n"},
  {"ClipBox", PyvtkBoxClipDataSet_ClipBox, METH_VARARGS,
   "ClipBox(self, newPoints:vtkPoints, cell:vtkGenericCell,\n    locator:vtkIncrementalPointLocator, tets:vtkCellArray,\n    inPD:vtkPointData, outPD:vtkPointData, inCD:vtkCellData,\n    cellId:int, outCD:vtkCellData) -> None\nC++: void ClipBox(vtkPoints *newPoints, vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *tets,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {"ClipHexahedron", PyvtkBoxClipDataSet_ClipHexahedron, METH_VARARGS,
   "ClipHexahedron(self, newPoints:vtkPoints, cell:vtkGenericCell,\n    locator:vtkIncrementalPointLocator, tets:vtkCellArray,\n    inPD:vtkPointData, outPD:vtkPointData, inCD:vtkCellData,\n    cellId:int, outCD:vtkCellData) -> None\nC++: void ClipHexahedron(vtkPoints *newPoints,\n    vtkGenericCell *cell, vtkIncrementalPointLocator *locator,\n    vtkCellArray *tets, vtkPointData *inPD, vtkPointData *outPD,\n    vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {"ClipBox2D", PyvtkBoxClipDataSet_ClipBox2D, METH_VARARGS,
   "ClipBox2D(self, newPoints:vtkPoints, cell:vtkGenericCell,\n    locator:vtkIncrementalPointLocator, tets:vtkCellArray,\n    inPD:vtkPointData, outPD:vtkPointData, inCD:vtkCellData,\n    cellId:int, outCD:vtkCellData) -> None\nC++: void ClipBox2D(vtkPoints *newPoints, vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *tets,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {"ClipHexahedron2D", PyvtkBoxClipDataSet_ClipHexahedron2D, METH_VARARGS,
   "ClipHexahedron2D(self, newPoints:vtkPoints, cell:vtkGenericCell,\n    locator:vtkIncrementalPointLocator, tets:vtkCellArray,\n    inPD:vtkPointData, outPD:vtkPointData, inCD:vtkCellData,\n    cellId:int, outCD:vtkCellData) -> None\nC++: void ClipHexahedron2D(vtkPoints *newPoints,\n    vtkGenericCell *cell, vtkIncrementalPointLocator *locator,\n    vtkCellArray *tets, vtkPointData *inPD, vtkPointData *outPD,\n    vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {"ClipBox1D", PyvtkBoxClipDataSet_ClipBox1D, METH_VARARGS,
   "ClipBox1D(self, newPoints:vtkPoints, cell:vtkGenericCell,\n    locator:vtkIncrementalPointLocator, lines:vtkCellArray,\n    inPD:vtkPointData, outPD:vtkPointData, inCD:vtkCellData,\n    cellId:int, outCD:vtkCellData) -> None\nC++: void ClipBox1D(vtkPoints *newPoints, vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *lines,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {"ClipHexahedron1D", PyvtkBoxClipDataSet_ClipHexahedron1D, METH_VARARGS,
   "ClipHexahedron1D(self, newPoints:vtkPoints, cell:vtkGenericCell,\n    locator:vtkIncrementalPointLocator, lines:vtkCellArray,\n    inPD:vtkPointData, outPD:vtkPointData, inCD:vtkCellData,\n    cellId:int, outCD:vtkCellData) -> None\nC++: void ClipHexahedron1D(vtkPoints *newPoints,\n    vtkGenericCell *cell, vtkIncrementalPointLocator *locator,\n    vtkCellArray *lines, vtkPointData *inPD, vtkPointData *outPD,\n    vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {"ClipBox0D", PyvtkBoxClipDataSet_ClipBox0D, METH_VARARGS,
   "ClipBox0D(self, cell:vtkGenericCell,\n    locator:vtkIncrementalPointLocator, verts:vtkCellArray,\n    inPD:vtkPointData, outPD:vtkPointData, inCD:vtkCellData,\n    cellId:int, outCD:vtkCellData) -> None\nC++: void ClipBox0D(vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {"ClipHexahedron0D", PyvtkBoxClipDataSet_ClipHexahedron0D, METH_VARARGS,
   "ClipHexahedron0D(self, cell:vtkGenericCell,\n    locator:vtkIncrementalPointLocator, verts:vtkCellArray,\n    inPD:vtkPointData, outPD:vtkPointData, inCD:vtkCellData,\n    cellId:int, outCD:vtkCellData) -> None\nC++: void ClipHexahedron0D(vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBoxClipDataSet_Doc =
  "vtkBoxClipDataSet - clip an unstructured grid\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "Clipping means that is actually 'cuts' through the cells of the\n"
  "dataset, returning tetrahedral cells inside of the box. The output of\n"
  "this filter is an unstructured grid.\n\n"
  "This filter can be configured to compute a second output. The second\n"
  "output is the part of the cell that is clipped away. Set the\n"
  "GenerateClippedData boolean on if you wish to access this output\n"
  "data.\n\n"
  "The vtkBoxClipDataSet will triangulate all types of 3D cells (i.e,\n"
  "create tetrahedra). This is necessary to preserve compatibility\n"
  "across face neighbors.\n\n"
  "To use this filter,you can decide if you will be clipping with a box\n"
  "or a hexahedral box.\n"
  "1) Set orientation if(SetOrientation(0)): box (parallel with\n"
  "   coordinate axis) SetBoxClip(xmin,xmax,ymin,ymax,zmin,zmax)\n"
  "   if(SetOrientation(1)): hexahedral box (Default)\n"
  "   SetBoxClip(n[0],o[0],n[1],o[1],n[2],o[2],n[3],o[3],n[4],o[4],n[5],o\n"
  "   [5]) PlaneNormal[] normal of each plane PlanePoint[] point on the\n"
  "   plane\n"
  "2) Apply the GenerateClipScalarsOn()\n"
  "3) Execute clipping  Update();\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBoxClipDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkBoxClipDataSet", // tp_name
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
  PyvtkBoxClipDataSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBoxClipDataSet_StaticNew()
{
  return vtkBoxClipDataSet::New();
}

PyObject *PyvtkBoxClipDataSet_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBoxClipDataSet_Type, PyvtkBoxClipDataSet_Methods,
    "vtkBoxClipDataSet",
 &PyvtkBoxClipDataSet_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBoxClipDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoxClipDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBoxClipDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

