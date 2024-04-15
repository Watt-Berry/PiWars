// python wrapper for vtkSVGExporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSVGExporter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSVGExporter(PyObject *dict); }
extern "C" { PyObject *PyvtkSVGExporter_ClassNew(); }

#ifndef DECLARED_PyvtkExporter_ClassNew
extern "C" { PyObject *PyvtkExporter_ClassNew(); }
#define DECLARED_PyvtkExporter_ClassNew
#endif

static PyObject *
PyvtkSVGExporter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSVGExporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSVGExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSVGExporter *tempr = vtkSVGExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSVGExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSVGExporter::NewInstance());

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
PyvtkSVGExporter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSVGExporter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSVGExporter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0);
    }
    else
    {
      op->vtkSVGExporter::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkSVGExporter::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_SetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDescription(temp0);
    }
    else
    {
      op->vtkSVGExporter::SetDescription(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDescription() :
      op->vtkSVGExporter::GetDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkSVGExporter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSVGExporter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_SetTextAsPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextAsPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextAsPath(temp0);
    }
    else
    {
      op->vtkSVGExporter::SetTextAsPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_GetTextAsPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextAsPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTextAsPath() :
      op->vtkSVGExporter::GetTextAsPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_TextAsPathOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextAsPathOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TextAsPathOn();
    }
    else
    {
      op->vtkSVGExporter::TextAsPathOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_TextAsPathOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextAsPathOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TextAsPathOff();
    }
    else
    {
      op->vtkSVGExporter::TextAsPathOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_SetDrawBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawBackground(temp0);
    }
    else
    {
      op->vtkSVGExporter::SetDrawBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_GetDrawBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawBackground() :
      op->vtkSVGExporter::GetDrawBackground());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_DrawBackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBackgroundOn();
    }
    else
    {
      op->vtkSVGExporter::DrawBackgroundOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_DrawBackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBackgroundOff();
    }
    else
    {
      op->vtkSVGExporter::DrawBackgroundOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_SetSubdivisionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivisionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubdivisionThreshold(temp0);
    }
    else
    {
      op->vtkSVGExporter::SetSubdivisionThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSVGExporter_GetSubdivisionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivisionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSVGExporter *op = static_cast<vtkSVGExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubdivisionThreshold() :
      op->vtkSVGExporter::GetSubdivisionThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSVGExporter_Methods[] = {
  {"IsTypeOf", PyvtkSVGExporter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSVGExporter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSVGExporter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSVGExporter\nC++: static vtkSVGExporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSVGExporter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSVGExporter\nC++: vtkSVGExporter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSVGExporter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSVGExporter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTitle", PyvtkSVGExporter_SetTitle, METH_VARARGS,
   "SetTitle(self, _arg:str) -> None\nC++: virtual void SetTitle(const char *_arg)\n\n"},
  {"GetTitle", PyvtkSVGExporter_GetTitle, METH_VARARGS,
   "GetTitle(self) -> str\nC++: virtual char *GetTitle()\n\n"},
  {"SetDescription", PyvtkSVGExporter_SetDescription, METH_VARARGS,
   "SetDescription(self, _arg:str) -> None\nC++: virtual void SetDescription(const char *_arg)\n\n"},
  {"GetDescription", PyvtkSVGExporter_GetDescription, METH_VARARGS,
   "GetDescription(self) -> str\nC++: virtual char *GetDescription()\n\n"},
  {"SetFileName", PyvtkSVGExporter_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\n"},
  {"GetFileName", PyvtkSVGExporter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetTextAsPath", PyvtkSVGExporter_SetTextAsPath, METH_VARARGS,
   "SetTextAsPath(self, _arg:bool) -> None\nC++: virtual void SetTextAsPath(bool _arg)\n\n"},
  {"GetTextAsPath", PyvtkSVGExporter_GetTextAsPath, METH_VARARGS,
   "GetTextAsPath(self) -> bool\nC++: virtual bool GetTextAsPath()\n\n"},
  {"TextAsPathOn", PyvtkSVGExporter_TextAsPathOn, METH_VARARGS,
   "TextAsPathOn(self) -> None\nC++: virtual void TextAsPathOn()\n\n"},
  {"TextAsPathOff", PyvtkSVGExporter_TextAsPathOff, METH_VARARGS,
   "TextAsPathOff(self) -> None\nC++: virtual void TextAsPathOff()\n\n"},
  {"SetDrawBackground", PyvtkSVGExporter_SetDrawBackground, METH_VARARGS,
   "SetDrawBackground(self, _arg:bool) -> None\nC++: virtual void SetDrawBackground(bool _arg)\n\n"},
  {"GetDrawBackground", PyvtkSVGExporter_GetDrawBackground, METH_VARARGS,
   "GetDrawBackground(self) -> bool\nC++: virtual bool GetDrawBackground()\n\n"},
  {"DrawBackgroundOn", PyvtkSVGExporter_DrawBackgroundOn, METH_VARARGS,
   "DrawBackgroundOn(self) -> None\nC++: virtual void DrawBackgroundOn()\n\n"},
  {"DrawBackgroundOff", PyvtkSVGExporter_DrawBackgroundOff, METH_VARARGS,
   "DrawBackgroundOff(self) -> None\nC++: virtual void DrawBackgroundOff()\n\n"},
  {"SetSubdivisionThreshold", PyvtkSVGExporter_SetSubdivisionThreshold, METH_VARARGS,
   "SetSubdivisionThreshold(self, _arg:float) -> None\nC++: virtual void SetSubdivisionThreshold(float _arg)\n\n"},
  {"GetSubdivisionThreshold", PyvtkSVGExporter_GetSubdivisionThreshold, METH_VARARGS,
   "GetSubdivisionThreshold(self) -> float\nC++: virtual float GetSubdivisionThreshold()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSVGExporter_Doc =
  "vtkSVGExporter - Exports vtkContext2D scenes to SVG.\n\n"
  "Superclass: vtkExporter\n\n"
  "This exporter draws context2D scenes into a SVG file.\n\n"
  "Limitations:\n"
  "- The Nearest/Linear texture properties are ignored, since SVG\n"
  "  doesn't provide any reliable control over interpolation.\n"
  "- Embedded fonts are experimental and poorly tested. Viewer support\n"
  "  is lacking at the time of writing, hence the feature is largely\n"
  "  useless. By default, fonts are not embedded since they're basically\n"
  "useless bloat. (this option is not exposed in vtkSVGExporter).\n"
  "- TextAsPath is enabled by default, since viewers differ wildly in\n"
  "  how they handle text objects (eg. Inkscape renders at expected\n"
  "  size, but webkit is way too big).\n"
  "- Pattern fills and markers are not shown on some viewers, e.g. KDE's\n"
  "okular (Webkit seems to work, though).\n"
  "- Clipping seems to be broken in most viewers. Webkit is buggy and\n"
  "  forces the clip coordinates to objectBoundingBox, even when\n"
  "  explicitly set to userSpaceOnUse.\n"
  "- Many viewers anti-alias the output, leaving thin outlines around\n"
  "  the triangles that make up larger polygons. This is a viewer issue\n"
  "  and there not much we can do about it from the VTK side of things\n"
  "  (and most viewers don't seem to have an antialiasing toggle,\n"
  "  either...).\n\n"
  "If ActiveRenderer is specified then it exports contents of\n"
  "ActiveRenderer. Otherwise it exports contents of all renderers.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSVGExporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExport.vtkSVGExporter", // tp_name
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
  PyvtkSVGExporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSVGExporter_StaticNew()
{
  return vtkSVGExporter::New();
}

PyObject *PyvtkSVGExporter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSVGExporter_Type, PyvtkSVGExporter_Methods,
    "vtkSVGExporter",
 &PyvtkSVGExporter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkExporter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSVGExporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSVGExporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSVGExporter", o) != 0)
  {
    Py_DECREF(o);
  }

}

