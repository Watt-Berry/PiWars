// python wrapper for vtkDataSetAlgorithm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataSetAlgorithm.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataSetAlgorithm(PyObject *dict); }
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }

#ifndef DECLARED_PyvtkAlgorithm_ClassNew
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }
#define DECLARED_PyvtkAlgorithm_ClassNew
#endif

static PyObject *
PyvtkDataSetAlgorithm_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataSetAlgorithm::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAlgorithm_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataSetAlgorithm *tempr = vtkDataSetAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetAlgorithm::NewInstance());

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
PyvtkDataSetAlgorithm_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataSetAlgorithm::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAlgorithm_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataSetAlgorithm::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkDataSetAlgorithm::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkDataSetAlgorithm::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkDataSetAlgorithm_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}


static PyObject *
PyvtkDataSetAlgorithm_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkDataSetAlgorithm::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAlgorithm_GetPolyDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyDataOutput() :
      op->vtkDataSetAlgorithm::GetPolyDataOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAlgorithm_GetStructuredPointsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredPointsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredPoints *tempr = (ap.IsBound() ?
      op->GetStructuredPointsOutput() :
      op->vtkDataSetAlgorithm::GetStructuredPointsOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAlgorithm_GetImageDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImageDataOutput() :
      op->vtkDataSetAlgorithm::GetImageDataOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAlgorithm_GetStructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetStructuredGridOutput() :
      op->vtkDataSetAlgorithm::GetStructuredGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAlgorithm_GetUnstructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetUnstructuredGridOutput() :
      op->vtkDataSetAlgorithm::GetUnstructuredGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAlgorithm_GetRectilinearGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearGrid *tempr = (ap.IsBound() ?
      op->GetRectilinearGridOutput() :
      op->vtkDataSetAlgorithm::GetRectilinearGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAlgorithm_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkDataSetAlgorithm::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAlgorithm_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAlgorithm::SetInputData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAlgorithm_SetInputData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkDataSetAlgorithm::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAlgorithm_SetInputData_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  int temp0;
  vtkDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAlgorithm::SetInputData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetAlgorithm_SetInputData_Methods[] = {
  {"SetInputData", PyvtkDataSetAlgorithm_SetInputData_s1, METH_VARARGS,
   "@V *vtkDataObject"},
  {"SetInputData", PyvtkDataSetAlgorithm_SetInputData_s2, METH_VARARGS,
   "@iV *vtkDataObject"},
  {"SetInputData", PyvtkDataSetAlgorithm_SetInputData_s3, METH_VARARGS,
   "@V *vtkDataSet"},
  {"SetInputData", PyvtkDataSetAlgorithm_SetInputData_s4, METH_VARARGS,
   "@iV *vtkDataSet"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetAlgorithm_SetInputData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetAlgorithm_SetInputData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return nullptr;
}


static PyObject *
PyvtkDataSetAlgorithm_AddInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->AddInputData(temp0);
    }
    else
    {
      op->vtkDataSetAlgorithm::AddInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAlgorithm_AddInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->AddInputData(temp0);
    }
    else
    {
      op->vtkDataSetAlgorithm::AddInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAlgorithm_AddInputData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  int temp0;
  vtkDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->AddInputData(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAlgorithm::AddInputData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAlgorithm_AddInputData_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAlgorithm *op = static_cast<vtkDataSetAlgorithm *>(vp);

  int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->AddInputData(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAlgorithm::AddInputData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetAlgorithm_AddInputData_Methods[] = {
  {"AddInputData", PyvtkDataSetAlgorithm_AddInputData_s1, METH_VARARGS,
   "@V *vtkDataObject"},
  {"AddInputData", PyvtkDataSetAlgorithm_AddInputData_s2, METH_VARARGS,
   "@V *vtkDataSet"},
  {"AddInputData", PyvtkDataSetAlgorithm_AddInputData_s3, METH_VARARGS,
   "@iV *vtkDataSet"},
  {"AddInputData", PyvtkDataSetAlgorithm_AddInputData_s4, METH_VARARGS,
   "@iV *vtkDataObject"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetAlgorithm_AddInputData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetAlgorithm_AddInputData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddInputData");
  return nullptr;
}

static PyMethodDef PyvtkDataSetAlgorithm_Methods[] = {
  {"IsTypeOf", PyvtkDataSetAlgorithm_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataSetAlgorithm_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataSetAlgorithm_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataSetAlgorithm\nC++: static vtkDataSetAlgorithm *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataSetAlgorithm_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataSetAlgorithm\nC++: vtkDataSetAlgorithm *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataSetAlgorithm_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataSetAlgorithm_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetOutput", PyvtkDataSetAlgorithm_GetOutput, METH_VARARGS,
   "GetOutput(self) -> vtkDataSet\nC++: vtkDataSet *GetOutput()\nGetOutput(self, __a:int) -> vtkDataSet\nC++: vtkDataSet *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {"GetInput", PyvtkDataSetAlgorithm_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nGet the input data object. This method is not recommended for\nuse, but lots of old style filters use it.\n"},
  {"GetPolyDataOutput", PyvtkDataSetAlgorithm_GetPolyDataOutput, METH_VARARGS,
   "GetPolyDataOutput(self) -> vtkPolyData\nC++: vtkPolyData *GetPolyDataOutput()\n\nGet the output as vtkPolyData.\n"},
  {"GetStructuredPointsOutput", PyvtkDataSetAlgorithm_GetStructuredPointsOutput, METH_VARARGS,
   "GetStructuredPointsOutput(self) -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetStructuredPointsOutput()\n\nGet the output as vtkStructuredPoints.\n"},
  {"GetImageDataOutput", PyvtkDataSetAlgorithm_GetImageDataOutput, METH_VARARGS,
   "GetImageDataOutput(self) -> vtkImageData\nC++: vtkImageData *GetImageDataOutput()\n\nGet the output as vtkStructuredPoints.\n"},
  {"GetStructuredGridOutput", PyvtkDataSetAlgorithm_GetStructuredGridOutput, METH_VARARGS,
   "GetStructuredGridOutput(self) -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridOutput()\n\nGet the output as vtkStructuredGrid.\n"},
  {"GetUnstructuredGridOutput", PyvtkDataSetAlgorithm_GetUnstructuredGridOutput, METH_VARARGS,
   "GetUnstructuredGridOutput(self) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridOutput()\n\nGet the output as vtkUnstructuredGrid.\n"},
  {"GetRectilinearGridOutput", PyvtkDataSetAlgorithm_GetRectilinearGridOutput, METH_VARARGS,
   "GetRectilinearGridOutput(self) -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetRectilinearGridOutput()\n\nGet the output as vtkRectilinearGrid.\n"},
  {"SetInputData", PyvtkDataSetAlgorithm_SetInputData, METH_VARARGS,
   "SetInputData(self, __a:vtkDataObject) -> None\nC++: void SetInputData(vtkDataObject *)\nSetInputData(self, __a:int, __b:vtkDataObject) -> None\nC++: void SetInputData(int, vtkDataObject *)\nSetInputData(self, __a:vtkDataSet) -> None\nC++: void SetInputData(vtkDataSet *)\nSetInputData(self, __a:int, __b:vtkDataSet) -> None\nC++: void SetInputData(int, vtkDataSet *)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {"AddInputData", PyvtkDataSetAlgorithm_AddInputData, METH_VARARGS,
   "AddInputData(self, __a:vtkDataObject) -> None\nC++: void AddInputData(vtkDataObject *)\nAddInputData(self, __a:vtkDataSet) -> None\nC++: void AddInputData(vtkDataSet *)\nAddInputData(self, __a:int, __b:vtkDataSet) -> None\nC++: void AddInputData(int, vtkDataSet *)\nAddInputData(self, __a:int, __b:vtkDataObject) -> None\nC++: void AddInputData(int, vtkDataObject *)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use AddInputConnection() to\nsetup a pipeline connection.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataSetAlgorithm_Doc =
  "vtkDataSetAlgorithm - Superclass for algorithms that produce output\nof the same type as input\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkDataSetAlgorithm is a convenience class to make writing algorithms\n"
  "easier. It is also designed to help transition old algorithms to the\n"
  "new pipeline architecture. There are some assumptions and defaults\n"
  "made by this class you should be aware of. This class defaults such\n"
  "that your filter will have one input port and one output port. If\n"
  "that is not the case simply change it with SetNumberOfInputPorts etc.\n"
  "See this classes constructor for the default. This class also\n"
  "provides a FillInputPortInfo method that by default says that all\n"
  "inputs will be DataSet. If that isn't the case then please override\n"
  "this method in your subclass. This class breaks out the downstream\n"
  "requests into separate functions such as RequestDataObject\n"
  "RequestData and RequestInformation. The default implementation of\n"
  "RequestDataObject will create an output data of the same type as the\n"
  "input.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataSetAlgorithm_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkDataSetAlgorithm", // tp_name
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
  PyvtkDataSetAlgorithm_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataSetAlgorithm_StaticNew()
{
  return vtkDataSetAlgorithm::New();
}

PyObject *PyvtkDataSetAlgorithm_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataSetAlgorithm_Type, PyvtkDataSetAlgorithm_Methods,
    "vtkDataSetAlgorithm",
 &PyvtkDataSetAlgorithm_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataSetAlgorithm(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataSetAlgorithm_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataSetAlgorithm", o) != 0)
  {
    Py_DECREF(o);
  }

}

