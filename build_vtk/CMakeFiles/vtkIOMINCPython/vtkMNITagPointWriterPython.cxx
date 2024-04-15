// python wrapper for vtkMNITagPointWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMNITagPointWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMNITagPointWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkMNITagPointWriter_ClassNew(); }


static PyObject *
PyvtkMNITagPointWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMNITagPointWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMNITagPointWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMNITagPointWriter *tempr = vtkMNITagPointWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMNITagPointWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMNITagPointWriter::NewInstance());

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
PyvtkMNITagPointWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMNITagPointWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMNITagPointWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkMNITagPointWriter::GetFileExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkMNITagPointWriter::GetDescriptiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_SetPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  int temp0;
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetPoints(temp0, temp1);
    }
    else
    {
      op->vtkMNITagPointWriter::SetPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMNITagPointWriter_SetPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetPoints(temp0);
    }
    else
    {
      op->vtkMNITagPointWriter::SetPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMNITagPointWriter_SetPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMNITagPointWriter_SetPoints_s1(self, args);
    case 1:
      return PyvtkMNITagPointWriter_SetPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoints");
  return nullptr;
}


static PyObject *
PyvtkMNITagPointWriter_GetPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetPoints(temp0) :
      op->vtkMNITagPointWriter::GetPoints(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMNITagPointWriter_GetPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkMNITagPointWriter::GetPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMNITagPointWriter_GetPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMNITagPointWriter_GetPoints_s1(self, args);
    case 0:
      return PyvtkMNITagPointWriter_GetPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoints");
  return nullptr;
}


