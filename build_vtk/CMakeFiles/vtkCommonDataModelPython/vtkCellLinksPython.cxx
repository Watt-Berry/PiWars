// python wrapper for vtkCellLinks
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellLinks.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellLinks(PyObject *dict); }
extern "C" { PyObject *PyvtkCellLinks_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractCellLinks_ClassNew
extern "C" { PyObject *PyvtkAbstractCellLinks_ClassNew(); }
#define DECLARED_PyvtkAbstractCellLinks_ClassNew
#endif

static PyObject *
PyvtkCellLinks_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellLinks::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellLinks::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellLinks *tempr = vtkCellLinks::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellLinks *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellLinks::NewInstance());

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
PyvtkCellLinks_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellLinks::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellLinks::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_BuildLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildLinks();
    }
    else
    {
      op->vtkCellLinks::BuildLinks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  long long temp0;
  long long temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Allocate(temp0, temp1);
    }
    else
    {
      op->vtkCellLinks::Allocate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkCellLinks::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_GetNcells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNcells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNcells(temp0) :
      op->vtkCellLinks::GetNcells(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_GetCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long *tempr = (ap.IsBound() ?
      op->GetCells(temp0) :
      op->vtkCellLinks::GetCells(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_SelectCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  const size_t size0 = 2;
  long long temp0[2];
  long long save0[2];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SelectCells(temp0, temp1);
    }
    else
    {
      op->vtkCellLinks::SelectCells(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_InsertNextPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextPoint(temp0) :
      op->vtkCellLinks::InsertNextPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_InsertNextCellReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCellReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->InsertNextCellReference(temp0, temp1);
    }
    else
    {
      op->vtkCellLinks::InsertNextCellReference(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_DeletePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeletePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeletePoint(temp0);
    }
    else
    {
      op->vtkCellLinks::DeletePoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_RemoveCellReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCellReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RemoveCellReference(temp0, temp1);
    }
    else
    {
      op->vtkCellLinks::RemoveCellReference(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_AddCellReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddCellReference(temp0, temp1);
    }
    else
    {
      op->vtkCellLinks::AddCellReference(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_ResizeCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizeCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  long long temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ResizeCellList(temp0, temp1);
    }
    else
    {
      op->vtkCellLinks::ResizeCellList(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkCellLinks::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkCellLinks::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkCellLinks::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkAbstractCellLinks *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLinks"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkCellLinks::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCellLinks_Methods[] = {
  {"IsTypeOf", PyvtkCellLinks_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellLinks_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellLinks_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellLinks\nC++: static vtkCellLinks *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellLinks_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellLinks\nC++: vtkCellLinks *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellLinks_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellLinks_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"BuildLinks", PyvtkCellLinks_BuildLinks, METH_VARARGS,
   "BuildLinks(self) -> None\nC++: void BuildLinks() override;\n\nBuild the link list array from the input dataset.\n"},
  {"Allocate", PyvtkCellLinks_Allocate, METH_VARARGS,
   "Allocate(self, numLinks:int, ext:int=1000) -> None\nC++: void Allocate(vtkIdType numLinks, vtkIdType ext=1000)\n\nAllocate the specified number of links (i.e., number of points)\nthat will be built.\n"},
  {"Initialize", PyvtkCellLinks_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nClear out any previously allocated data structures\n"},
  {"GetNcells", PyvtkCellLinks_GetNcells, METH_VARARGS,
   "GetNcells(self, ptId:int) -> int\nC++: vtkIdType GetNcells(vtkIdType ptId)\n\nGet the number of cells using the point specified by ptId.\n"},
  {"GetCells", PyvtkCellLinks_GetCells, METH_VARARGS,
   "GetCells(self, ptId:int) -> Pointer\nC++: vtkIdType *GetCells(vtkIdType ptId)\n\nReturn a list of cell ids using the point.\n"},
  {"SelectCells", PyvtkCellLinks_SelectCells, METH_VARARGS,
   "SelectCells(self, minMaxDegree:[int, int], cellSelection:[int,\n    ...]) -> None\nC++: void SelectCells(vtkIdType minMaxDegree[2],\n    unsigned char *cellSelection) override;\n\nSelect all cells with a point degree in the range\n[minDegree,maxDegree). The degree is the number of cells using a\npoint. The selection is indicated through the provided unsigned\nchar array, with a non-zero value indicates selection. The memory\nallocated for cellSelection must be the maximum cell id\nreferenced in the links.\n"},
  {"InsertNextPoint", PyvtkCellLinks_InsertNextPoint, METH_VARARGS,
   "InsertNextPoint(self, numLinks:int) -> int\nC++: vtkIdType InsertNextPoint(int numLinks)\n\nInsert a new point into the cell-links data structure. The size\nparameter is the initial size of the list.\n"},
  {"InsertNextCellReference", PyvtkCellLinks_InsertNextCellReference, METH_VARARGS,
   "InsertNextCellReference(self, ptId:int, cellId:int) -> None\nC++: void InsertNextCellReference(vtkIdType ptId,\n    vtkIdType cellId)\n\nInsert a cell id into the list of cells (at the end) using the\ncell id provided. (Make sure to extend the link list (if\nnecessary) using the method ResizeCellList().)\n"},
  {"DeletePoint", PyvtkCellLinks_DeletePoint, METH_VARARGS,
   "DeletePoint(self, ptId:int) -> None\nC++: void DeletePoint(vtkIdType ptId)\n\nDelete point (and storage) by destroying links to using cells.\n"},
  {"RemoveCellReference", PyvtkCellLinks_RemoveCellReference, METH_VARARGS,
   "RemoveCellReference(self, cellId:int, ptId:int) -> None\nC++: void RemoveCellReference(vtkIdType cellId, vtkIdType ptId)\n\nDelete the reference to the cell (cellId) from the point (ptId).\nThis removes the reference to the cellId from the cell list, but\ndoes not resize the list (recover memory with ResizeCellList(),\nif necessary).\n"},
  {"AddCellReference", PyvtkCellLinks_AddCellReference, METH_VARARGS,
   "AddCellReference(self, cellId:int, ptId:int) -> None\nC++: void AddCellReference(vtkIdType cellId, vtkIdType ptId)\n\nAdd the reference to the cell (cellId) from the point (ptId).\nThis adds a reference to the cellId from the cell list, but does\nnot resize the list (extend memory with ResizeCellList(), if\nnecessary).\n"},
  {"ResizeCellList", PyvtkCellLinks_ResizeCellList, METH_VARARGS,
   "ResizeCellList(self, ptId:int, size:int) -> None\nC++: void ResizeCellList(vtkIdType ptId, int size)\n\nChange the length of a point's link list (i.e., list of cells\nusing a point) by the size specified.\n"},
  {"Squeeze", PyvtkCellLinks_Squeeze, METH_VARARGS,
   "Squeeze(self) -> None\nC++: void Squeeze() override;\n\nReclaim any unused memory.\n"},
  {"Reset", PyvtkCellLinks_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset() override;\n\nReset to a state of no entries without freeing the memory.\n"},
  {"GetActualMemorySize", PyvtkCellLinks_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the memory in kibibytes (1024 bytes) consumed by this cell\nlinks array. Used to support streaming and reading/writing data.\nThe value returned is guaranteed to be greater than or equal to\nthe memory required to actually represent the data represented by\nthis object. The information returned is valid only after the\npipeline has been updated.\n"},
  {"DeepCopy", PyvtkCellLinks_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkAbstractCellLinks) -> None\nC++: void DeepCopy(vtkAbstractCellLinks *src) override;\n\nStandard DeepCopy method.  Since this object contains no\nreference to other objects, there is no ShallowCopy.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCellLinks_Doc =
  "vtkCellLinks - object represents upward pointers from points to list\nof cells using each point\n\n"
  "Superclass: vtkAbstractCellLinks\n\n"
  "vtkCellLinks is a supplemental object to vtkCellArray and\n"
  "vtkCellTypes, enabling access from points to the cells using the\n"
  "points. vtkCellLinks is a list of cell ids, each such link\n"
  "representing a dynamic list of cell ids using the point. The\n"
  "information provided by this object can be used to determine\n"
  "neighbors and construct other local topological information.\n\n"
  "@warning\n"
  "vtkCellLinks supports incremental (i.e., \"editable\") operations such\n"
  "as inserting a new cell, or deleting a point. Because of this, it is\n"
  "less memory efficient, and slower to construct and delete than static\n"
  "classes such as vtkStaticCellLinks or vtkStaticCellLinksTemplate.\n"
  "However these other classes are typically meant for one-time (static)\n"
  "construction.\n\n"
  "@sa\n"
  "vtkCellArray vtkCellTypes vtkStaticCellLinks\n"
  "vtkStaticCellLinksTemplate\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellLinks_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellLinks", // tp_name
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
  PyvtkCellLinks_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellLinks_StaticNew()
{
  return vtkCellLinks::New();
}

PyObject *PyvtkCellLinks_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellLinks_Type, PyvtkCellLinks_Methods,
    "vtkCellLinks",
 &PyvtkCellLinks_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractCellLinks_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellLinks(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellLinks_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellLinks", o) != 0)
  {
    Py_DECREF(o);
  }

}

