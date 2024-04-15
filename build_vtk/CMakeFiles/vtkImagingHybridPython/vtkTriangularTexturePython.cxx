// python wrapper for vtkTriangularTexture
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTriangularTexture.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTriangularTexture(PyObject *dict); }
extern "C" { PyObject *PyvtkTriangularTexture_ClassNew(); }


static PyObject *
PyvtkTriangularTexture_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTriangularTexture::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTriangularTexture::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTriangularTexture *tempr = vtkTriangularTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTriangularTexture *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTriangularTexture::NewInstance());

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
PyvtkTriangularTexture_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTriangularTexture::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTriangularTexture::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkTriangularTexture::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkTriangularTexture::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_SetXSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXSize(temp0);
    }
    else
    {
      op->vtkTriangularTexture::SetXSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetXSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXSize() :
      op->vtkTriangularTexture::GetXSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_SetYSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYSize(temp0);
    }
    else
    {
      op->vtkTriangularTexture::SetYSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetYSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYSize() :
      op->vtkTriangularTexture::GetYSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_SetTexturePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexturePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTexturePattern(temp0);
    }
    else
    {
      op->vtkTriangularTexture::SetTexturePattern(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetTexturePatternMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturePatternMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTexturePatternMinValue() :
      op->vtkTriangularTexture::GetTexturePatternMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetTexturePatternMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturePatternMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTexturePatternMaxValue() :
      op->vtkTriangularTexture::GetTexturePatternMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetTexturePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTexturePattern() :
      op->vtkTriangularTexture::GetTexturePattern());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTriangularTexture_Methods[] = {
  {"IsTypeOf", PyvtkTriangularTexture_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTriangularTexture_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTriangularTexture_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTriangularTexture\nC++: static vtkTriangularTexture *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTriangularTexture_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTriangularTexture\nC++: vtkTriangularTexture *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTriangularTexture_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTriangularTexture_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetScaleFactor", PyvtkTriangularTexture_SetScaleFactor, METH_VARARGS,
   "SetScaleFactor(self, _arg:float) -> None\nC++: virtual void SetScaleFactor(double _arg)\n\nSet a Scale Factor.\n"},
  {"GetScaleFactor", PyvtkTriangularTexture_GetScaleFactor, METH_VARARGS,
   "GetScaleFactor(self) -> float\nC++: virtual double GetScaleFactor()\n\n"},
  {"SetXSize", PyvtkTriangularTexture_SetXSize, METH_VARARGS,
   "SetXSize(self, _arg:int) -> None\nC++: virtual void SetXSize(int _arg)\n\nSet the X texture map dimension. Default is 64.\n"},
  {"GetXSize", PyvtkTriangularTexture_GetXSize, METH_VARARGS,
   "GetXSize(self) -> int\nC++: virtual int GetXSize()\n\n"},
  {"SetYSize", PyvtkTriangularTexture_SetYSize, METH_VARARGS,
   "SetYSize(self, _arg:int) -> None\nC++: virtual void SetYSize(int _arg)\n\nSet the Y texture map dimension. Default is 64.\n"},
  {"GetYSize", PyvtkTriangularTexture_GetYSize, METH_VARARGS,
   "GetYSize(self) -> int\nC++: virtual int GetYSize()\n\n"},
  {"SetTexturePattern", PyvtkTriangularTexture_SetTexturePattern, METH_VARARGS,
   "SetTexturePattern(self, _arg:int) -> None\nC++: virtual void SetTexturePattern(int _arg)\n\nSet the texture pattern. 1 = opaque at centroid (default) 2 =\nopaque at vertices 3 = opaque in rings around vertices\n"},
  {"GetTexturePatternMinValue", PyvtkTriangularTexture_GetTexturePatternMinValue, METH_VARARGS,
   "GetTexturePatternMinValue(self) -> int\nC++: virtual int GetTexturePatternMinValue()\n\n"},
  {"GetTexturePatternMaxValue", PyvtkTriangularTexture_GetTexturePatternMaxValue, METH_VARARGS,
   "GetTexturePatternMaxValue(self) -> int\nC++: virtual int GetTexturePatternMaxValue()\n\n"},
  {"GetTexturePattern", PyvtkTriangularTexture_GetTexturePattern, METH_VARARGS,
   "GetTexturePattern(self) -> int\nC++: virtual int GetTexturePattern()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTriangularTexture_Doc =
  "vtkTriangularTexture - generate 2D triangular texture map\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkTriangularTexture is a filter that generates a 2D texture map\n"
  "based on the paper \"Opacity-modulating Triangular Textures for Irregular\n"
  "Surfaces,\" by Penny Rheingans, IEEE Visualization '96, pp. 219-225.\n"
  "The textures assume texture coordinates of (0,0), (1.0) and (.5,\n"
  "sqrt(3)/2). The sequence of texture values is the same along each\n"
  "edge of the triangular texture map. So, the assignment order of\n"
  "texture coordinates is arbitrary.\n\n"
  "@sa\n"
  "vtkTriangularTCoords\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTriangularTexture_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingHybrid.vtkTriangularTexture", // tp_name
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
  PyvtkTriangularTexture_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTriangularTexture_StaticNew()
{
  return vtkTriangularTexture::New();
}

PyObject *PyvtkTriangularTexture_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTriangularTexture_Type, PyvtkTriangularTexture_Methods,
    "vtkTriangularTexture",
 &PyvtkTriangularTexture_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTriangularTexture(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTriangularTexture_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTriangularTexture", o) != 0)
  {
    Py_DECREF(o);
  }

}

