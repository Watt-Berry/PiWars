// python wrapper for vtkAMRBaseParticlesReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAMRBaseParticlesReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRBaseParticlesReader(PyObject *dict); }
extern "C" { PyObject *PyvtkAMRBaseParticlesReader_ClassNew(); }


static PyObject *
PyvtkAMRBaseParticlesReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRBaseParticlesReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRBaseParticlesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRBaseParticlesReader *tempr = vtkAMRBaseParticlesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRBaseParticlesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRBaseParticlesReader::NewInstance());

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
PyvtkAMRBaseParticlesReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAMRBaseParticlesReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAMRBaseParticlesReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrequency() :
      op->vtkAMRBaseParticlesReader::GetFrequency());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_SetFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrequency(temp0);
    }
    else
    {
      op->vtkAMRBaseParticlesReader::SetFrequency(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRBaseParticlesReader::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkAMRBaseParticlesReader::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_SetFilterLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilterLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilterLocation(temp0);
    }
    else
    {
      op->vtkAMRBaseParticlesReader::SetFilterLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetFilterLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilterLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFilterLocation() :
      op->vtkAMRBaseParticlesReader::GetFilterLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_FilterLocationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilterLocationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FilterLocationOn();
    }
    else
    {
      op->vtkAMRBaseParticlesReader::FilterLocationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_FilterLocationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilterLocationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FilterLocationOff();
    }
    else
    {
      op->vtkAMRBaseParticlesReader::FilterLocationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetParticleDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetParticleDataArraySelection() :
      op->vtkAMRBaseParticlesReader::GetParticleDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetNumberOfParticleArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParticleArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfParticleArrays() :
      op->vtkAMRBaseParticlesReader::GetNumberOfParticleArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetParticleArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetParticleArrayName(temp0) :
      op->vtkAMRBaseParticlesReader::GetParticleArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetParticleArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetParticleArrayStatus(temp0) :
      op->vtkAMRBaseParticlesReader::GetParticleArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_SetParticleArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetParticleArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkAMRBaseParticlesReader::SetParticleArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkAMRBaseParticlesReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkAMRBaseParticlesReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_SetMinLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

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
      op->SetMinLocation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRBaseParticlesReader::SetMinLocation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_SetMaxLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

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
      op->SetMaxLocation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRBaseParticlesReader::SetMaxLocation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetTotalNumberOfParticles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfParticles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetTotalNumberOfParticles();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRBaseParticlesReader_Methods[] = {
  {"IsTypeOf", PyvtkAMRBaseParticlesReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRBaseParticlesReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRBaseParticlesReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAMRBaseParticlesReader\nC++: static vtkAMRBaseParticlesReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRBaseParticlesReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAMRBaseParticlesReader\nC++: vtkAMRBaseParticlesReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAMRBaseParticlesReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAMRBaseParticlesReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetFrequency", PyvtkAMRBaseParticlesReader_GetFrequency, METH_VARARGS,
   "GetFrequency(self) -> int\nC++: virtual int GetFrequency()\n\nSet & Get the frequency.\n"},
  {"SetFrequency", PyvtkAMRBaseParticlesReader_SetFrequency, METH_VARARGS,
   "SetFrequency(self, _arg:int) -> None\nC++: virtual void SetFrequency(int _arg)\n\n"},
  {"GetController", PyvtkAMRBaseParticlesReader_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet & Get the multi-process controller.\n"},
  {"SetController", PyvtkAMRBaseParticlesReader_SetController, METH_VARARGS,
   "SetController(self, __a:vtkMultiProcessController) -> None\nC++: virtual void SetController(vtkMultiProcessController *)\n\n"},
  {"SetFilterLocation", PyvtkAMRBaseParticlesReader_SetFilterLocation, METH_VARARGS,
   "SetFilterLocation(self, _arg:int) -> None\nC++: virtual void SetFilterLocation(vtkTypeBool _arg)\n\nSet & Get for filter location and boolean macro\n"},
  {"GetFilterLocation", PyvtkAMRBaseParticlesReader_GetFilterLocation, METH_VARARGS,
   "GetFilterLocation(self) -> int\nC++: virtual vtkTypeBool GetFilterLocation()\n\n"},
  {"FilterLocationOn", PyvtkAMRBaseParticlesReader_FilterLocationOn, METH_VARARGS,
   "FilterLocationOn(self) -> None\nC++: virtual void FilterLocationOn()\n\n"},
  {"FilterLocationOff", PyvtkAMRBaseParticlesReader_FilterLocationOff, METH_VARARGS,
   "FilterLocationOff(self) -> None\nC++: virtual void FilterLocationOff()\n\n"},
  {"GetParticleDataArraySelection", PyvtkAMRBaseParticlesReader_GetParticleDataArraySelection, METH_VARARGS,
   "GetParticleDataArraySelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetParticleDataArraySelection(\n    )\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {"GetNumberOfParticleArrays", PyvtkAMRBaseParticlesReader_GetNumberOfParticleArrays, METH_VARARGS,
   "GetNumberOfParticleArrays(self) -> int\nC++: int GetNumberOfParticleArrays()\n\nGet the number of particles arrays available in the input.\n"},
  {"GetParticleArrayName", PyvtkAMRBaseParticlesReader_GetParticleArrayName, METH_VARARGS,
   "GetParticleArrayName(self, index:int) -> str\nC++: const char *GetParticleArrayName(int index)\n\nGet the particle array name of the array associated with the\ngiven index.\n"},
  {"GetParticleArrayStatus", PyvtkAMRBaseParticlesReader_GetParticleArrayStatus, METH_VARARGS,
   "GetParticleArrayStatus(self, name:str) -> int\nC++: int GetParticleArrayStatus(const char *name)\n\nGet/Set whether the particle array status.\n"},
  {"SetParticleArrayStatus", PyvtkAMRBaseParticlesReader_SetParticleArrayStatus, METH_VARARGS,
   "SetParticleArrayStatus(self, name:str, status:int) -> None\nC++: void SetParticleArrayStatus(const char *name, int status)\n\n"},
  {"SetFileName", PyvtkAMRBaseParticlesReader_SetFileName, METH_VARARGS,
   "SetFileName(self, fileName:str) -> None\nC++: virtual void SetFileName(const char *fileName)\n\n"},
  {"GetFileName", PyvtkAMRBaseParticlesReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetMinLocation", PyvtkAMRBaseParticlesReader_SetMinLocation, METH_VARARGS,
   "SetMinLocation(self, minx:float, miny:float, minz:float) -> None\nC++: void SetMinLocation(double minx, double miny, double minz)\n\nSets the min location\n"},
  {"SetMaxLocation", PyvtkAMRBaseParticlesReader_SetMaxLocation, METH_VARARGS,
   "SetMaxLocation(self, maxx:float, maxy:float, maxz:float) -> None\nC++: void SetMaxLocation(double maxx, double maxy, double maxz)\n\nSets the max location\n"},
  {"GetTotalNumberOfParticles", PyvtkAMRBaseParticlesReader_GetTotalNumberOfParticles, METH_VARARGS,
   "GetTotalNumberOfParticles(self) -> int\nC++: virtual int GetTotalNumberOfParticles()\n\nReturns the total number of particles\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAMRBaseParticlesReader_Doc =
  "vtkAMRBaseParticlesReader - An abstract base class that implements\nall the common functionality for\n all particle readers.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAMRBaseParticlesReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOAMR.vtkAMRBaseParticlesReader", // tp_name
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
  PyvtkAMRBaseParticlesReader_Doc, // tp_doc
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

PyObject *PyvtkAMRBaseParticlesReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAMRBaseParticlesReader_Type, PyvtkAMRBaseParticlesReader_Methods,
    "vtkAMRBaseParticlesReader",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRBaseParticlesReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRBaseParticlesReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRBaseParticlesReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

