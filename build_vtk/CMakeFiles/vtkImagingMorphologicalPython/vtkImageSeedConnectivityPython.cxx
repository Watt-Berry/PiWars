// python wrapper for vtkImageSeedConnectivity
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageSeedConnectivity.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageSeedConnectivity(PyObject *dict); }
extern "C" { PyObject *PyvtkImageSeedConnectivity_ClassNew(); }


static PyObject *
PyvtkImageSeedConnectivity_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageSeedConnectivity::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSeedConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageSeedConnectivity *tempr = vtkImageSeedConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSeedConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSeedConnectivity::NewInstance());

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
PyvtkImageSeedConnectivity_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageSeedConnectivity::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageSeedConnectivity::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_RemoveAllSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllSeeds();
    }
    else
    {
      op->vtkImageSeedConnectivity::RemoveAllSeeds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_AddSeed_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->AddSeed(temp0, temp1);
    }
    else
    {
      op->vtkImageSeedConnectivity::AddSeed(temp0, temp1);
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
PyvtkImageSeedConnectivity_AddSeed_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddSeed(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageSeedConnectivity::AddSeed(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageSeedConnectivity_AddSeed_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddSeed(temp0, temp1);
    }
    else
    {
      op->vtkImageSeedConnectivity::AddSeed(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSeedConnectivity_AddSeed_Methods[] = {
  {"AddSeed", PyvtkImageSeedConnectivity_AddSeed_s1, METH_VARARGS,
   "@iP *i"},
  {"AddSeed", PyvtkImageSeedConnectivity_AddSeed_s3, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageSeedConnectivity_AddSeed(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageSeedConnectivity_AddSeed_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageSeedConnectivity_AddSeed_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddSeed");
  return nullptr;
}


static PyObject *
PyvtkImageSeedConnectivity_SetInputConnectValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnectValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputConnectValue(temp0);
    }
    else
    {
      op->vtkImageSeedConnectivity::SetInputConnectValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_GetInputConnectValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputConnectValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetInputConnectValue() :
      op->vtkImageSeedConnectivity::GetInputConnectValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_SetOutputConnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputConnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputConnectedValue(temp0);
    }
    else
    {
      op->vtkImageSeedConnectivity::SetOutputConnectedValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_GetOutputConnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputConnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetOutputConnectedValue() :
      op->vtkImageSeedConnectivity::GetOutputConnectedValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_SetOutputUnconnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputUnconnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputUnconnectedValue(temp0);
    }
    else
    {
      op->vtkImageSeedConnectivity::SetOutputUnconnectedValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_GetOutputUnconnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputUnconnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetOutputUnconnectedValue() :
      op->vtkImageSeedConnectivity::GetOutputUnconnectedValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_GetConnector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageConnector *tempr = (ap.IsBound() ?
      op->GetConnector() :
      op->vtkImageSeedConnectivity::GetConnector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimensionality(temp0);
    }
    else
    {
      op->vtkImageSeedConnectivity::SetDimensionality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageSeedConnectivity::GetDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSeedConnectivity_Methods[] = {
  {"IsTypeOf", PyvtkImageSeedConnectivity_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageSeedConnectivity_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageSeedConnectivity_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageSeedConnectivity\nC++: static vtkImageSeedConnectivity *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageSeedConnectivity_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageSeedConnectivity\nC++: vtkImageSeedConnectivity *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageSeedConnectivity_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageSeedConnectivity_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RemoveAllSeeds", PyvtkImageSeedConnectivity_RemoveAllSeeds, METH_VARARGS,
   "RemoveAllSeeds(self) -> None\nC++: void RemoveAllSeeds()\n\nMethods for manipulating the seed pixels.\n"},
  {"AddSeed", PyvtkImageSeedConnectivity_AddSeed, METH_VARARGS,
   "AddSeed(self, num:int, index:[int, ...]) -> None\nC++: void AddSeed(int num, int *index)\nAddSeed(self, i0:int, i1:int, i2:int) -> None\nC++: void AddSeed(int i0, int i1, int i2)\nAddSeed(self, i0:int, i1:int) -> None\nC++: void AddSeed(int i0, int i1)\n\n"},
  {"SetInputConnectValue", PyvtkImageSeedConnectivity_SetInputConnectValue, METH_VARARGS,
   "SetInputConnectValue(self, _arg:int) -> None\nC++: virtual void SetInputConnectValue(unsigned char _arg)\n\nSet/Get what value is considered as connecting pixels.\n"},
  {"GetInputConnectValue", PyvtkImageSeedConnectivity_GetInputConnectValue, METH_VARARGS,
   "GetInputConnectValue(self) -> int\nC++: virtual unsigned char GetInputConnectValue()\n\n"},
  {"SetOutputConnectedValue", PyvtkImageSeedConnectivity_SetOutputConnectedValue, METH_VARARGS,
   "SetOutputConnectedValue(self, _arg:int) -> None\nC++: virtual void SetOutputConnectedValue(unsigned char _arg)\n\nSet/Get the value to set connected pixels to.\n"},
  {"GetOutputConnectedValue", PyvtkImageSeedConnectivity_GetOutputConnectedValue, METH_VARARGS,
   "GetOutputConnectedValue(self) -> int\nC++: virtual unsigned char GetOutputConnectedValue()\n\n"},
  {"SetOutputUnconnectedValue", PyvtkImageSeedConnectivity_SetOutputUnconnectedValue, METH_VARARGS,
   "SetOutputUnconnectedValue(self, _arg:int) -> None\nC++: virtual void SetOutputUnconnectedValue(unsigned char _arg)\n\nSet/Get the value to set unconnected pixels to.\n"},
  {"GetOutputUnconnectedValue", PyvtkImageSeedConnectivity_GetOutputUnconnectedValue, METH_VARARGS,
   "GetOutputUnconnectedValue(self) -> int\nC++: virtual unsigned char GetOutputUnconnectedValue()\n\n"},
  {"GetConnector", PyvtkImageSeedConnectivity_GetConnector, METH_VARARGS,
   "GetConnector(self) -> vtkImageConnector\nC++: virtual vtkImageConnector *GetConnector()\n\nGet the vtkImageCOnnector used by this filter.\n"},
  {"SetDimensionality", PyvtkImageSeedConnectivity_SetDimensionality, METH_VARARGS,
   "SetDimensionality(self, _arg:int) -> None\nC++: virtual void SetDimensionality(int _arg)\n\nSet the number of axes to use in connectivity.\n"},
  {"GetDimensionality", PyvtkImageSeedConnectivity_GetDimensionality, METH_VARARGS,
   "GetDimensionality(self) -> int\nC++: virtual int GetDimensionality()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageSeedConnectivity_Doc =
  "vtkImageSeedConnectivity - SeedConnectivity with user defined seeds.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageSeedConnectivity marks pixels connected to user supplied\n"
  "seeds. The input must be unsigned char, and the output is also\n"
  "unsigned char.  If a seed supplied by the user does not have pixel\n"
  "value \"InputTrueValue\", then the image is scanned +x, +y, +z until a\n"
  "pixel is encountered with value \"InputTrueValue\".  This new pixel is\n"
  "used as the seed .  Any pixel with out value \"InputTrueValue\" is\n"
  "consider off.  The output pixels values are 0 for any off pixel in\n"
  "input, \"OutputTrueValue\" for any pixels connected to seeds, and\n"
  "\"OutputUnconnectedValue\" for any on pixels not connected to seeds. \n"
  "The same seeds are used for all images in the image set.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageSeedConnectivity_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingMorphological.vtkImageSeedConnectivity", // tp_name
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
  PyvtkImageSeedConnectivity_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageSeedConnectivity_StaticNew()
{
  return vtkImageSeedConnectivity::New();
}

PyObject *PyvtkImageSeedConnectivity_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageSeedConnectivity_Type, PyvtkImageSeedConnectivity_Methods,
    "vtkImageSeedConnectivity",
 &PyvtkImageSeedConnectivity_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageSeedConnectivity(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageSeedConnectivity_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageSeedConnectivity", o) != 0)
  {
    Py_DECREF(o);
  }

}

