// python wrapper for vtkEdgeTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkEdgeTable.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEdgeTable(PyObject *dict); }
extern "C" { PyObject *PyvtkEdgeTable_ClassNew(); }


static PyObject *
PyvtkEdgeTable_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEdgeTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEdgeTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeTable_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEdgeTable *tempr = vtkEdgeTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEdgeTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEdgeTable::NewInstance());

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
PyvtkEdgeTable_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEdgeTable::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeTable_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEdgeTable::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeTable_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkEdgeTable::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeTable_InitEdgeInsertion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitEdgeInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  long long temp0;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->InitEdgeInsertion(temp0, temp1) :
      op->vtkEdgeTable::InitEdgeInsertion(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeTable_InsertEdge_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertEdge(temp0, temp1) :
      op->vtkEdgeTable::InsertEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkEdgeTable_InsertEdge_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  long long temp0;
  long long temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->InsertEdge(temp0, temp1, temp2);
    }
    else
    {
      op->vtkEdgeTable::InsertEdge(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEdgeTable_InsertEdge_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  long long temp0;
  long long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    if (ap.IsBound())
    {
      op->InsertEdge(temp0, temp1, temp2);
    }
    else
    {
      op->vtkEdgeTable::InsertEdge(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  return result;
}

static PyMethodDef PyvtkEdgeTable_InsertEdge_Methods[] = {
  {"InsertEdge", PyvtkEdgeTable_InsertEdge_s2, METH_VARARGS,
   "@kkk"},
  {"InsertEdge", PyvtkEdgeTable_InsertEdge_s3, METH_VARARGS,
   "@kkv"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkEdgeTable_InsertEdge(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkEdgeTable_InsertEdge_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkEdgeTable_InsertEdge_s1(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertEdge");
  return nullptr;
}


static PyObject *
PyvtkEdgeTable_IsEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->IsEdge(temp0, temp1) :
      op->vtkEdgeTable::IsEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeTable_InitPointInsertion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  vtkPoints *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->InitPointInsertion(temp0, temp1) :
      op->vtkEdgeTable::InitPointInsertion(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeTable_InsertUniquePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniquePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  long long temp0;
  long long temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->InsertUniquePoint(temp0, temp1, temp2, temp3) :
      op->vtkEdgeTable::InsertUniquePoint(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeTable_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkEdgeTable::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeTable_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal();
    }
    else
    {
      op->vtkEdgeTable::InitTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeTable_GetNextEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNextEdge(temp0, temp1) :
      op->vtkEdgeTable::GetNextEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeTable_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkEdgeTable::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkEdgeTable_Methods[] = {
  {"IsTypeOf", PyvtkEdgeTable_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEdgeTable_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEdgeTable_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEdgeTable\nC++: static vtkEdgeTable *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEdgeTable_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEdgeTable\nC++: vtkEdgeTable *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEdgeTable_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEdgeTable_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkEdgeTable_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize()\n\nFree memory and return to the initially instantiated state.\n"},
  {"InitEdgeInsertion", PyvtkEdgeTable_InitEdgeInsertion, METH_VARARGS,
   "InitEdgeInsertion(self, numPoints:int, storeAttributes:int=0)\n    -> int\nC++: int InitEdgeInsertion(vtkIdType numPoints,\n    int storeAttributes=0)\n\nInitialize the edge insertion process. Provide an estimate of the\nnumber of points in a dataset (the maximum range value of p1 or\np2).  The storeAttributes variable controls whether attributes\nare to be stored with the edge, and what type of attributes. If\nstoreAttributes==1, then attributes of vtkIdType can be stored.\nIf storeAttributes==2, then attributes of type void* can be\nstored. In either case, additional memory will be required by the\ndata structure to store attribute data per each edge.  This\nmethod is used in conjunction with one of the three InsertEdge()\nmethods described below (don't mix the InsertEdge()\nmethods---make sure that the one used is consistent with the\nstoreAttributes flag set in InitEdgeInsertion()).\n"},
  {"InsertEdge", PyvtkEdgeTable_InsertEdge, METH_VARARGS,
   "InsertEdge(self, p1:int, p2:int) -> int\nC++: vtkIdType InsertEdge(vtkIdType p1, vtkIdType p2)\nInsertEdge(self, p1:int, p2:int, attributeId:int) -> None\nC++: void InsertEdge(vtkIdType p1, vtkIdType p2,\n    vtkIdType attributeId)\nInsertEdge(self, p1:int, p2:int, ptr:Pointer) -> None\nC++: void InsertEdge(vtkIdType p1, vtkIdType p2, void *ptr)\n\nInsert the edge (p1,p2) into the table. It is the user's\nresponsibility to check if the edge has already been inserted\n(use IsEdge()). If the storeAttributes flag in\nInitEdgeInsertion() has been set, then the method returns a\nunique integer id (i.e., the edge id) that can be used to set and\nget edge attributes. Otherwise, the method will return 1. Do not\nmix this method with the InsertEdge() method that follows.\n"},
  {"IsEdge", PyvtkEdgeTable_IsEdge, METH_VARARGS,
   "IsEdge(self, p1:int, p2:int) -> int\nC++: vtkIdType IsEdge(vtkIdType p1, vtkIdType p2)\n\nReturn an integer id for the edge, or an attribute id of the edge\n(p1,p2) if the edge has been previously defined (it depends upon\nwhich version of InsertEdge() is being used); otherwise -1. The\nunique integer id can be used to set and retrieve attributes to\nthe edge.\n"},
  {"InitPointInsertion", PyvtkEdgeTable_InitPointInsertion, METH_VARARGS,
   "InitPointInsertion(self, newPts:vtkPoints, estSize:int) -> int\nC++: int InitPointInsertion(vtkPoints *newPts, vtkIdType estSize)\n\nInitialize the point insertion process. The newPts is an object\nrepresenting point coordinates into which incremental insertion\nmethods place their data. The points are associated with the\nedge.\n"},
  {"InsertUniquePoint", PyvtkEdgeTable_InsertUniquePoint, METH_VARARGS,
   "InsertUniquePoint(self, p1:int, p2:int, x:[float, float, float],\n    ptId:int) -> int\nC++: int InsertUniquePoint(vtkIdType p1, vtkIdType p2,\n    double x[3], vtkIdType &ptId)\n\nInsert a unique point on the specified edge. Invoke this method\nonly after InitPointInsertion() has been called. Return 0 if\npoint was already in the list, otherwise return 1.\n"},
  {"GetNumberOfEdges", PyvtkEdgeTable_GetNumberOfEdges, METH_VARARGS,
   "GetNumberOfEdges(self) -> int\nC++: virtual vtkIdType GetNumberOfEdges()\n\nReturn the number of edges that have been inserted thus far.\n"},
  {"InitTraversal", PyvtkEdgeTable_InitTraversal, METH_VARARGS,
   "InitTraversal(self) -> None\nC++: void InitTraversal()\n\nInitialize traversal of edges in table.\n"},
  {"GetNextEdge", PyvtkEdgeTable_GetNextEdge, METH_VARARGS,
   "GetNextEdge(self, p1:int, p2:int) -> int\nC++: vtkIdType GetNextEdge(vtkIdType &p1, vtkIdType &p2)\n\nTraverse list of edges in table. Return the edge as (p1,p2),\nwhere p1 and p2 are point id's. Method return value is <0 if list\nis exhausted; non-zero otherwise. The value of p1 is guaranteed\nto be <= p2.\n"},
  {"Reset", PyvtkEdgeTable_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nReset the object and prepare for reinsertion of edges. Does not\ndelete memory like the Initialize() method.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEdgeTable_Doc =
  "vtkEdgeTable - keep track of edges (edge is pair of integer id's)\n\n"
  "Superclass: vtkObject\n\n"
  "vtkEdgeTable is a general object for keeping track of lists of edges.\n"
  "An edge is defined by the pair of point id's (p1,p2). Methods are\n"
  "available to insert edges, check if edges exist, and traverse the\n"
  "list of edges. Also, it's possible to associate attribute information\n"
  "with each edge. The attribute information may take the form of\n"
  "vtkIdType id's, void* pointers, or points. To store attributes, make\n"
  "sure that InitEdgeInsertion() is invoked with the storeAttributes\n"
  "flag set properly. If points are inserted, use the methods\n"
  "InitPointInsertion() and InsertUniquePoint().\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEdgeTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkEdgeTable", // tp_name
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
  PyvtkEdgeTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEdgeTable_StaticNew()
{
  return vtkEdgeTable::New();
}

PyObject *PyvtkEdgeTable_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEdgeTable_Type, PyvtkEdgeTable_Methods,
    "vtkEdgeTable",
 &PyvtkEdgeTable_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEdgeTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEdgeTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEdgeTable", o) != 0)
  {
    Py_DECREF(o);
  }

}

