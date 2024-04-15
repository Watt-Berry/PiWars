// python wrapper for vtkHyperTreeGridOrientedCursor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridOrientedCursor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridOrientedCursor(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGridOrientedCursor_ClassNew(); }


static PyObject *
PyvtkHyperTreeGridOrientedCursor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridOrientedCursor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridOrientedCursor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridOrientedCursor *tempr = vtkHyperTreeGridOrientedCursor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridOrientedCursor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridOrientedCursor::NewInstance());

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
PyvtkHyperTreeGridOrientedCursor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridOrientedCursor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridOrientedCursor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_Clone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridOrientedCursor *tempr = (ap.IsBound() ?
      op->Clone() :
      op->vtkHyperTreeGridOrientedCursor::Clone());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  long long temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGridOrientedCursor::Initialize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridOrientedCursor_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  vtkHyperTree *temp1 = nullptr;
  unsigned int temp2;
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid") &&
      ap.GetVTKObject(temp1, "vtkHyperTree") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkHyperTreeGridOrientedCursor::Initialize(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridOrientedCursor_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return PyvtkHyperTreeGridOrientedCursor_Initialize_s1(self, args);
    case 4:
      return PyvtkHyperTreeGridOrientedCursor_Initialize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_GetGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGrid *tempr = (ap.IsBound() ?
      op->GetGrid() :
      op->vtkHyperTreeGridOrientedCursor::GetGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_HasTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasTree() :
      op->vtkHyperTreeGridOrientedCursor::HasTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_GetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTree *tempr = (ap.IsBound() ?
      op->GetTree() :
      op->vtkHyperTreeGridOrientedCursor::GetTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_GetVertexId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetVertexId() :
      op->vtkHyperTreeGridOrientedCursor::GetVertexId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_GetGlobalNodeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalNodeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetGlobalNodeIndex() :
      op->vtkHyperTreeGridOrientedCursor::GetGlobalNodeIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkHyperTreeGridOrientedCursor::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetNumberOfChildren() :
      op->vtkHyperTreeGridOrientedCursor::GetNumberOfChildren());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_SetGlobalIndexStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIndexStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlobalIndexStart(temp0);
    }
    else
    {
      op->vtkHyperTreeGridOrientedCursor::SetGlobalIndexStart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_SetGlobalIndexFromLocal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIndexFromLocal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlobalIndexFromLocal(temp0);
    }
    else
    {
      op->vtkHyperTreeGridOrientedCursor::SetGlobalIndexFromLocal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_SetMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMask(temp0);
    }
    else
    {
      op->vtkHyperTreeGridOrientedCursor::SetMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_IsMasked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMasked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsMasked() :
      op->vtkHyperTreeGridOrientedCursor::IsMasked());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_IsLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsLeaf() :
      op->vtkHyperTreeGridOrientedCursor::IsLeaf());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_SubdivideLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubdivideLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SubdivideLeaf();
    }
    else
    {
      op->vtkHyperTreeGridOrientedCursor::SubdivideLeaf();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_IsRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsRoot() :
      op->vtkHyperTreeGridOrientedCursor::IsRoot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkHyperTreeGridOrientedCursor::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridOrientedCursor_ToChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridOrientedCursor *op = static_cast<vtkHyperTreeGridOrientedCursor *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ToChild(temp0);
    }
    else
    {
      op->vtkHyperTreeGridOrientedCursor::ToChild(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridOrientedCursor_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridOrientedCursor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridOrientedCursor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridOrientedCursor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGridOrientedCursor\nC++: static vtkHyperTreeGridOrientedCursor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridOrientedCursor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridOrientedCursor\nC++: vtkHyperTreeGridOrientedCursor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridOrientedCursor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridOrientedCursor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Clone", PyvtkHyperTreeGridOrientedCursor_Clone, METH_VARARGS,
   "Clone(self) -> vtkHyperTreeGridOrientedCursor\nC++: vtkHyperTreeGridOrientedCursor *Clone()\n\nCreate a copy of `this'.\n\\post results_exists:result!=0\n"},
  {"Initialize", PyvtkHyperTreeGridOrientedCursor_Initialize, METH_VARARGS,
   "Initialize(self, grid:vtkHyperTreeGrid, treeIndex:int,\n    create:bool=False) -> None\nC++: void Initialize(vtkHyperTreeGrid *grid, vtkIdType treeIndex,\n    bool create=false)\nInitialize(self, grid:vtkHyperTreeGrid, tree:vtkHyperTree,\n    level:int, index:int) -> None\nC++: void Initialize(vtkHyperTreeGrid *grid, vtkHyperTree *tree,\n    unsigned int level, vtkIdType index)\n\nInitialize cursor at root of given tree index in grid.\n"},
  {"GetGrid", PyvtkHyperTreeGridOrientedCursor_GetGrid, METH_VARARGS,
   "GetGrid(self) -> vtkHyperTreeGrid\nC++: vtkHyperTreeGrid *GetGrid()\n\nSet the hyper tree grid to which the cursor is pointing.\n"},
  {"HasTree", PyvtkHyperTreeGridOrientedCursor_HasTree, METH_VARARGS,
   "HasTree(self) -> bool\nC++: bool HasTree()\n\nReturn if a Tree pointing exist\n"},
  {"GetTree", PyvtkHyperTreeGridOrientedCursor_GetTree, METH_VARARGS,
   "GetTree(self) -> vtkHyperTree\nC++: vtkHyperTree *GetTree()\n\nSet the hyper tree to which the cursor is pointing.\n"},
  {"GetVertexId", PyvtkHyperTreeGridOrientedCursor_GetVertexId, METH_VARARGS,
   "GetVertexId(self) -> int\nC++: vtkIdType GetVertexId()\n\nReturn the index of the current vertex in the tree.\n"},
  {"GetGlobalNodeIndex", PyvtkHyperTreeGridOrientedCursor_GetGlobalNodeIndex, METH_VARARGS,
   "GetGlobalNodeIndex(self) -> int\nC++: vtkIdType GetGlobalNodeIndex()\n\nReturn the global index (relative to the grid) of the current\nvertex in the tree.\n"},
  {"GetDimension", PyvtkHyperTreeGridOrientedCursor_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: unsigned char GetDimension()\n\nReturn the dimension of the tree.\n\\post positive_result: result>0\n"},
  {"GetNumberOfChildren", PyvtkHyperTreeGridOrientedCursor_GetNumberOfChildren, METH_VARARGS,
   "GetNumberOfChildren(self) -> int\nC++: unsigned char GetNumberOfChildren()\n\nReturn the number of children for each node (non-vertex leaf) of\nthe tree.\n\\post positive_number: result>0\n"},
  {"SetGlobalIndexStart", PyvtkHyperTreeGridOrientedCursor_SetGlobalIndexStart, METH_VARARGS,
   "SetGlobalIndexStart(self, index:int) -> None\nC++: void SetGlobalIndexStart(vtkIdType index)\n\nJB\n"},
  {"SetGlobalIndexFromLocal", PyvtkHyperTreeGridOrientedCursor_SetGlobalIndexFromLocal, METH_VARARGS,
   "SetGlobalIndexFromLocal(self, index:int) -> None\nC++: void SetGlobalIndexFromLocal(vtkIdType index)\n\nJB\n"},
  {"SetMask", PyvtkHyperTreeGridOrientedCursor_SetMask, METH_VARARGS,
   "SetMask(self, state:bool) -> None\nC++: void SetMask(bool state)\n\nSet the blanking mask is empty or not\n\\pre not_tree: tree\n"},
  {"IsMasked", PyvtkHyperTreeGridOrientedCursor_IsMasked, METH_VARARGS,
   "IsMasked(self) -> bool\nC++: bool IsMasked()\n\nDetermine whether blanking mask is empty or not\n"},
  {"IsLeaf", PyvtkHyperTreeGridOrientedCursor_IsLeaf, METH_VARARGS,
   "IsLeaf(self) -> bool\nC++: bool IsLeaf()\n\nIs the cursor pointing to a leaf?\n"},
  {"SubdivideLeaf", PyvtkHyperTreeGridOrientedCursor_SubdivideLeaf, METH_VARARGS,
   "SubdivideLeaf(self) -> None\nC++: void SubdivideLeaf()\n\nJB Fait chier normalement on devrait passer par GetEntry\n"},
  {"IsRoot", PyvtkHyperTreeGridOrientedCursor_IsRoot, METH_VARARGS,
   "IsRoot(self) -> bool\nC++: bool IsRoot()\n\nIs the cursor at tree root?\n"},
  {"GetLevel", PyvtkHyperTreeGridOrientedCursor_GetLevel, METH_VARARGS,
   "GetLevel(self) -> int\nC++: unsigned int GetLevel()\n\nGet the level of the tree vertex pointed by the cursor.\n"},
  {"ToChild", PyvtkHyperTreeGridOrientedCursor_ToChild, METH_VARARGS,
   "ToChild(self, ichild:int) -> None\nC++: void ToChild(unsigned char ichild)\n\nMove the cursor to child `child' of the current vertex.\n\\pre not_tree: HasTree()\n\\pre not_leaf: !IsLeaf()\n\\pre valid_child: ichild>=0 && ichild<GetNumberOfChildren()\n\\pre depth_limiter: GetLevel() <= GetDepthLimiter()\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGridOrientedCursor_Doc =
  "vtkHyperTreeGridOrientedCursor - Objects for traversal a\nHyperTreeGrid.\n\n"
  "Superclass: vtkObject\n\n"
  "JB A REVOIR Objects that can perform depth traversal of a hyper tree\n"
  "grid, take into account more parameters (related to the grid\n"
  "structure) than the compact hyper tree cursor implemented in\n"
  "vtkHyperTree can. This is an abstract class. Cursors are created by\n"
  "the HyperTreeGrid implementation.\n\n"
  "oriented cursors are used for simple recursive DFS. A cursor has no\n"
  "knowledge of its parent, only its children.\n\n"
  "@sa\n"
  "vtkHyperTreeCursor vtkHyperTree vtkHyperTreeGrid\n\n"
  "@par Thanks: This class was written by Guenole Harel and\n"
  "Jacques-Bernard Lekien, 2014. This class was re-written by Philippe\n"
  "Pebay, 2016. JB This class was re-written for more optimisation by\n"
  "Jacques-Bernard Lekien, Guenole Harel and Jerome Dubois, 2018. This\n"
  "work was supported by Commissariat a l'Energie Atomique CEA, DAM,\n"
  "DIF, F-91297 Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridOrientedCursor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkHyperTreeGridOrientedCursor", // tp_name
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
  PyvtkHyperTreeGridOrientedCursor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridOrientedCursor_StaticNew()
{
  return vtkHyperTreeGridOrientedCursor::New();
}

PyObject *PyvtkHyperTreeGridOrientedCursor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridOrientedCursor_Type, PyvtkHyperTreeGridOrientedCursor_Methods,
    "vtkHyperTreeGridOrientedCursor",
 &PyvtkHyperTreeGridOrientedCursor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridOrientedCursor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridOrientedCursor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridOrientedCursor", o) != 0)
  {
    Py_DECREF(o);
  }

}

