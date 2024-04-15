// python wrapper for vtkCityGMLReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCityGMLReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCityGMLReader(PyObject *dict); }
extern "C" { PyObject *PyvtkCityGMLReader_ClassNew(); }


static PyObject *
PyvtkCityGMLReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCityGMLReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCityGMLReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCityGMLReader *tempr = vtkCityGMLReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCityGMLReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCityGMLReader::NewInstance());

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
PyvtkCityGMLReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCityGMLReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCityGMLReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

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
      op->vtkCityGMLReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkCityGMLReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_SetLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLOD(temp0);
    }
    else
    {
      op->vtkCityGMLReader::SetLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_GetLODMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLODMinValue() :
      op->vtkCityGMLReader::GetLODMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_GetLODMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLODMaxValue() :
      op->vtkCityGMLReader::GetLODMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_GetLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLOD() :
      op->vtkCityGMLReader::GetLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_SetUseTransparencyAsOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTransparencyAsOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseTransparencyAsOpacity(temp0);
    }
    else
    {
      op->vtkCityGMLReader::SetUseTransparencyAsOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_GetUseTransparencyAsOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTransparencyAsOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseTransparencyAsOpacity() :
      op->vtkCityGMLReader::GetUseTransparencyAsOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_UseTransparencyAsOpacityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTransparencyAsOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseTransparencyAsOpacityOn();
    }
    else
    {
      op->vtkCityGMLReader::UseTransparencyAsOpacityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_UseTransparencyAsOpacityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTransparencyAsOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseTransparencyAsOpacityOff();
    }
    else
    {
      op->vtkCityGMLReader::UseTransparencyAsOpacityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_SetNumberOfBuildings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBuildings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfBuildings(temp0);
    }
    else
    {
      op->vtkCityGMLReader::SetNumberOfBuildings(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_GetNumberOfBuildings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBuildings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBuildings() :
      op->vtkCityGMLReader::GetNumberOfBuildings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_SetBeginBuildingIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBeginBuildingIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBeginBuildingIndex(temp0);
    }
    else
    {
      op->vtkCityGMLReader::SetBeginBuildingIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_GetBeginBuildingIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBeginBuildingIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBeginBuildingIndex() :
      op->vtkCityGMLReader::GetBeginBuildingIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_SetEndBuildingIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndBuildingIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndBuildingIndex(temp0);
    }
    else
    {
      op->vtkCityGMLReader::SetEndBuildingIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCityGMLReader_GetEndBuildingIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndBuildingIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCityGMLReader *op = static_cast<vtkCityGMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEndBuildingIndex() :
      op->vtkCityGMLReader::GetEndBuildingIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCityGMLReader_Methods[] = {
  {"IsTypeOf", PyvtkCityGMLReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCityGMLReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCityGMLReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCityGMLReader\nC++: static vtkCityGMLReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCityGMLReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCityGMLReader\nC++: vtkCityGMLReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCityGMLReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCityGMLReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkCityGMLReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of the CityGML data file to read.\n"},
  {"GetFileName", PyvtkCityGMLReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetLOD", PyvtkCityGMLReader_SetLOD, METH_VARARGS,
   "SetLOD(self, _arg:int) -> None\nC++: virtual void SetLOD(int _arg)\n\nSpecify the level of detail (LOD) to read. Valid values are from\n0 (least detailed) through 4 (most detailed), default value is 3.\n"},
  {"GetLODMinValue", PyvtkCityGMLReader_GetLODMinValue, METH_VARARGS,
   "GetLODMinValue(self) -> int\nC++: virtual int GetLODMinValue()\n\n"},
  {"GetLODMaxValue", PyvtkCityGMLReader_GetLODMaxValue, METH_VARARGS,
   "GetLODMaxValue(self) -> int\nC++: virtual int GetLODMaxValue()\n\n"},
  {"GetLOD", PyvtkCityGMLReader_GetLOD, METH_VARARGS,
   "GetLOD(self) -> int\nC++: virtual int GetLOD()\n\n"},
  {"SetUseTransparencyAsOpacity", PyvtkCityGMLReader_SetUseTransparencyAsOpacity, METH_VARARGS,
   "SetUseTransparencyAsOpacity(self, _arg:int) -> None\nC++: virtual void SetUseTransparencyAsOpacity(int _arg)\n\nCertain input files use app:transparency as opacity. Set this\nfield true to show that correctly. The default is false.\n"},
  {"GetUseTransparencyAsOpacity", PyvtkCityGMLReader_GetUseTransparencyAsOpacity, METH_VARARGS,
   "GetUseTransparencyAsOpacity(self) -> int\nC++: virtual int GetUseTransparencyAsOpacity()\n\n"},
  {"UseTransparencyAsOpacityOn", PyvtkCityGMLReader_UseTransparencyAsOpacityOn, METH_VARARGS,
   "UseTransparencyAsOpacityOn(self) -> None\nC++: virtual void UseTransparencyAsOpacityOn()\n\n"},
  {"UseTransparencyAsOpacityOff", PyvtkCityGMLReader_UseTransparencyAsOpacityOff, METH_VARARGS,
   "UseTransparencyAsOpacityOff(self) -> None\nC++: virtual void UseTransparencyAsOpacityOff()\n\n"},
  {"SetNumberOfBuildings", PyvtkCityGMLReader_SetNumberOfBuildings, METH_VARARGS,
   "SetNumberOfBuildings(self, _arg:int) -> None\nC++: virtual void SetNumberOfBuildings(int _arg)\n\nNumber of buildings read from the file. Default is\nnumeric_limits::max() which means the reader will read all\nbuildings from the file. You can set either NumberOfBuidlings to\nread the range [0, NumberOfBuildings) or you can set\nBeginBuildingIndex and EndBuildingIndex to read the range\n[BeginBuildingIndex, EndBuildingIndex). If you send them both, a\nwarning will be printed and we'll use the latter.\n"},
  {"GetNumberOfBuildings", PyvtkCityGMLReader_GetNumberOfBuildings, METH_VARARGS,
   "GetNumberOfBuildings(self) -> int\nC++: virtual int GetNumberOfBuildings()\n\n"},
  {"SetBeginBuildingIndex", PyvtkCityGMLReader_SetBeginBuildingIndex, METH_VARARGS,
   "SetBeginBuildingIndex(self, _arg:int) -> None\nC++: virtual void SetBeginBuildingIndex(int _arg)\n\nRead a range of buildings from the file [begin, end) Default is\nbegin=0, end = numeric_limits::max() which means the reader will\nread all buildings from the file.\n"},
  {"GetBeginBuildingIndex", PyvtkCityGMLReader_GetBeginBuildingIndex, METH_VARARGS,
   "GetBeginBuildingIndex(self) -> int\nC++: virtual int GetBeginBuildingIndex()\n\n"},
  {"SetEndBuildingIndex", PyvtkCityGMLReader_SetEndBuildingIndex, METH_VARARGS,
   "SetEndBuildingIndex(self, _arg:int) -> None\nC++: virtual void SetEndBuildingIndex(int _arg)\n\n"},
  {"GetEndBuildingIndex", PyvtkCityGMLReader_GetEndBuildingIndex, METH_VARARGS,
   "GetEndBuildingIndex(self) -> int\nC++: virtual int GetEndBuildingIndex()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCityGMLReader_Doc =
  "vtkCityGMLReader - reads CityGML files\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkCityGMLReader is a reader for CityGML .gml files. The output is a\n"
  "multiblock dataset. We read objects at level of detail (LOD)\n"
  "specified (default is 3).\n\n"
  "* The leafs of the multiblock dataset (which are polygonal datasets)\n"
  "* have a field array with one element called \"gml_id\" which\n"
  "* corresponds to the gml:id for gml:TriangulatedSurface,\n"
  "* gml:MultiSurface or gml:CompositeSurface in the CityGML file. If\n"
  "* the poly dataset has a texture, we specify this with a float/double\n"
  "point array\n"
  "* called \"tcoords\" and a field array called\n"
  "* \"texture_uri\" containing one tuple per texture file (and one\n"
  "  component) with the path\n"
  "* to the file. All textures of the same type should be at the same\n"
  "  index in the\n"
  "* texture_uri array. The path can be relative to the citygml file or\n"
  "  it can be absolute.\n"
  "* If the dataset has a app::X3DMaterial we store two double field\n"
  "  arrays with 3\n"
  "* components and 1 tuple: \"diffuse_color\" and \"specular_color\" and\n"
  "* two double field arrays with 1 component and 1 tuple:\n"
  "  \"transparency\",\n"
  "* \"shininess\"\n\n"
  "* Top level children of the multiblock dataset have a field array\n"
  "* with one element called \"element\" which contains the CityGML\n"
  "* element name for example: dem:ReliefFeature, wtr:WaterBody,\n"
  "* grp::CityObjectGroup (forest), veg:SolitaryVegetationObject,\n"
  "* brid:Bridge, run:Tunel, tran:Railway, tran:Road, bldg:Building,\n"
  "* gen:GenericCityObject, luse:LandUse. These nodes also have a gml_id\n"
  "field array.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCityGMLReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCityGML.vtkCityGMLReader", // tp_name
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
  PyvtkCityGMLReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCityGMLReader_StaticNew()
{
  return vtkCityGMLReader::New();
}

PyObject *PyvtkCityGMLReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCityGMLReader_Type, PyvtkCityGMLReader_Methods,
    "vtkCityGMLReader",
 &PyvtkCityGMLReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCityGMLReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCityGMLReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCityGMLReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

