// python wrapper for vtkProgrammableGlyphFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkProgrammableGlyphFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProgrammableGlyphFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkProgrammableGlyphFilter_ClassNew(); }


static PyObject *
PyvtkProgrammableGlyphFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProgrammableGlyphFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProgrammableGlyphFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProgrammableGlyphFilter *tempr = vtkProgrammableGlyphFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProgrammableGlyphFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProgrammableGlyphFilter::NewInstance());

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
PyvtkProgrammableGlyphFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProgrammableGlyphFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProgrammableGlyphFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkProgrammableGlyphFilter::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkProgrammableGlyphFilter::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkProgrammableGlyphFilter::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_SetGlyphMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFunction(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphMethod(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFunc),
        (temp0 == Py_None ? nullptr : temp0));
      if (temp0 != Py_None)
      {
        Py_INCREF(temp0);
      }
      op->SetGlyphMethodArgDelete(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFuncArgDelete));
    }
    else
    {
      op->vtkProgrammableGlyphFilter::SetGlyphMethod(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFunc),
        (temp0 == Py_None ? nullptr : temp0));
      if (temp0 != Py_None)
      {
        Py_INCREF(temp0);
      }
      op->vtkProgrammableGlyphFilter::SetGlyphMethodArgDelete(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFuncArgDelete));
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_GetPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointId() :
      op->vtkProgrammableGlyphFilter::GetPointId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint() :
      op->vtkProgrammableGlyphFilter::GetPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_GetPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointData *tempr = (ap.IsBound() ?
      op->GetPointData() :
      op->vtkProgrammableGlyphFilter::GetPointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorMode(temp0);
    }
    else
    {
      op->vtkProgrammableGlyphFilter::SetColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkProgrammableGlyphFilter::GetColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_SetColorModeToColorByInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToColorByInput();
    }
    else
    {
      op->vtkProgrammableGlyphFilter::SetColorModeToColorByInput();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_SetColorModeToColorBySource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorBySource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToColorBySource();
    }
    else
    {
      op->vtkProgrammableGlyphFilter::SetColorModeToColorBySource();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_GetColorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColorModeAsString() :
      op->vtkProgrammableGlyphFilter::GetColorModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProgrammableGlyphFilter_Methods[] = {
  {"IsTypeOf", PyvtkProgrammableGlyphFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProgrammableGlyphFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProgrammableGlyphFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkProgrammableGlyphFilter\nC++: static vtkProgrammableGlyphFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProgrammableGlyphFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProgrammableGlyphFilter\nC++: vtkProgrammableGlyphFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProgrammableGlyphFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProgrammableGlyphFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSourceConnection", PyvtkProgrammableGlyphFilter_SetSourceConnection, METH_VARARGS,
   "SetSourceConnection(self, output:vtkAlgorithmOutput) -> None\nC++: void SetSourceConnection(vtkAlgorithmOutput *output)\n\nSetup a connection for the source to use as the glyph. Note: you\ncan change the source during execution of this filter. This is\nequivalent to SetInputConnection(1, output);\n"},
  {"SetSourceData", PyvtkProgrammableGlyphFilter_SetSourceData, METH_VARARGS,
   "SetSourceData(self, source:vtkPolyData) -> None\nC++: void SetSourceData(vtkPolyData *source)\n\nSet/Get the source to use for this glyph. Note that\nSetSourceData() does not set a pipeline connection but directly\nuses the polydata.\n"},
  {"GetSource", PyvtkProgrammableGlyphFilter_GetSource, METH_VARARGS,
   "GetSource(self) -> vtkPolyData\nC++: vtkPolyData *GetSource()\n\n"},
  {"SetGlyphMethod", PyvtkProgrammableGlyphFilter_SetGlyphMethod, METH_VARARGS,
   "SetGlyphMethod(self, f:Callback) -> None\nC++: void SetGlyphMethod(void (*f)(void *), void *arg)\n\nSpecify function to be called for each input point.\n"},
  {"GetPointId", PyvtkProgrammableGlyphFilter_GetPointId, METH_VARARGS,
   "GetPointId(self) -> int\nC++: virtual vtkIdType GetPointId()\n\nGet the current point id during processing. Value only valid\nduring the Execute() method of this filter. (Meant to be called\nby the GlyphMethod().)\n"},
  {"GetPoint", PyvtkProgrammableGlyphFilter_GetPoint, METH_VARARGS,
   "GetPoint(self) -> (float, float, float)\nC++: virtual double *GetPoint()\n\nGet the current point coordinates during processing. Value only\nvalid during the Execute() method of this filter. (Meant to be\ncalled by the GlyphMethod().)\n"},
  {"GetPointData", PyvtkProgrammableGlyphFilter_GetPointData, METH_VARARGS,
   "GetPointData(self) -> vtkPointData\nC++: virtual vtkPointData *GetPointData()\n\nGet the set of point data attributes for the input. A convenience\nto the programmer to be used in the GlyphMethod(). Only valid\nduring the Execute() method of this filter.\n"},
  {"SetColorMode", PyvtkProgrammableGlyphFilter_SetColorMode, METH_VARARGS,
   "SetColorMode(self, _arg:int) -> None\nC++: virtual void SetColorMode(int _arg)\n\nEither color by the input or source scalar data.\n"},
  {"GetColorMode", PyvtkProgrammableGlyphFilter_GetColorMode, METH_VARARGS,
   "GetColorMode(self) -> int\nC++: virtual int GetColorMode()\n\n"},
  {"SetColorModeToColorByInput", PyvtkProgrammableGlyphFilter_SetColorModeToColorByInput, METH_VARARGS,
   "SetColorModeToColorByInput(self) -> None\nC++: void SetColorModeToColorByInput()\n\n"},
  {"SetColorModeToColorBySource", PyvtkProgrammableGlyphFilter_SetColorModeToColorBySource, METH_VARARGS,
   "SetColorModeToColorBySource(self) -> None\nC++: void SetColorModeToColorBySource()\n\n"},
  {"GetColorModeAsString", PyvtkProgrammableGlyphFilter_GetColorModeAsString, METH_VARARGS,
   "GetColorModeAsString(self) -> str\nC++: const char *GetColorModeAsString()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkProgrammableGlyphFilter_Doc =
  "vtkProgrammableGlyphFilter - control the generation and placement of\nglyphs at input points\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkProgrammableGlyphFilter is a filter that allows you to place a\n"
  "glyph at each input point in the dataset. In addition, the filter is\n"
  "programmable which means the user has control over the generation of\n"
  "the glyph. The glyphs can be controlled via the point data attributes\n"
  "(e.g., scalars, vectors, etc.) or any other information in the input\n"
  "dataset.\n\n"
  "This is the way the filter works. You must define an input dataset\n"
  "which at a minimum contains points with associated attribute values.\n"
  "Also, the Source instance variable must be set which is of type\n"
  "vtkPolyData. Then, for each point in the input, the PointId is set to\n"
  "the current point id, and a user-defined function is called (i.e.,\n"
  "GlyphMethod). In this method you can manipulate the Source data\n"
  "(including changing to a different Source object). After the\n"
  "GlyphMethod is called, vtkProgrammableGlyphFilter will invoke an\n"
  "Update() on its Source object, and then copy its data to the output\n"
  "of the vtkProgrammableGlyphFilter. Therefore the output of this\n"
  "filter is of type vtkPolyData.\n\n"
  "Another option to this filter is the way you color the glyphs. You\n"
  "can use the scalar data from the input or the source. The instance\n"
  "variable ColorMode controls this behavior.\n\n"
  "@warning\n"
  "This filter operates on point data attributes. If you want to use\n"
  "cell data attributes, use a filter like vtkCellCenters to generate\n"
  "points at the centers of cells, and then use these points.\n\n"
  "@warning\n"
  "Note that the data attributes (cell and point) are passed to the\n"
  "output of this filter from the Source object. This works well as long\n"
  "as you are not changing the class of the Source object during\n"
  "execution. However, if the class of the Source object changes, then\n"
  "the potential exists that the data attributes might change during\n"
  "execution (e.g., scalars available from one source and not the next),\n"
  "possibly fouling up the copying of data attributes to the output. In\n"
  "this case, you may have to manually set the output's copy flags\n"
  "(e.g., CopyScalarsOn/Off(), CopyVectorsOn/Off(), etc.) to control\n"
  "what's being copied.\n\n"
  "@sa\n"
  "vtkGlyph3D vtkTensorGlyph vtkCellCenters\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProgrammableGlyphFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersProgrammable.vtkProgrammableGlyphFilter", // tp_name
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
  PyvtkProgrammableGlyphFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProgrammableGlyphFilter_StaticNew()
{
  return vtkProgrammableGlyphFilter::New();
}

PyObject *PyvtkProgrammableGlyphFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProgrammableGlyphFilter_Type, PyvtkProgrammableGlyphFilter_Methods,
    "vtkProgrammableGlyphFilter",
 &PyvtkProgrammableGlyphFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProgrammableGlyphFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProgrammableGlyphFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProgrammableGlyphFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_COLOR_BY_INPUT", 0 },
        { "VTK_COLOR_BY_SOURCE", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

