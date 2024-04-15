// python wrapper for vtkExecutive
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExecutive.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExecutive(PyObject *dict); }
extern "C" { PyObject *PyvtkExecutive_ClassNew(); }


static PyObject *
PyvtkExecutive_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExecutive::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExecutive::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExecutive *tempr = vtkExecutive::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExecutive *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExecutive::NewInstance());

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
PyvtkExecutive_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExecutive::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExecutive::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_GetAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetAlgorithm() :
      op->vtkExecutive::GetAlgorithm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_UpdateInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateInformation() :
      op->vtkExecutive::UpdateInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Update() :
      op->vtkExecutive::Update());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExecutive_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Update(temp0) :
      op->vtkExecutive::Update(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExecutive_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkExecutive_Update_s1(self, args);
    case 1:
      return PyvtkExecutive_Update_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return nullptr;
}


static PyObject *
PyvtkExecutive_GetNumberOfInputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInputPorts() :
      op->vtkExecutive::GetNumberOfInputPorts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_GetNumberOfOutputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfOutputPorts() :
      op->vtkExecutive::GetNumberOfOutputPorts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_GetNumberOfInputConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInputConnections(temp0) :
      op->vtkExecutive::GetNumberOfInputConnections(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_GetOutputInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetOutputInformation(temp0) :
      op->vtkExecutive::GetOutputInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExecutive_GetOutputInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationVector *tempr = (ap.IsBound() ?
      op->GetOutputInformation() :
      op->vtkExecutive::GetOutputInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExecutive_GetOutputInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkExecutive_GetOutputInformation_s1(self, args);
    case 0:
      return PyvtkExecutive_GetOutputInformation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputInformation");
  return nullptr;
}


static PyObject *
PyvtkExecutive_GetInputInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInputInformation(temp0, temp1) :
      op->vtkExecutive::GetInputInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExecutive_GetInputInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkInformationVector *tempr = (ap.IsBound() ?
      op->GetInputInformation(temp0) :
      op->vtkExecutive::GetInputInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExecutive_GetInputInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkExecutive_GetInputInformation_s1(self, args);
    case 1:
      return PyvtkExecutive_GetInputInformation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInputInformation");
  return nullptr;
}


static PyObject *
PyvtkExecutive_GetInputExecutive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkExecutive *tempr = (ap.IsBound() ?
      op->GetInputExecutive(temp0, temp1) :
      op->vtkExecutive::GetInputExecutive(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_GetOutputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutputData(temp0) :
      op->vtkExecutive::GetOutputData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_SetOutputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  vtkDataObject *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetOutputData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkExecutive::SetOutputData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExecutive_SetOutputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetOutputData(temp0, temp1);
    }
    else
    {
      op->vtkExecutive::SetOutputData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExecutive_SetOutputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkExecutive_SetOutputData_s1(self, args);
    case 2:
      return PyvtkExecutive_SetOutputData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputData");
  return nullptr;
}


static PyObject *
PyvtkExecutive_GetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInputData(temp0, temp1) :
      op->vtkExecutive::GetInputData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_SetSharedOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSharedOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  vtkInformationVector *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVector"))
  {
    if (ap.IsBound())
    {
      op->SetSharedOutputInformation(temp0);
    }
    else
    {
      op->vtkExecutive::SetSharedOutputInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_UsesGarbageCollector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsesGarbageCollector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UsesGarbageCollector() :
      op->vtkExecutive::UsesGarbageCollector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_PRODUCER(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PRODUCER");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationExecutivePortKey *tempr = vtkExecutive::PRODUCER();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_CONSUMERS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CONSUMERS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationExecutivePortVectorKey *tempr = vtkExecutive::CONSUMERS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_FROM_OUTPUT_PORT(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FROM_OUTPUT_PORT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkExecutive::FROM_OUTPUT_PORT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_ALGORITHM_BEFORE_FORWARD(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ALGORITHM_BEFORE_FORWARD");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkExecutive::ALGORITHM_BEFORE_FORWARD();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_ALGORITHM_AFTER_FORWARD(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ALGORITHM_AFTER_FORWARD");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkExecutive::ALGORITHM_AFTER_FORWARD();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_ALGORITHM_DIRECTION(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ALGORITHM_DIRECTION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkExecutive::ALGORITHM_DIRECTION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_FORWARD_DIRECTION(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FORWARD_DIRECTION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkExecutive::FORWARD_DIRECTION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutive_KEYS_TO_COPY(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "KEYS_TO_COPY");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationKeyVectorKey *tempr = vtkExecutive::KEYS_TO_COPY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExecutive_Methods[] = {
  {"IsTypeOf", PyvtkExecutive_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExecutive_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExecutive_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExecutive\nC++: static vtkExecutive *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExecutive_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExecutive\nC++: vtkExecutive *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExecutive_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExecutive_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetAlgorithm", PyvtkExecutive_GetAlgorithm, METH_VARARGS,
   "GetAlgorithm(self) -> vtkAlgorithm\nC++: vtkAlgorithm *GetAlgorithm()\n\nGet the algorithm to which this executive has been assigned.\n"},
  {"UpdateInformation", PyvtkExecutive_UpdateInformation, METH_VARARGS,
   "UpdateInformation(self) -> int\nC++: virtual int UpdateInformation()\n\nBring the output information up to date.\n"},
  {"Update", PyvtkExecutive_Update, METH_VARARGS,
   "Update(self) -> int\nC++: virtual vtkTypeBool Update()\nUpdate(self, port:int) -> int\nC++: virtual vtkTypeBool Update(int port)\n\nBring the algorithm's outputs up-to-date.  Returns 1 for success\nand 0 for failure.\n"},
  {"GetNumberOfInputPorts", PyvtkExecutive_GetNumberOfInputPorts, METH_VARARGS,
   "GetNumberOfInputPorts(self) -> int\nC++: int GetNumberOfInputPorts()\n\nGet the number of input/output ports for the algorithm associated\nwith this executive.  Returns 0 if no algorithm is set.\n"},
  {"GetNumberOfOutputPorts", PyvtkExecutive_GetNumberOfOutputPorts, METH_VARARGS,
   "GetNumberOfOutputPorts(self) -> int\nC++: int GetNumberOfOutputPorts()\n\n"},
  {"GetNumberOfInputConnections", PyvtkExecutive_GetNumberOfInputConnections, METH_VARARGS,
   "GetNumberOfInputConnections(self, port:int) -> int\nC++: int GetNumberOfInputConnections(int port)\n\nGet the number of input connections on the given port.\n"},
  {"GetOutputInformation", PyvtkExecutive_GetOutputInformation, METH_VARARGS,
   "GetOutputInformation(self, port:int) -> vtkInformation\nC++: virtual vtkInformation *GetOutputInformation(int port)\nGetOutputInformation(self) -> vtkInformationVector\nC++: vtkInformationVector *GetOutputInformation()\n\nGet the pipeline information object for the given output port.\n"},
  {"GetInputInformation", PyvtkExecutive_GetInputInformation, METH_VARARGS,
   "GetInputInformation(self, port:int, connection:int)\n    -> vtkInformation\nC++: vtkInformation *GetInputInformation(int port, int connection)\nGetInputInformation(self, port:int) -> vtkInformationVector\nC++: vtkInformationVector *GetInputInformation(int port)\n\nGet the pipeline information for the given input connection.\n"},
  {"GetInputExecutive", PyvtkExecutive_GetInputExecutive, METH_VARARGS,
   "GetInputExecutive(self, port:int, connection:int) -> vtkExecutive\nC++: vtkExecutive *GetInputExecutive(int port, int connection)\n\nGet the executive managing the given input connection.\n"},
  {"GetOutputData", PyvtkExecutive_GetOutputData, METH_VARARGS,
   "GetOutputData(self, port:int) -> vtkDataObject\nC++: virtual vtkDataObject *GetOutputData(int port)\n\nGet/Set the data object for an output port of the algorithm.\n"},
  {"SetOutputData", PyvtkExecutive_SetOutputData, METH_VARARGS,
   "SetOutputData(self, port:int, __b:vtkDataObject,\n    info:vtkInformation) -> None\nC++: virtual void SetOutputData(int port, vtkDataObject *,\n    vtkInformation *info)\nSetOutputData(self, port:int, __b:vtkDataObject) -> None\nC++: virtual void SetOutputData(int port, vtkDataObject *)\n\n"},
  {"GetInputData", PyvtkExecutive_GetInputData, METH_VARARGS,
   "GetInputData(self, port:int, connection:int) -> vtkDataObject\nC++: virtual vtkDataObject *GetInputData(int port, int connection)\n\nGet the data object for an input port of the algorithm.\n"},
  {"SetSharedOutputInformation", PyvtkExecutive_SetSharedOutputInformation, METH_VARARGS,
   "SetSharedOutputInformation(self, outInfoVec:vtkInformationVector)\n    -> None\nC++: void SetSharedOutputInformation(\n    vtkInformationVector *outInfoVec)\n\n"},
  {"UsesGarbageCollector", PyvtkExecutive_UsesGarbageCollector, METH_VARARGS,
   "UsesGarbageCollector(self) -> bool\nC++: bool UsesGarbageCollector() override;\n\nParticipate in garbage collection.\n"},
  {"PRODUCER", PyvtkExecutive_PRODUCER, METH_VARARGS,
   "PRODUCER() -> vtkInformationExecutivePortKey\nC++: static vtkInformationExecutivePortKey *PRODUCER()\n\nInformation key to store the executive/port number producing an\ninformation object.\n"},
  {"CONSUMERS", PyvtkExecutive_CONSUMERS, METH_VARARGS,
   "CONSUMERS() -> vtkInformationExecutivePortVectorKey\nC++: static vtkInformationExecutivePortVectorKey *CONSUMERS()\n\nInformation key to store the executive/port number pairs\nconsuming an information object.\n"},
  {"FROM_OUTPUT_PORT", PyvtkExecutive_FROM_OUTPUT_PORT, METH_VARARGS,
   "FROM_OUTPUT_PORT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FROM_OUTPUT_PORT()\n\nInformation key to store the output port number from which a\nrequest is made.\n"},
  {"ALGORITHM_BEFORE_FORWARD", PyvtkExecutive_ALGORITHM_BEFORE_FORWARD, METH_VARARGS,
   "ALGORITHM_BEFORE_FORWARD() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ALGORITHM_BEFORE_FORWARD()\n\nKeys to program vtkExecutive::ProcessRequest with the default\nbehavior for unknown requests.\n"},
  {"ALGORITHM_AFTER_FORWARD", PyvtkExecutive_ALGORITHM_AFTER_FORWARD, METH_VARARGS,
   "ALGORITHM_AFTER_FORWARD() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ALGORITHM_AFTER_FORWARD()\n\n"},
  {"ALGORITHM_DIRECTION", PyvtkExecutive_ALGORITHM_DIRECTION, METH_VARARGS,
   "ALGORITHM_DIRECTION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ALGORITHM_DIRECTION()\n\n"},
  {"FORWARD_DIRECTION", PyvtkExecutive_FORWARD_DIRECTION, METH_VARARGS,
   "FORWARD_DIRECTION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FORWARD_DIRECTION()\n\n"},
  {"KEYS_TO_COPY", PyvtkExecutive_KEYS_TO_COPY, METH_VARARGS,
   "KEYS_TO_COPY() -> vtkInformationKeyVectorKey\nC++: static vtkInformationKeyVectorKey *KEYS_TO_COPY()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExecutive_Doc =
  "vtkExecutive - Superclass for all pipeline executives in VTK.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkExecutive is the superclass for all pipeline executives in VTK. A\n"
  "VTK executive is responsible for controlling one instance of\n"
  "vtkAlgorithm.  A pipeline consists of one or more executives that\n"
  "control data flow.  Every reader, source, writer, or data processing\n"
  "algorithm in the pipeline is implemented in an instance of\n"
  "vtkAlgorithm.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExecutive_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkExecutive", // tp_name
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
  PyvtkExecutive_Doc, // tp_doc
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

PyObject *PyvtkExecutive_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExecutive_Type, PyvtkExecutive_Methods,
    "vtkExecutive",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "RequestUpstream", vtkExecutive::RequestUpstream },
        { "RequestDownstream", vtkExecutive::RequestDownstream },
        { "BeforeForward", vtkExecutive::BeforeForward },
        { "AfterForward", vtkExecutive::AfterForward },
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

void PyVTKAddFile_vtkExecutive(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExecutive_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExecutive", o) != 0)
  {
    Py_DECREF(o);
  }

}

