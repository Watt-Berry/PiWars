// python wrapper for vtkKMeansStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkKMeansStatistics.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkKMeansStatistics(PyObject *dict); }
extern "C" { PyObject *PyvtkKMeansStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkStatisticsAlgorithm_ClassNew
extern "C" { PyObject *PyvtkStatisticsAlgorithm_ClassNew(); }
#define DECLARED_PyvtkStatisticsAlgorithm_ClassNew
#endif

static PyObject *
PyvtkKMeansStatistics_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkKMeansStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKMeansStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkKMeansStatistics *tempr = vtkKMeansStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKMeansStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKMeansStatistics::NewInstance());

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
PyvtkKMeansStatistics_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkKMeansStatistics::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkKMeansStatistics::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_SetDistanceFunctor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceFunctor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  vtkKMeansDistanceFunctor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKMeansDistanceFunctor"))
  {
    if (ap.IsBound())
    {
      op->SetDistanceFunctor(temp0);
    }
    else
    {
      op->vtkKMeansStatistics::SetDistanceFunctor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_GetDistanceFunctor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceFunctor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKMeansDistanceFunctor *tempr = (ap.IsBound() ?
      op->GetDistanceFunctor() :
      op->vtkKMeansStatistics::GetDistanceFunctor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_SetDefaultNumberOfClusters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNumberOfClusters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultNumberOfClusters(temp0);
    }
    else
    {
      op->vtkKMeansStatistics::SetDefaultNumberOfClusters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_GetDefaultNumberOfClusters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNumberOfClusters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultNumberOfClusters() :
      op->vtkKMeansStatistics::GetDefaultNumberOfClusters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_SetKValuesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKValuesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKValuesArrayName(temp0);
    }
    else
    {
      op->vtkKMeansStatistics::SetKValuesArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_GetKValuesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKValuesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetKValuesArrayName() :
      op->vtkKMeansStatistics::GetKValuesArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_SetMaxNumIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxNumIterations(temp0);
    }
    else
    {
      op->vtkKMeansStatistics::SetMaxNumIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_GetMaxNumIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumIterations() :
      op->vtkKMeansStatistics::GetMaxNumIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkKMeansStatistics::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkKMeansStatistics::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  vtkDataObjectCollection *temp0 = nullptr;
  vtkMultiBlockDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectCollection") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet"))
  {
    if (ap.IsBound())
    {
      op->Aggregate(temp0, temp1);
    }
    else
    {
      op->vtkKMeansStatistics::Aggregate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_SetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  vtkVariant *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetParameter(temp0, temp1, *temp2) :
      op->vtkKMeansStatistics::SetParameter(temp0, temp1, *temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj2);

  return result;
}


static PyObject *
PyvtkKMeansStatistics_SetGhostsToSkip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostsToSkip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGhostsToSkip(temp0);
    }
    else
    {
      op->vtkKMeansStatistics::SetGhostsToSkip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_GetGhostsToSkip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostsToSkip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetGhostsToSkip() :
      op->vtkKMeansStatistics::GetGhostsToSkip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkKMeansStatistics_Methods[] = {
  {"IsTypeOf", PyvtkKMeansStatistics_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkKMeansStatistics_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkKMeansStatistics_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkKMeansStatistics\nC++: static vtkKMeansStatistics *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkKMeansStatistics_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkKMeansStatistics\nC++: vtkKMeansStatistics *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkKMeansStatistics_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkKMeansStatistics_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDistanceFunctor", PyvtkKMeansStatistics_SetDistanceFunctor, METH_VARARGS,
   "SetDistanceFunctor(self, __a:vtkKMeansDistanceFunctor) -> None\nC++: virtual void SetDistanceFunctor(vtkKMeansDistanceFunctor *)\n\nSet the DistanceFunctor.\n"},
  {"GetDistanceFunctor", PyvtkKMeansStatistics_GetDistanceFunctor, METH_VARARGS,
   "GetDistanceFunctor(self) -> vtkKMeansDistanceFunctor\nC++: virtual vtkKMeansDistanceFunctor *GetDistanceFunctor()\n\n"},
  {"SetDefaultNumberOfClusters", PyvtkKMeansStatistics_SetDefaultNumberOfClusters, METH_VARARGS,
   "SetDefaultNumberOfClusters(self, _arg:int) -> None\nC++: virtual void SetDefaultNumberOfClusters(int _arg)\n\nSet/get the DefaultNumberOfClusters, used when no initial cluster\ncoordinates are specified.\n"},
  {"GetDefaultNumberOfClusters", PyvtkKMeansStatistics_GetDefaultNumberOfClusters, METH_VARARGS,
   "GetDefaultNumberOfClusters(self) -> int\nC++: virtual int GetDefaultNumberOfClusters()\n\n"},
  {"SetKValuesArrayName", PyvtkKMeansStatistics_SetKValuesArrayName, METH_VARARGS,
   "SetKValuesArrayName(self, _arg:str) -> None\nC++: virtual void SetKValuesArrayName(const char *_arg)\n\nSet/get the KValuesArrayName.\n"},
  {"GetKValuesArrayName", PyvtkKMeansStatistics_GetKValuesArrayName, METH_VARARGS,
   "GetKValuesArrayName(self) -> str\nC++: virtual char *GetKValuesArrayName()\n\n"},
  {"SetMaxNumIterations", PyvtkKMeansStatistics_SetMaxNumIterations, METH_VARARGS,
   "SetMaxNumIterations(self, _arg:int) -> None\nC++: virtual void SetMaxNumIterations(int _arg)\n\nSet/get the MaxNumIterations used to terminate iterations on\ncluster center coordinates when the relative tolerance can not be\nmet.\n"},
  {"GetMaxNumIterations", PyvtkKMeansStatistics_GetMaxNumIterations, METH_VARARGS,
   "GetMaxNumIterations(self) -> int\nC++: virtual int GetMaxNumIterations()\n\n"},
  {"SetTolerance", PyvtkKMeansStatistics_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nSet/get the relative Tolerance used to terminate iterations on\ncluster center coordinates.\n"},
  {"GetTolerance", PyvtkKMeansStatistics_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {"Aggregate", PyvtkKMeansStatistics_Aggregate, METH_VARARGS,
   "Aggregate(self, __a:vtkDataObjectCollection,\n    __b:vtkMultiBlockDataSet) -> None\nC++: void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *) override;\n\nGiven a collection of models, calculate aggregate model NB: not\nimplemented\n"},
  {"SetParameter", PyvtkKMeansStatistics_SetParameter, METH_VARARGS,
   "SetParameter(self, parameter:str, index:int, value:vtkVariant)\n    -> bool\nC++: bool SetParameter(const char *parameter, int index,\n    vtkVariant value) override;\n\nA convenience method for setting properties by name.\n"},
  {"SetGhostsToSkip", PyvtkKMeansStatistics_SetGhostsToSkip, METH_VARARGS,
   "SetGhostsToSkip(self, _arg:int) -> None\nC++: virtual void SetGhostsToSkip(unsigned char _arg)\n\nIf there is a ghost array in the input, then ghosts matching\n`GhostsToSkip` mask will be skipped. It is set to 0xff by default\n(every ghosts types are skipped).\n\n@sa\nvtkDataSetAttributes vtkFieldData vtkPointData vtkCellData\n"},
  {"GetGhostsToSkip", PyvtkKMeansStatistics_GetGhostsToSkip, METH_VARARGS,
   "GetGhostsToSkip(self) -> int\nC++: virtual unsigned char GetGhostsToSkip()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkKMeansStatistics_Doc =
  "vtkKMeansStatistics - A class for KMeans clustering\n\n"
  "Superclass: vtkStatisticsAlgorithm\n\n"
  "This class takes as input an optional vtkTable on port\n"
  "LEARN_PARAMETERS specifying initial  set(s) of cluster values of the\n"
  "following form:\n\n\n"
  "          K     | Col1            |  ...    | ColN\n"
  "-----------+-----------------+---------+--------------- M    \n"
  "    |clustCoord(1, 1) |  ...    | clustCoord(1, N) M    \n"
  "    |clustCoord(2, 1) |  ...    | clustCoord(2, N) .     |       .   \n"
  "     |   .     |        . .     |       .         |   .     |       \n"
  "    . .     |       .         |   .     |        . M    \n"
  "    |clustCoord(M, 1) |  ...    | clustCoord(M, N) L    \n"
  "    |clustCoord(1, 1) |  ...    | clustCoord(1, N) L    \n"
  "    |clustCoord(2, 1) |  ...    | clustCoord(2, N) .     |       .   \n"
  "     |   .     |        . .     |       .         |   .     |       \n"
  "    . .     |       .         |   .     |        . L    \n"
  "    |clustCoord(L, 1) |  ...    | clustCoord(L, N) \n\n"
  "Because the desired value of K is often not known in advance and the\n"
  "results of the algorithm are dependent on the initial cluster\n"
  "centers, we provide a mechanism for the user to test multiple runs or\n"
  "sets of cluster centers within a single call to the Learn phase.  The\n"
  "first column of the table identifies the number of clusters K in the\n"
  "particular run (the entries in this column should be of type\n"
  "vtkIdType), while the remaining columns are a subset of the columns\n"
  "contained in the table on port INPUT_DATA.  We require that all user\n"
  "specified clusters be of the same dimension N and consequently, that\n"
  "the LEARN_PARAMETERS table have N+1 columns. Due to this restriction,\n"
  "only one request can be processed for each call to the Learn phase\n"
  "and subsequent requests are silently ignored. Note that, if the first\n"
  "column of the LEARN_PARAMETERS table is not of type vtkIdType, then\n"
  "the table will be ignored and a single run will be performed using\n"
  "the first DefaultNumberOfClusters input data observations as initial\n"
  "cluster centers.\n\n"
  "When the user does not supply an initial set of clusters, then the\n"
  "first DefaultNumberOfClusters input data observations are used as\n"
  "initial cluster centers and a single run is performed.\n\n"
  "This class provides the following functionalities, depending on the\n"
  "operation in which it is executed:\n"
  "* Learn: calculates new cluster centers for each run.  The output\n"
  "  metadata on port OUTPUT_MODEL is a multiblock dataset containing at\n"
  "a minimum one vtkTable with columns specifying the following for each\n"
  "run: the run ID, number of clusters, number of iterations required\n"
  "  for convergence, total error associated with the cluster (sum of\n"
  "  squared Euclidean distance from each observation to its nearest\n"
  "  cluster center), the cardinality of the cluster, and the new\n"
  "  cluster coordinates.\n\n"
  "* Derive:  An additional vtkTable is stored in the multiblock dataset\n"
  "output on port OUTPUT_MODEL. This table contains columns that store\n"
  "  for each run: the runID, number of clusters, total error for all\n"
  "  clusters in the run, local rank, and global rank. The local rank is\n"
  "computed by comparing squared Euclidean errors of all runs with the\n"
  "  same number of clusters.  The global rank is computed analagously\n"
  "  across all runs.\n\n"
  "* Assess: This requires a multiblock dataset (as computed from Learn\n"
  "  and Derive) on input port INPUT_MODEL and tabular data on input\n"
  "  port INPUT_DATA that contains column names matching those of the\n"
  "  tables on input port INPUT_MODEL. The assess mode reports the\n"
  "  closest cluster center and associated squared Euclidean distance of\n"
  "each observation in port INPUT_DATA's table to the cluster centers\n"
  "  for each run in the multiblock dataset provided on port\n"
  "  INPUT_MODEL.\n\n"
  "The code can handle a wide variety of data types as it operates on\n"
  "vtkAbstractArrays and is not limited to vtkDataArrays.  A default\n"
  "distance functor that computes the sum of the squares of the\n"
  "Euclidean distance between two objects is provided\n"
  "(vtkKMeansDistanceFunctor). The default distance functor can be\n"
  "overridden to use alternative distance metrics.\n\n"
  "@par Thanks: Thanks to Janine Bennett, David Thompson, and Philippe\n"
  "Pebay of Sandia National Laboratories for implementing this class.\n"
  "Updated by Philippe Pebay, Kitware SAS 2012\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkKMeansStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersStatistics.vtkKMeansStatistics", // tp_name
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
  PyvtkKMeansStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkKMeansStatistics_StaticNew()
{
  return vtkKMeansStatistics::New();
}

PyObject *PyvtkKMeansStatistics_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkKMeansStatistics_Type, PyvtkKMeansStatistics_Methods,
    "vtkKMeansStatistics",
 &PyvtkKMeansStatistics_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkStatisticsAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkKMeansStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkKMeansStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkKMeansStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

