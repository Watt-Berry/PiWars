// python wrapper for vtkVtkJSSceneGraphSerializer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVtkJSSceneGraphSerializer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVtkJSSceneGraphSerializer(PyObject *dict); }
extern "C" { PyObject *PyvtkVtkJSSceneGraphSerializer_ClassNew(); }


static PyObject *
PyvtkVtkJSSceneGraphSerializer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVtkJSSceneGraphSerializer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSSceneGraphSerializer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSSceneGraphSerializer *op = static_cast<vtkVtkJSSceneGraphSerializer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVtkJSSceneGraphSerializer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSSceneGraphSerializer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVtkJSSceneGraphSerializer *tempr = vtkVtkJSSceneGraphSerializer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSSceneGraphSerializer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSSceneGraphSerializer *op = static_cast<vtkVtkJSSceneGraphSerializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVtkJSSceneGraphSerializer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVtkJSSceneGraphSerializer::NewInstance());

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
PyvtkVtkJSSceneGraphSerializer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVtkJSSceneGraphSerializer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSSceneGraphSerializer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSSceneGraphSerializer *op = static_cast<vtkVtkJSSceneGraphSerializer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVtkJSSceneGraphSerializer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSSceneGraphSerializer_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSSceneGraphSerializer *op = static_cast<vtkVtkJSSceneGraphSerializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkVtkJSSceneGraphSerializer::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSSceneGraphSerializer_GetNumberOfDataObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSSceneGraphSerializer *op = static_cast<vtkVtkJSSceneGraphSerializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfDataObjects() :
      op->vtkVtkJSSceneGraphSerializer::GetNumberOfDataObjects());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSSceneGraphSerializer_GetDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSSceneGraphSerializer *op = static_cast<vtkVtkJSSceneGraphSerializer *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetDataObject(temp0) :
      op->vtkVtkJSSceneGraphSerializer::GetDataObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSSceneGraphSerializer_GetNumberOfDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSSceneGraphSerializer *op = static_cast<vtkVtkJSSceneGraphSerializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfDataArrays() :
      op->vtkVtkJSSceneGraphSerializer::GetNumberOfDataArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSSceneGraphSerializer_GetDataArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSSceneGraphSerializer *op = static_cast<vtkVtkJSSceneGraphSerializer *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDataArrayId(temp0) :
      op->vtkVtkJSSceneGraphSerializer::GetDataArrayId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSSceneGraphSerializer_GetDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSSceneGraphSerializer *op = static_cast<vtkVtkJSSceneGraphSerializer *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetDataArray(temp0) :
      op->vtkVtkJSSceneGraphSerializer::GetDataArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVtkJSSceneGraphSerializer_Add_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Add");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSSceneGraphSerializer *op = static_cast<vtkVtkJSSceneGraphSerializer *>(vp);

  vtkViewNode *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewNode") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Add(temp0, temp1);
    }
    else
    {
      op->vtkVtkJSSceneGraphSerializer::Add(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVtkJSSceneGraphSerializer_Add_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Add");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSSceneGraphSerializer *op = static_cast<vtkVtkJSSceneGraphSerializer *>(vp);

  vtkViewNode *temp0 = nullptr;
  vtkCompositePolyDataMapper *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewNode") &&
      ap.GetVTKObject(temp1, "vtkCompositePolyDataMapper"))
  {
    if (ap.IsBound())
    {
      op->Add(temp0, temp1);
    }
    else
    {
      op->vtkVtkJSSceneGraphSerializer::Add(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVtkJSSceneGraphSerializer_Add_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Add");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSSceneGraphSerializer *op = static_cast<vtkVtkJSSceneGraphSerializer *>(vp);

  vtkViewNode *temp0 = nullptr;
  vtkGlyph3DMapper *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewNode") &&
      ap.GetVTKObject(temp1, "vtkGlyph3DMapper"))
  {
    if (ap.IsBound())
    {
      op->Add(temp0, temp1);
    }
    else
    {
      op->vtkVtkJSSceneGraphSerializer::Add(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVtkJSSceneGraphSerializer_Add_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Add");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSSceneGraphSerializer *op = static_cast<vtkVtkJSSceneGraphSerializer *>(vp);

  vtkViewNode *temp0 = nullptr;
  vtkMapper *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewNode") &&
      ap.GetVTKObject(temp1, "vtkMapper"))
  {
    if (ap.IsBound())
    {
      op->Add(temp0, temp1);
    }
    else
    {
      op->vtkVtkJSSceneGraphSerializer::Add(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVtkJSSceneGraphSerializer_Add_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Add");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSSceneGraphSerializer *op = static_cast<vtkVtkJSSceneGraphSerializer *>(vp);

  vtkViewNode *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewNode") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->Add(temp0, temp1);
    }
    else
    {
      op->vtkVtkJSSceneGraphSerializer::Add(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVtkJSSceneGraphSerializer_Add_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Add");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVtkJSSceneGraphSerializer *op = static_cast<vtkVtkJSSceneGraphSerializer *>(vp);

  vtkViewNode *temp0 = nullptr;
  vtkRenderWindow *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewNode") &&
      ap.GetVTKObject(temp1, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->Add(temp0, temp1);
    }
    else
    {
      op->vtkVtkJSSceneGraphSerializer::Add(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkVtkJSSceneGraphSerializer_Add_Methods[] = {
  {"Add", PyvtkVtkJSSceneGraphSerializer_Add_s1, METH_VARARGS,
   "@VV *vtkViewNode *vtkActor"},
  {"Add", PyvtkVtkJSSceneGraphSerializer_Add_s2, METH_VARARGS,
   "@VV *vtkViewNode *vtkCompositePolyDataMapper"},
  {"Add", PyvtkVtkJSSceneGraphSerializer_Add_s3, METH_VARARGS,
   "@VV *vtkViewNode *vtkGlyph3DMapper"},
  {"Add", PyvtkVtkJSSceneGraphSerializer_Add_s4, METH_VARARGS,
   "@VV *vtkViewNode *vtkMapper"},
  {"Add", PyvtkVtkJSSceneGraphSerializer_Add_s5, METH_VARARGS,
   "@VV *vtkViewNode *vtkRenderer"},
  {"Add", PyvtkVtkJSSceneGraphSerializer_Add_s6, METH_VARARGS,
   "@VV *vtkViewNode *vtkRenderWindow"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVtkJSSceneGraphSerializer_Add(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVtkJSSceneGraphSerializer_Add_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Add");
  return nullptr;
}

static PyMethodDef PyvtkVtkJSSceneGraphSerializer_Methods[] = {
  {"IsTypeOf", PyvtkVtkJSSceneGraphSerializer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVtkJSSceneGraphSerializer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVtkJSSceneGraphSerializer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVtkJSSceneGraphSerializer\nC++: static vtkVtkJSSceneGraphSerializer *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVtkJSSceneGraphSerializer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVtkJSSceneGraphSerializer\nC++: vtkVtkJSSceneGraphSerializer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVtkJSSceneGraphSerializer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVtkJSSceneGraphSerializer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Reset", PyvtkVtkJSSceneGraphSerializer_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nEmpty the contents of the scene and the reset the unique id\ngenerator.\n"},
  {"GetNumberOfDataObjects", PyvtkVtkJSSceneGraphSerializer_GetNumberOfDataObjects, METH_VARARGS,
   "GetNumberOfDataObjects(self) -> int\nC++: vtkIdType GetNumberOfDataObjects()\n\nAccess the data objects referenced in the constructed scene.\n"},
  {"GetDataObject", PyvtkVtkJSSceneGraphSerializer_GetDataObject, METH_VARARGS,
   "GetDataObject(self, __a:int) -> vtkDataObject\nC++: vtkDataObject *GetDataObject(vtkIdType)\n\n"},
  {"GetNumberOfDataArrays", PyvtkVtkJSSceneGraphSerializer_GetNumberOfDataArrays, METH_VARARGS,
   "GetNumberOfDataArrays(self) -> int\nC++: vtkIdType GetNumberOfDataArrays()\n\nAccess the data arrays referenced in the constructed scene.\n"},
  {"GetDataArrayId", PyvtkVtkJSSceneGraphSerializer_GetDataArrayId, METH_VARARGS,
   "GetDataArrayId(self, __a:int) -> str\nC++: std::string GetDataArrayId(vtkIdType)\n\n"},
  {"GetDataArray", PyvtkVtkJSSceneGraphSerializer_GetDataArray, METH_VARARGS,
   "GetDataArray(self, __a:int) -> vtkDataArray\nC++: vtkDataArray *GetDataArray(vtkIdType)\n\n"},
  {"Add", PyvtkVtkJSSceneGraphSerializer_Add, METH_VARARGS,
   "Add(self, __a:vtkViewNode, __b:vtkActor) -> None\nC++: virtual void Add(vtkViewNode *, vtkActor *)\nAdd(self, __a:vtkViewNode, __b:vtkCompositePolyDataMapper) -> None\nC++: virtual void Add(vtkViewNode *, vtkCompositePolyDataMapper *)\nAdd(self, __a:vtkViewNode, __b:vtkGlyph3DMapper) -> None\nC++: virtual void Add(vtkViewNode *, vtkGlyph3DMapper *)\nAdd(self, __a:vtkViewNode, __b:vtkMapper) -> None\nC++: virtual void Add(vtkViewNode *, vtkMapper *)\nAdd(self, __a:vtkViewNode, __b:vtkRenderer) -> None\nC++: virtual void Add(vtkViewNode *, vtkRenderer *)\nAdd(self, __a:vtkViewNode, __b:vtkRenderWindow) -> None\nC++: virtual void Add(vtkViewNode *, vtkRenderWindow *)\n\nAdd a scene graph node and its corresponding renderable to the\nscene.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVtkJSSceneGraphSerializer_Doc =
  "vtkVtkJSSceneGraphSerializer - Converts elements of a VTK scene graph\ninto vtk-js elements\n\n"
  "Superclass: vtkObject\n\n"
  "vtkVtkJSSceneGraphSerializer accepts nodes and their renderables from\n"
  "a scene graph and a) composes the elements' data and topology into a\n"
  "Json data structure and b) correlates unique identifiers for data\n"
  "objects in the Json data structure to the data objects themselves. It\n"
  "is designed to operate with vtkVtkJSViewNodeFactory, which handles\n"
  "the logic for scene graph traversal.\n\n"
  "When constructing the Json description for a single scene graph node\n"
  "and its renderable, the Add(node, renderable) step processes the\n"
  "renderable into its corresponding vtk-js form. For many renderables\n"
  "this is a no-op, but current restrictions in vtk-js (such as the lack\n"
  "of support for composite mappers and the requirement for data\n"
  "conversion to vtkPolyData) require a nontrival conversion step for\n"
  "certain renderable types. The subsequent ToJson(renderable) is a\n"
  "straightforward conversion of the renderable's data members into a\n"
  "vtk-js Json format.\n\n"
  "@sa\n"
  "vtkVtkJSViewNodeFactory\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVtkJSSceneGraphSerializer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVtkJS.vtkVtkJSSceneGraphSerializer", // tp_name
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
  PyvtkVtkJSSceneGraphSerializer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVtkJSSceneGraphSerializer_StaticNew()
{
  return vtkVtkJSSceneGraphSerializer::New();
}

PyObject *PyvtkVtkJSSceneGraphSerializer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVtkJSSceneGraphSerializer_Type, PyvtkVtkJSSceneGraphSerializer_Methods,
    "vtkVtkJSSceneGraphSerializer",
 &PyvtkVtkJSSceneGraphSerializer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVtkJSSceneGraphSerializer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVtkJSSceneGraphSerializer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVtkJSSceneGraphSerializer", o) != 0)
  {
    Py_DECREF(o);
  }

}

