// python wrapper for vtkTextMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTextMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkTextMapper_ClassNew(); }

#ifndef DECLARED_PyvtkMapper2D_ClassNew
extern "C" { PyObject *PyvtkMapper2D_ClassNew(); }
#define DECLARED_PyvtkMapper2D_ClassNew
#endif

static PyObject *
PyvtkTextMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextMapper *tempr = vtkTextMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextMapper::NewInstance());

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
PyvtkTextMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTextMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTextMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  const size_t size1 = 2;
  int temp1[2];
  int save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetSize(temp0, temp1);
    }
    else
    {
      op->vtkTextMapper::GetSize(temp0, temp1);
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
PyvtkTextMapper_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->GetWidth(temp0) :
      op->vtkTextMapper::GetWidth(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->GetHeight(temp0) :
      op->vtkTextMapper::GetHeight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkTextMapper::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkTextMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperty(temp0);
    }
    else
    {
      op->vtkTextMapper::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkTextMapper::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkAbstractMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkTextMapper::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_SetConstrainedFontSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->SetConstrainedFontSize(temp0, temp1, temp2) :
      op->vtkTextMapper::SetConstrainedFontSize(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextMapper_SetConstrainedFontSize_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetConstrainedFontSize");

  vtkTextMapper *temp0 = nullptr;
  vtkViewport *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextMapper") &&
      ap.GetVTKObject(temp1, "vtkViewport") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = vtkTextMapper::SetConstrainedFontSize(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextMapper_SetConstrainedFontSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextMapper_SetConstrainedFontSize_s1(self, args);
    case 4:
      return PyvtkTextMapper_SetConstrainedFontSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetConstrainedFontSize");
  return nullptr;
}


static PyObject *
PyvtkTextMapper_SetRelativeFontSize(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRelativeFontSize");

  vtkTextMapper *temp0 = nullptr;
  vtkViewport *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(size2);
  int *temp2 = store2.Data();
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  float temp4 = 0.0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkTextMapper") &&
      ap.GetVTKObject(temp1, "vtkViewport") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = vtkTextMapper::SetRelativeFontSize(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderOverlay(temp0, temp1);
    }
    else
    {
      op->vtkTextMapper::RenderOverlay(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkTextMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTextMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTextMapper_Methods[] = {
  {"IsTypeOf", PyvtkTextMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTextMapper\nC++: static vtkTextMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTextMapper\nC++: vtkTextMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTextMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTextMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetSize", PyvtkTextMapper_GetSize, METH_VARARGS,
   "GetSize(self, __a:vtkViewport, size:[int, int]) -> None\nC++: virtual void GetSize(vtkViewport *, int size[2])\n\nReturn the size[2]/width/height of the rectangle required to draw\nthis mapper (in pixels).\n"},
  {"GetWidth", PyvtkTextMapper_GetWidth, METH_VARARGS,
   "GetWidth(self, v:vtkViewport) -> int\nC++: virtual int GetWidth(vtkViewport *v)\n\n"},
  {"GetHeight", PyvtkTextMapper_GetHeight, METH_VARARGS,
   "GetHeight(self, v:vtkViewport) -> int\nC++: virtual int GetHeight(vtkViewport *v)\n\n"},
  {"SetInput", PyvtkTextMapper_SetInput, METH_VARARGS,
   "SetInput(self, _arg:str) -> None\nC++: virtual void SetInput(const char *_arg)\n\nThe input text string to the mapper.\n"},
  {"GetInput", PyvtkTextMapper_GetInput, METH_VARARGS,
   "GetInput(self) -> str\nC++: virtual char *GetInput()\n\n"},
  {"SetTextProperty", PyvtkTextMapper_SetTextProperty, METH_VARARGS,
   "SetTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetTextProperty(vtkTextProperty *p)\n\nSet/Get the text property.\n"},
  {"GetTextProperty", PyvtkTextMapper_GetTextProperty, METH_VARARGS,
   "GetTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperty()\n\n"},
  {"ShallowCopy", PyvtkTextMapper_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, m:vtkAbstractMapper) -> None\nC++: void ShallowCopy(vtkAbstractMapper *m) override;\n\nShallow copy of an actor.\n"},
  {"SetConstrainedFontSize", PyvtkTextMapper_SetConstrainedFontSize, METH_VARARGS,
   "SetConstrainedFontSize(self, __a:vtkViewport, targetWidth:int,\n    targetHeight:int) -> int\nC++: virtual int SetConstrainedFontSize(vtkViewport *,\n    int targetWidth, int targetHeight)\nSetConstrainedFontSize(__a:vtkTextMapper, __b:vtkViewport,\n    targetWidth:int, targetHeight:int) -> int\nC++: static int SetConstrainedFontSize(vtkTextMapper *,\n    vtkViewport *, int targetWidth, int targetHeight)\n\nSet and return the font size (in points) required to make this\nmapper fit in a given target rectangle (width x height, in\npixels). A static version of the method is also available for\nconvenience to other classes (e.g., widgets).\n"},
  {"SetRelativeFontSize", PyvtkTextMapper_SetRelativeFontSize, METH_VARARGS,
   "SetRelativeFontSize(__a:vtkTextMapper, __b:vtkViewport, winSize:(\n    int, ...), stringSize:[int, ...], sizeFactor:float=0.0) -> int\nC++: static int SetRelativeFontSize(vtkTextMapper *,\n    vtkViewport *, const int *winSize, int *stringSize,\n    float sizeFactor=0.0)\n\nUse these methods when setting font size relative to the\nrenderer's size. These methods are static so that external\nclasses (e.g., widgets) can easily use them.\n"},
  {"RenderOverlay", PyvtkTextMapper_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, __a:vtkViewport, __b:vtkActor2D) -> None\nC++: void RenderOverlay(vtkViewport *, vtkActor2D *) override;\n\n"},
  {"ReleaseGraphicsResources", PyvtkTextMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetMTime", PyvtkTextMapper_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride Modifiedtime as we have added Clipping planes\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTextMapper_Doc =
  "vtkTextMapper - 2D text annotation\n\n"
  "Superclass: vtkMapper2D\n\n"
  "vtkTextMapper provides 2D text annotation support for VTK.  It is a\n"
  "vtkMapper2D that can be associated with a vtkActor2D and placed into\n"
  "a vtkRenderer.\n\n"
  "To use vtkTextMapper, specify an input text string.\n\n"
  "@sa\n"
  "vtkActor2D vtkTextActor vtkTextActor3D vtkTextProperty\n"
  "vtkTextRenderer\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTextMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkTextMapper", // tp_name
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
  PyvtkTextMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextMapper_StaticNew()
{
  return vtkTextMapper::New();
}

PyObject *PyvtkTextMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTextMapper_Type, PyvtkTextMapper_Methods,
    "vtkTextMapper",
 &PyvtkTextMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMapper2D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

