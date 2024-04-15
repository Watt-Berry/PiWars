// python wrapper for vtkExtractVectorComponents
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractVectorComponents.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractVectorComponents(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractVectorComponents_ClassNew(); }


static PyObject *
PyvtkExtractVectorComponents_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractVectorComponents::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractVectorComponents::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractVectorComponents *tempr = vtkExtractVectorComponents::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractVectorComponents *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractVectorComponents::NewInstance());

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
PyvtkExtractVectorComponents_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractVectorComponents::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractVectorComponents::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

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
      op->vtkExtractVectorComponents::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_GetVxComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVxComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetVxComponent() :
      op->vtkExtractVectorComponents::GetVxComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_GetVyComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVyComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetVyComponent() :
      op->vtkExtractVectorComponents::GetVyComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_GetVzComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVzComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetVzComponent() :
      op->vtkExtractVectorComponents::GetVzComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_SetExtractToFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractToFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractToFieldData(temp0);
    }
    else
    {
      op->vtkExtractVectorComponents::SetExtractToFieldData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_GetExtractToFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractToFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractToFieldData() :
      op->vtkExtractVectorComponents::GetExtractToFieldData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_ExtractToFieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractToFieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractToFieldDataOn();
    }
    else
    {
      op->vtkExtractVectorComponents::ExtractToFieldDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_ExtractToFieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractToFieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractToFieldDataOff();
    }
    else
    {
      op->vtkExtractVectorComponents::ExtractToFieldDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractVectorComponents_Methods[] = {
  {"IsTypeOf", PyvtkExtractVectorComponents_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractVectorComponents_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractVectorComponents_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractVectorComponents\nC++: static vtkExtractVectorComponents *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractVectorComponents_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractVectorComponents\nC++: vtkExtractVectorComponents *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractVectorComponents_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractVectorComponents_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputData", PyvtkExtractVectorComponents_SetInputData, METH_VARARGS,
   "SetInputData(self, input:vtkDataSet) -> None\nC++: virtual void SetInputData(vtkDataSet *input)\n\nSpecify the input data or filter.\n"},
  {"GetVxComponent", PyvtkExtractVectorComponents_GetVxComponent, METH_VARARGS,
   "GetVxComponent(self) -> vtkDataSet\nC++: vtkDataSet *GetVxComponent()\n\nGet the output dataset representing velocity x-component. If\noutput is nullptr then input hasn't been set, which is necessary\nfor abstract objects. (Note: this method returns the same\ninformation as the GetOutput() method with an index of 0.)\n"},
  {"GetVyComponent", PyvtkExtractVectorComponents_GetVyComponent, METH_VARARGS,
   "GetVyComponent(self) -> vtkDataSet\nC++: vtkDataSet *GetVyComponent()\n\nGet the output dataset representing velocity y-component. If\noutput is nullptr then input hasn't been set, which is necessary\nfor abstract objects. (Note: this method returns the same\ninformation as the GetOutput() method with an index of 1.) Note\nthat if ExtractToFieldData is true, this output will be empty.\n"},
  {"GetVzComponent", PyvtkExtractVectorComponents_GetVzComponent, METH_VARARGS,
   "GetVzComponent(self) -> vtkDataSet\nC++: vtkDataSet *GetVzComponent()\n\nGet the output dataset representing velocity z-component. If\noutput is nullptr then input hasn't been set, which is necessary\nfor abstract objects. (Note: this method returns the same\ninformation as the GetOutput() method with an index of 2.) Note\nthat if ExtractToFieldData is true, this output will be empty.\n"},
  {"SetExtractToFieldData", PyvtkExtractVectorComponents_SetExtractToFieldData, METH_VARARGS,
   "SetExtractToFieldData(self, _arg:int) -> None\nC++: virtual void SetExtractToFieldData(vtkTypeBool _arg)\n\nDetermines whether the vector components will be put in separate\noutputs or in the first output's field data\n"},
  {"GetExtractToFieldData", PyvtkExtractVectorComponents_GetExtractToFieldData, METH_VARARGS,
   "GetExtractToFieldData(self) -> int\nC++: virtual vtkTypeBool GetExtractToFieldData()\n\n"},
  {"ExtractToFieldDataOn", PyvtkExtractVectorComponents_ExtractToFieldDataOn, METH_VARARGS,
   "ExtractToFieldDataOn(self) -> None\nC++: virtual void ExtractToFieldDataOn()\n\n"},
  {"ExtractToFieldDataOff", PyvtkExtractVectorComponents_ExtractToFieldDataOff, METH_VARARGS,
   "ExtractToFieldDataOff(self) -> None\nC++: virtual void ExtractToFieldDataOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractVectorComponents_Doc =
  "vtkExtractVectorComponents - extract components of vector as separate\nscalars\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkExtractVectorComponents is a filter that extracts vector\n"
  "components as separate scalars. This is accomplished by creating\n"
  "three different outputs. Each output is the same as the input, except\n"
  "that the scalar values will be one of the three components of the\n"
  "vector. These can be found in the VxComponent, VyComponent, and\n"
  "VzComponent. Alternatively, if the ExtractToFieldData flag is set,\n"
  "the filter will put all the components in the field data. The first\n"
  "component will be the scalar and the others will be non-attribute\n"
  "arrays.\n\n"
  "@warning\n"
  "This filter is unusual in that it creates multiple outputs. If you\n"
  "use the GetOutput() method, you will be retrieving the x vector\n"
  "component.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractVectorComponents_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkExtractVectorComponents", // tp_name
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
  PyvtkExtractVectorComponents_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractVectorComponents_StaticNew()
{
  return vtkExtractVectorComponents::New();
}

PyObject *PyvtkExtractVectorComponents_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractVectorComponents_Type, PyvtkExtractVectorComponents_Methods,
    "vtkExtractVectorComponents",
 &PyvtkExtractVectorComponents_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractVectorComponents(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractVectorComponents_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractVectorComponents", o) != 0)
  {
    Py_DECREF(o);
  }

}