static PyObject *
PyvtkMNITagPointWriter_SetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetLabelText(temp0);
    }
    else
    {
      op->vtkMNITagPointWriter::SetLabelText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetLabelText() :
      op->vtkMNITagPointWriter::GetLabelText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_SetWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->SetWeights(temp0);
    }
    else
    {
      op->vtkMNITagPointWriter::SetWeights(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetWeights() :
      op->vtkMNITagPointWriter::GetWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_SetStructureIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStructureIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  vtkIntArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIntArray"))
  {
    if (ap.IsBound())
    {
      op->SetStructureIds(temp0);
    }
    else
    {
      op->vtkMNITagPointWriter::SetStructureIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetStructureIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructureIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetStructureIds() :
      op->vtkMNITagPointWriter::GetStructureIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_SetPatientIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  vtkIntArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIntArray"))
  {
    if (ap.IsBound())
    {
      op->SetPatientIds(temp0);
    }
    else
    {
      op->vtkMNITagPointWriter::SetPatientIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetPatientIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetPatientIds() :
      op->vtkMNITagPointWriter::GetPatientIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_SetComments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComments(temp0);
    }
    else
    {
      op->vtkMNITagPointWriter::SetComments(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetComments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetComments() :
      op->vtkMNITagPointWriter::GetComments());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Write() :
      op->vtkMNITagPointWriter::Write());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkMNITagPointWriter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

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
      op->vtkMNITagPointWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMNITagPointWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMNITagPointWriter_Methods[] = {
  {"IsTypeOf", PyvtkMNITagPointWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMNITagPointWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMNITagPointWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMNITagPointWriter\nC++: static vtkMNITagPointWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMNITagPointWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMNITagPointWriter\nC++: vtkMNITagPointWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMNITagPointWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMNITagPointWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetFileExtensions", PyvtkMNITagPointWriter_GetFileExtensions, METH_VARARGS,
   "GetFileExtensions(self) -> str\nC++: virtual const char *GetFileExtensions()\n\nGet the extension for this file format.\n"},
  {"GetDescriptiveName", PyvtkMNITagPointWriter_GetDescriptiveName, METH_VARARGS,
   "GetDescriptiveName(self) -> str\nC++: virtual const char *GetDescriptiveName()\n\nGet the name of this file format.\n"},
  {"SetPoints", PyvtkMNITagPointWriter_SetPoints, METH_VARARGS,
   "SetPoints(self, port:int, points:vtkPoints) -> None\nC++: virtual void SetPoints(int port, vtkPoints *points)\nSetPoints(self, points:vtkPoints) -> None\nC++: virtual void SetPoints(vtkPoints *points)\n\nSet the points (unless you set them as inputs).\n"},
  {"GetPoints", PyvtkMNITagPointWriter_GetPoints, METH_VARARGS,
   "GetPoints(self, port:int) -> vtkPoints\nC++: virtual vtkPoints *GetPoints(int port)\nGetPoints(self) -> vtkPoints\nC++: virtual vtkPoints *GetPoints()\n\n"},
  {"SetLabelText", PyvtkMNITagPointWriter_SetLabelText, METH_VARARGS,
   "SetLabelText(self, a:vtkStringArray) -> None\nC++: virtual void SetLabelText(vtkStringArray *a)\n\nSet the labels (unless the input PointData has an array called\nLabelText). Labels are optional.\n"},
  {"GetLabelText", PyvtkMNITagPointWriter_GetLabelText, METH_VARARGS,
   "GetLabelText(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetLabelText()\n\n"},
  {"SetWeights", PyvtkMNITagPointWriter_SetWeights, METH_VARARGS,
   "SetWeights(self, a:vtkDoubleArray) -> None\nC++: virtual void SetWeights(vtkDoubleArray *a)\n\nSet the weights (unless the input PointData has an array called\nWeights).  Weights are optional.\n"},
  {"GetWeights", PyvtkMNITagPointWriter_GetWeights, METH_VARARGS,
   "GetWeights(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetWeights()\n\n"},
  {"SetStructureIds", PyvtkMNITagPointWriter_SetStructureIds, METH_VARARGS,
   "SetStructureIds(self, a:vtkIntArray) -> None\nC++: virtual void SetStructureIds(vtkIntArray *a)\n\nSet the structure ids (unless the input PointData has an array\ncalled StructureIds).  These are optional.\n"},
  {"GetStructureIds", PyvtkMNITagPointWriter_GetStructureIds, METH_VARARGS,
   "GetStructureIds(self) -> vtkIntArray\nC++: virtual vtkIntArray *GetStructureIds()\n\n"},
  {"SetPatientIds", PyvtkMNITagPointWriter_SetPatientIds, METH_VARARGS,
   "SetPatientIds(self, a:vtkIntArray) -> None\nC++: virtual void SetPatientIds(vtkIntArray *a)\n\nSet the structure ids (unless the input PointData has an array\ncalled PatientIds).  These are optional.\n"},
  {"GetPatientIds", PyvtkMNITagPointWriter_GetPatientIds, METH_VARARGS,
   "GetPatientIds(self) -> vtkIntArray\nC++: virtual vtkIntArray *GetPatientIds()\n\n"},
  {"SetComments", PyvtkMNITagPointWriter_SetComments, METH_VARARGS,
   "SetComments(self, _arg:str) -> None\nC++: virtual void SetComments(const char *_arg)\n\nSet comments to be added to the file.\n"},
  {"GetComments", PyvtkMNITagPointWriter_GetComments, METH_VARARGS,
   "GetComments(self) -> str\nC++: virtual char *GetComments()\n\n"},
  {"Write", PyvtkMNITagPointWriter_Write, METH_VARARGS,
   "Write(self) -> int\nC++: int Write() override;\n\nWrite the file.\n"},
  {"GetMTime", PyvtkMNITagPointWriter_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime.\n"},
  {"SetFileName", PyvtkMNITagPointWriter_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of vtk polygon data file to write.\n"},
  {"GetFileName", PyvtkMNITagPointWriter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMNITagPointWriter_Doc =
  "vtkMNITagPointWriter - A writer for MNI tag point files.\n\n"
  "Superclass: vtkWriter\n\n"
  "The MNI .tag file format is used to store tag points, for use in\n"
  "either registration or labeling of data volumes.  This file format\n"
  "was developed at the McConnell Brain Imaging Centre at the Montreal\n"
  "Neurological Institute and is used by their software. Tag points can\n"
  "be stored for either one volume or two volumes, and this filter can\n"
  "take one or two inputs.  Alternatively, the points to be written can\n"
  "be specified by calling SetPoints().\n"
  "@sa\n"
  "vtkMINCImageReader vtkMNIObjectReader vtkMNITransformReader@par\n"
  "Thanks: Thanks to David Gobbi for contributing this class to VTK.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMNITagPointWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOMINC.vtkMNITagPointWriter", // tp_name
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
  PyvtkMNITagPointWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMNITagPointWriter_StaticNew()
{
  return vtkMNITagPointWriter::New();
}

PyObject *PyvtkMNITagPointWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMNITagPointWriter_Type, PyvtkMNITagPointWriter_Methods,
    "vtkMNITagPointWriter",
 &PyvtkMNITagPointWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkWriter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMNITagPointWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMNITagPointWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMNITagPointWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

