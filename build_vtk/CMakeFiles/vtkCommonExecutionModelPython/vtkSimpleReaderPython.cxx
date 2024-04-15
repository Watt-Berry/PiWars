// python wrapper for vtkSimpleReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSimpleReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSimpleReader(PyObject *dict); }
extern "C" { PyObject *PyvtkSimpleReader_ClassNew(); }

#ifndef DECLARED_PyvtkReaderAlgorithm_ClassNew
extern "C" { PyObject *PyvtkReaderAlgorithm_ClassNew(); }
#define DECLARED_PyvtkReaderAlgorithm_ClassNew
#endif

static PyObject *
PyvtkSimpleReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSimpleReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSimpleReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSimpleReader *tempr = vtkSimpleReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSimpleReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSimpleReader::NewInstance());

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
PyvtkSimpleReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSimpleReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSimpleReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_AddFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->AddFileName(temp0);
    }
    else
    {
      op->vtkSimpleReader::AddFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_ClearFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearFileNames();
    }
    else
    {
      op->vtkSimpleReader::ClearFileNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_GetNumberOfFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFileNames() :
      op->vtkSimpleReader::GetNumberOfFileNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName(temp0) :
      op->vtkSimpleReader::GetFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_GetCurrentFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCurrentFileName() :
      op->vtkSimpleReader::GetCurrentFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_ReadTimeDependentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadTimeDependentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadTimeDependentMetaData(temp0, temp1) :
      op->vtkSimpleReader::ReadTimeDependentMetaData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_ReadMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadMetaData(temp0) :
      op->vtkSimpleReader::ReadMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_ReadMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkDataObject *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadMesh(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSimpleReader::ReadMesh(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_ReadPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkDataObject *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadPoints(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSimpleReader::ReadPoints(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_ReadArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkDataObject *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadArrays(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSimpleReader::ReadArrays(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_GetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeValue(temp0) :
      op->vtkSimpleReader::GetTimeValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_ReadMetaDataSimple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMetaDataSimple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  std::string temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetFilePath(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadMetaDataSimple(temp0, temp1) :
      op->vtkSimpleReader::ReadMetaDataSimple(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_ReadMeshSimple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMeshSimple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  std::string temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetFilePath(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    int tempr = op->ReadMeshSimple(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_ReadPointsSimple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPointsSimple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  std::string temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetFilePath(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    int tempr = op->ReadPointsSimple(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleReader_ReadArraysSimple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadArraysSimple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleReader *op = static_cast<vtkSimpleReader *>(vp);

  std::string temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetFilePath(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    int tempr = op->ReadArraysSimple(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSimpleReader_Methods[] = {
  {"IsTypeOf", PyvtkSimpleReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSimpleReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSimpleReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSimpleReader\nC++: static vtkSimpleReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSimpleReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSimpleReader\nC++: vtkSimpleReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSimpleReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSimpleReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddFileName", PyvtkSimpleReader_AddFileName, METH_VARARGS,
   "AddFileName(self, fname:str) -> None\nC++: void AddFileName(const char *fname)\n\nAdd a filename to be read. Since this superclass handles file\nseries to support time, multiple filenames can be added. Note\nthat the time values are either integers growing sequentially, or\nare obtained from individual files as supported by the subclass.\n"},
  {"ClearFileNames", PyvtkSimpleReader_ClearFileNames, METH_VARARGS,
   "ClearFileNames(self) -> None\nC++: void ClearFileNames()\n\nRemoves all filenames stored by the reader.\n"},
  {"GetNumberOfFileNames", PyvtkSimpleReader_GetNumberOfFileNames, METH_VARARGS,
   "GetNumberOfFileNames(self) -> int\nC++: int GetNumberOfFileNames()\n\nReturns the number of filenames stored by the reader.\n"},
  {"GetFileName", PyvtkSimpleReader_GetFileName, METH_VARARGS,
   "GetFileName(self, i:int) -> str\nC++: const char *GetFileName(int i)\n\nReturns a particular filename stored by the reader.\n"},
  {"GetCurrentFileName", PyvtkSimpleReader_GetCurrentFileName, METH_VARARGS,
   "GetCurrentFileName(self) -> str\nC++: const char *GetCurrentFileName()\n\nReturns the filename that was last loaded by the reader. This is\nset internally in ReadMesh()\n"},
  {"ReadTimeDependentMetaData", PyvtkSimpleReader_ReadTimeDependentMetaData, METH_VARARGS,
   "ReadTimeDependentMetaData(self, timestep:int,\n    metadata:vtkInformation) -> int\nC++: int ReadTimeDependentMetaData(int timestep,\n    vtkInformation *metadata) override;\n\nThis is the superclass API overridden by this class to provide\ntime support internally. Subclasses should not normally have to\noverride these methods.\n"},
  {"ReadMetaData", PyvtkSimpleReader_ReadMetaData, METH_VARARGS,
   "ReadMetaData(self, metadata:vtkInformation) -> int\nC++: int ReadMetaData(vtkInformation *metadata) override;\n\nProvide meta-data for the pipeline. This meta-data cannot vary\nover time as this method will not be called when only a request\nis changed. These include things like time steps. Subclasses may\nhave specialized interfaces making this simpler.\n"},
  {"ReadMesh", PyvtkSimpleReader_ReadMesh, METH_VARARGS,
   "ReadMesh(self, piece:int, npieces:int, nghosts:int, timestep:int,\n    output:vtkDataObject) -> int\nC++: int ReadMesh(int piece, int npieces, int nghosts,\n    int timestep, vtkDataObject *output) override;\n\nRead the mesh (connectivity) for a given set of data\npartitioning, number of ghost levels and time step (index). The\nreader populates the data object passed in as the last argument.\nIt is OK to read more than the mesh (points, arrays etc.).\nHowever, this may interfere with any caching implemented by the\nexecutive (i.e. cause more reads).\n"},
  {"ReadPoints", PyvtkSimpleReader_ReadPoints, METH_VARARGS,
   "ReadPoints(self, piece:int, npieces:int, nghosts:int,\n    timestep:int, output:vtkDataObject) -> int\nC++: int ReadPoints(int piece, int npieces, int nghosts,\n    int timestep, vtkDataObject *output) override;\n\nRead the points. The reader populates the input data object. This\nis called after ReadMesh() so the data object should already\ncontain the mesh.\n"},
  {"ReadArrays", PyvtkSimpleReader_ReadArrays, METH_VARARGS,
   "ReadArrays(self, piece:int, npieces:int, nghosts:int,\n    timestep:int, output:vtkDataObject) -> int\nC++: int ReadArrays(int piece, int npieces, int nghosts,\n    int timestep, vtkDataObject *output) override;\n\nRead all the arrays (point, cell, field etc.). This is called\nafter ReadPoints() so the data object should already contain the\nmesh and points.\n"},
  {"GetTimeValue", PyvtkSimpleReader_GetTimeValue, METH_VARARGS,
   "GetTimeValue(self, fname:str) -> float\nC++: virtual double GetTimeValue(const std::string &fname)\n\nA subclass can override this method to provide an actual time\nvalue for a given file (this method is called for each filename\nstored by the reader). If time values is not available, the\nsubclass does not have to override. This will return\nvtkMath::NaN() if no time value is present in the file.\n"},
  {"ReadMetaDataSimple", PyvtkSimpleReader_ReadMetaDataSimple, METH_VARARGS,
   "ReadMetaDataSimple(self, __a:str, __b:vtkInformation) -> int\nC++: virtual int ReadMetaDataSimple(const std::string &,\n    vtkInformation *)\n\nA subclass can override this method to provide meta data specific\nto a particular file. In order for this method to be called,\nHasTemporalMetaData has to be set to true.\n"},
  {"ReadMeshSimple", PyvtkSimpleReader_ReadMeshSimple, METH_VARARGS,
   "ReadMeshSimple(self, fname:str, output:vtkDataObject) -> int\nC++: virtual int ReadMeshSimple(const std::string &fname,\n    vtkDataObject *output)\n\nA method that needs to be override by the subclass to provide the\nmesh (topology). Note that the filename is passed to this method\nand should be used by the subclass. The subclass directly adds\nthe structure/topology to the provided data object.\n"},
  {"ReadPointsSimple", PyvtkSimpleReader_ReadPointsSimple, METH_VARARGS,
   "ReadPointsSimple(self, fname:str, output:vtkDataObject) -> int\nC++: virtual int ReadPointsSimple(const std::string &fname,\n    vtkDataObject *output)\n\nA method that needs to be override by the subclass to provide the\npoint coordinates. Note that the filename is passed to this\nmethod and should be used by the subclass. The subclass directly\nadds the coordinates to the provided data object.\n"},
  {"ReadArraysSimple", PyvtkSimpleReader_ReadArraysSimple, METH_VARARGS,
   "ReadArraysSimple(self, fname:str, output:vtkDataObject) -> int\nC++: virtual int ReadArraysSimple(const std::string &fname,\n    vtkDataObject *output)\n\nA method that needs to be override by the subclass to provide\ndata arrays. Note that the filename is passed to this method and\nshould be used by the subclass. The subclass directly adds data\narrays to the provided data object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSimpleReader_Doc =
  "vtkSimpleReader - Superclass for algorithms that are not time or\nparallel aware\n\n"
  "Superclass: vtkReaderAlgorithm\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSimpleReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkSimpleReader", // tp_name
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
  PyvtkSimpleReader_Doc, // tp_doc
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

PyObject *PyvtkSimpleReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSimpleReader_Type, PyvtkSimpleReader_Methods,
    "vtkSimpleReader",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkReaderAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSimpleReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSimpleReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSimpleReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

