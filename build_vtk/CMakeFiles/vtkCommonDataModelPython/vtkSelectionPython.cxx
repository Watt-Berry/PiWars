// python wrapper for vtkSelection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkSelection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSelection(PyObject *dict); }
extern "C" { PyObject *PyvtkSelection_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif

static PyObject *
PyvtkSelection_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSelection *tempr = vtkSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelection::NewInstance());

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
PyvtkSelection_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSelection::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSelection::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkSelection::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkSelection::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkSelection::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_GetNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSelectionNode *tempr = (ap.IsBound() ?
      op->GetNode(temp0) :
      op->vtkSelection::GetNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelection_GetNode_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSelectionNode *tempr = (ap.IsBound() ?
      op->GetNode(temp0) :
      op->vtkSelection::GetNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSelection_GetNode_Methods[] = {
  {"GetNode", PyvtkSelection_GetNode_s1, METH_VARARGS,
   "@I"},
  {"GetNode", PyvtkSelection_GetNode_s2, METH_VARARGS,
   "@s"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSelection_GetNode(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_GetNode_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNode");
  return nullptr;
}


static PyObject *
PyvtkSelection_AddNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
  {
    std::string tempr = (ap.IsBound() ?
      op->AddNode(temp0) :
      op->vtkSelection::AddNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_SetNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  std::string temp0;
  vtkSelectionNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSelectionNode"))
  {
    if (ap.IsBound())
    {
      op->SetNode(temp0, temp1);
    }
    else
    {
      op->vtkSelection::SetNode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_GetNodeNameAtIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeNameAtIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNodeNameAtIndex(temp0) :
      op->vtkSelection::GetNodeNameAtIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_RemoveNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveNode(temp0);
    }
    else
    {
      op->vtkSelection::RemoveNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelection_RemoveNode_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveNode(temp0);
    }
    else
    {
      op->vtkSelection::RemoveNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelection_RemoveNode_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
  {
    if (ap.IsBound())
    {
      op->RemoveNode(temp0);
    }
    else
    {
      op->vtkSelection::RemoveNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSelection_RemoveNode_Methods[] = {
  {"RemoveNode", PyvtkSelection_RemoveNode_s1, METH_VARARGS,
   "@I"},
  {"RemoveNode", PyvtkSelection_RemoveNode_s2, METH_VARARGS,
   "@s"},
  {"RemoveNode", PyvtkSelection_RemoveNode_s3, METH_VARARGS,
   "@V *vtkSelectionNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSelection_RemoveNode(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_RemoveNode_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveNode");
  return nullptr;
}


static PyObject *
PyvtkSelection_RemoveAllNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllNodes();
    }
    else
    {
      op->vtkSelection::RemoveAllNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_SetExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExpression(temp0);
    }
    else
    {
      op->vtkSelection::SetExpression(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_GetExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetExpression() :
      op->vtkSelection::GetExpression());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkSelection::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSelection::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_Union_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Union");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->Union(temp0);
    }
    else
    {
      op->vtkSelection::Union(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelection_Union_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Union");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
  {
    if (ap.IsBound())
    {
      op->Union(temp0);
    }
    else
    {
      op->vtkSelection::Union(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSelection_Union_Methods[] = {
  {"Union", PyvtkSelection_Union_s1, METH_VARARGS,
   "@V *vtkSelection"},
  {"Union", PyvtkSelection_Union_s2, METH_VARARGS,
   "@V *vtkSelectionNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSelection_Union(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_Union_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Union");
  return nullptr;
}


static PyObject *
PyvtkSelection_Subtract_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Subtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->Subtract(temp0);
    }
    else
    {
      op->vtkSelection::Subtract(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelection_Subtract_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Subtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
  {
    if (ap.IsBound())
    {
      op->Subtract(temp0);
    }
    else
    {
      op->vtkSelection::Subtract(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSelection_Subtract_Methods[] = {
  {"Subtract", PyvtkSelection_Subtract_s1, METH_VARARGS,
   "@V *vtkSelection"},
  {"Subtract", PyvtkSelection_Subtract_s2, METH_VARARGS,
   "@V *vtkSelectionNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSelection_Subtract(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_Subtract_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Subtract");
  return nullptr;
}


static PyObject *
PyvtkSelection_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSelection::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_Dump(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dump");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Dump();
    }
    else
    {
      op->vtkSelection::Dump();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkSelection *tempr = vtkSelection::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelection_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkSelection *tempr = vtkSelection::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSelection_GetData_Methods[] = {
  {"GetData", PyvtkSelection_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkSelection_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSelection_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelection_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}

static PyMethodDef PyvtkSelection_Methods[] = {
  {"IsTypeOf", PyvtkSelection_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSelection_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSelection_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSelection\nC++: static vtkSelection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSelection_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSelection\nC++: vtkSelection *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSelection_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSelection_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkSelection_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nRestore data object to initial state,\n"},
  {"GetDataObjectType", PyvtkSelection_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturns VTK_SELECTION enumeration value.\n"},
  {"GetNumberOfNodes", PyvtkSelection_GetNumberOfNodes, METH_VARARGS,
   "GetNumberOfNodes(self) -> int\nC++: unsigned int GetNumberOfNodes()\n\nReturns the number of nodes in this selection. Each node contains\ninformation about part of the selection.\n"},
  {"GetNode", PyvtkSelection_GetNode, METH_VARARGS,
   "GetNode(self, idx:int) -> vtkSelectionNode\nC++: virtual vtkSelectionNode *GetNode(unsigned int idx)\nGetNode(self, name:str) -> vtkSelectionNode\nC++: virtual vtkSelectionNode *GetNode(const std::string &name)\n\nReturns a node given it's index. Performs bound checking and will\nreturn nullptr if out-of-bounds.\n"},
  {"AddNode", PyvtkSelection_AddNode, METH_VARARGS,
   "AddNode(self, __a:vtkSelectionNode) -> str\nC++: virtual std::string AddNode(vtkSelectionNode *)\n\nAdds a selection node. Assigns the node a unique name and returns\nthat name. This API is primarily provided for backwards\ncompatibility and `SetNode` is the preferred method.\n"},
  {"SetNode", PyvtkSelection_SetNode, METH_VARARGS,
   "SetNode(self, name:str, __b:vtkSelectionNode) -> None\nC++: virtual void SetNode(const std::string &name,\n    vtkSelectionNode *)\n\nAdds a vtkSelectionNode and assigns it the specified name. The\nname must be a non-empty string. If an item with the same name\nhas already been added, it will be removed.\n"},
  {"GetNodeNameAtIndex", PyvtkSelection_GetNodeNameAtIndex, METH_VARARGS,
   "GetNodeNameAtIndex(self, idx:int) -> str\nC++: virtual std::string GetNodeNameAtIndex(unsigned int idx)\n\nReturns the name for a node at the given index.\n"},
  {"RemoveNode", PyvtkSelection_RemoveNode, METH_VARARGS,
   "RemoveNode(self, idx:int) -> None\nC++: virtual void RemoveNode(unsigned int idx)\nRemoveNode(self, name:str) -> None\nC++: virtual void RemoveNode(const std::string &name)\nRemoveNode(self, __a:vtkSelectionNode) -> None\nC++: virtual void RemoveNode(vtkSelectionNode *)\n\nRemoves a selection node.\n"},
  {"RemoveAllNodes", PyvtkSelection_RemoveAllNodes, METH_VARARGS,
   "RemoveAllNodes(self) -> None\nC++: virtual void RemoveAllNodes()\n\nRemoves all selection nodes.\n"},
  {"SetExpression", PyvtkSelection_SetExpression, METH_VARARGS,
   "SetExpression(self, _arg:str) -> None\nC++: virtual void SetExpression(std::string _arg)\n\nGet/Set the expression that defines the boolean expression to\ncombine the selection nodes. Expression consists of node name\nidentifiers, `|` for boolean-or, '^' for boolean-xor, '&' for\nboolean and, '!' for boolean not, and parenthesis `(` and `)`. If\nthe expression consists of a node name identifier that is not\nassigned any `vtkSelectionNode` (using `SetNode`) then it is\nevaluates to `false`.\n\n`SetExpression` does not validate the expression. It will be\nvalidated in `Evaluate` call.\n"},
  {"GetExpression", PyvtkSelection_GetExpression, METH_VARARGS,
   "GetExpression(self) -> str\nC++: virtual std::string GetExpression()\n\n"},
  {"DeepCopy", PyvtkSelection_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *src) override;\n\nCopy selection nodes of the input.\n"},
  {"ShallowCopy", PyvtkSelection_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, src:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nCopy selection nodes of the input. This is a shallow copy:\nselection lists and pointers in the properties are passed by\nreference.\n"},
  {"Union", PyvtkSelection_Union, METH_VARARGS,
   "Union(self, selection:vtkSelection) -> None\nC++: virtual void Union(vtkSelection *selection)\nUnion(self, node:vtkSelectionNode) -> None\nC++: virtual void Union(vtkSelectionNode *node)\n\nUnion this selection with the specified selection. Attempts to\nreuse selection nodes in this selection if properties match\nexactly. Otherwise, creates new selection nodes.\n"},
  {"Subtract", PyvtkSelection_Subtract, METH_VARARGS,
   "Subtract(self, selection:vtkSelection) -> None\nC++: virtual void Subtract(vtkSelection *selection)\nSubtract(self, node:vtkSelectionNode) -> None\nC++: virtual void Subtract(vtkSelectionNode *node)\n\nRemove the nodes from the specified selection from this\nselection. Assumes that selection node internal arrays are\nvtkIdTypeArrays.\n"},
  {"GetMTime", PyvtkSelection_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime taking into account changes to the properties\n"},
  {"Dump", PyvtkSelection_Dump, METH_VARARGS,
   "Dump(self) -> None\nC++: virtual void Dump()\n\nDumps the contents of the selection, giving basic information\nonly.\n"},
  {"GetData", PyvtkSelection_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkSelection\nC++: static vtkSelection *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkSelection\nC++: static vtkSelection *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve a vtkSelection stored inside an invormation object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSelection_Doc =
  "vtkSelection - data object that represents a \"selection\" in VTK.\n\n"
  "Superclass: vtkDataObject\n\n"
  "vtkSelection defines a selection. A selection is a data-object that\n"
  "defines which entities from another data-object are to treated as\n"
  "\"selected\". Filters like `vtkExtractSelection` or\n"
  "`vtkExtractDataArraysOverTime` can then be used to extract these\n"
  "selected entities from the *other* data-object.\n\n"
  "vtkSelection comprises of `vtkSelectionNode`s and optionally, an\n"
  "expression specified using `vtkSelection::SetExpression`. If\n"
  "non-empty, the expression is a boolean expression that defines now\n"
  "the selection nodes present in the selection are to be combined\n"
  "together to form the selection. If no expression is specified and\n"
  "there are multiple selection nodes, then the default expression\n"
  "simply combines all the selection nodes using an `or` operator.\n\n"
  "Each vtkSelectionNode is used to define the selection criteria.\n"
  "vtkSelectionNode API lets one select what kind of entities are being\n"
  "selected (vtkSelectionNode::FieldType) and how they are being\n"
  "selected (vtkSelectionNode::ContentType).\n\n"
  "@sa\n"
  "vtkSelectionNode\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSelection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkSelection", // tp_name
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
  PyvtkSelection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSelection_StaticNew()
{
  return vtkSelection::New();
}

PyObject *PyvtkSelection_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSelection_Type, PyvtkSelection_Methods,
    "vtkSelection",
 &PyvtkSelection_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSelection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSelection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSelection", o) != 0)
  {
    Py_DECREF(o);
  }

}

