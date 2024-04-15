// python wrapper for vtkURILoader
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
#include "vtkURILoader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkURILoader(PyObject *dict); }
extern "C" { PyObject *PyvtkURILoader_ClassNew(); }


static PyObject *
PyvtkURILoader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkURILoader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURILoader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURILoader *op = static_cast<vtkURILoader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkURILoader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURILoader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkURILoader *tempr = vtkURILoader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURILoader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURILoader *op = static_cast<vtkURILoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkURILoader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkURILoader::NewInstance());

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
PyvtkURILoader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkURILoader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURILoader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURILoader *op = static_cast<vtkURILoader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkURILoader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURILoader_SetBaseURI_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURILoader *op = static_cast<vtkURILoader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetBaseURI(temp0) :
      op->vtkURILoader::SetBaseURI(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkURILoader_SetBaseURI_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURILoader *op = static_cast<vtkURILoader *>(vp);

  vtkURI *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkURI"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetBaseURI(temp0) :
      op->vtkURILoader::SetBaseURI(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkURILoader_SetBaseURI_Methods[] = {
  {"SetBaseURI", PyvtkURILoader_SetBaseURI_s1, METH_VARARGS,
   "@s"},
  {"SetBaseURI", PyvtkURILoader_SetBaseURI_s2, METH_VARARGS,
   "@V *vtkURI"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkURILoader_SetBaseURI(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkURILoader_SetBaseURI_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBaseURI");
  return nullptr;
}


static PyObject *
PyvtkURILoader_GetBaseURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURILoader *op = static_cast<vtkURILoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkURI *tempr = (ap.IsBound() ?
      op->GetBaseURI() :
      op->vtkURILoader::GetBaseURI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURILoader_HasBaseURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBaseURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURILoader *op = static_cast<vtkURILoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBaseURI() :
      op->vtkURILoader::HasBaseURI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURILoader_SetBaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURILoader *op = static_cast<vtkURILoader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetBaseFileName(temp0) :
      op->vtkURILoader::SetBaseFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURILoader_SetBaseDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURILoader *op = static_cast<vtkURILoader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetBaseDirectory(temp0) :
      op->vtkURILoader::SetBaseDirectory(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURILoader_Resolve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resolve");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURILoader *op = static_cast<vtkURILoader *>(vp);

  vtkURI *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkURI"))
  {
    vtkSmartPointer<vtkURI> tempr = (ap.IsBound() ?
      op->Resolve(temp0) :
      op->vtkURILoader::Resolve(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURILoader_Load_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURILoader *op = static_cast<vtkURILoader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSmartPointer<vtkResourceStream> tempr = (ap.IsBound() ?
      op->Load(temp0) :
      op->vtkURILoader::Load(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkURILoader_Load_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURILoader *op = static_cast<vtkURILoader *>(vp);

  const char *temp0 = nullptr;
  size_t temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkSmartPointer<vtkResourceStream> tempr = (ap.IsBound() ?
      op->Load(temp0, temp1) :
      op->vtkURILoader::Load(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkURILoader_Load_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURILoader *op = static_cast<vtkURILoader *>(vp);

  vtkURI *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkURI"))
  {
    vtkSmartPointer<vtkResourceStream> tempr = (ap.IsBound() ?
      op->Load(temp0) :
      op->vtkURILoader::Load(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkURILoader_Load_Methods[] = {
  {"Load", PyvtkURILoader_Load_s1, METH_VARARGS,
   "@s"},
  {"Load", PyvtkURILoader_Load_s3, METH_VARARGS,
   "@V *vtkURI"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkURILoader_Load(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkURILoader_Load_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkURILoader_Load_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Load");
  return nullptr;
}


static PyObject *
PyvtkURILoader_LoadResolved(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadResolved");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURILoader *op = static_cast<vtkURILoader *>(vp);

  vtkURI *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkURI"))
  {
    vtkSmartPointer<vtkResourceStream> tempr = (ap.IsBound() ?
      op->LoadResolved(temp0) :
      op->vtkURILoader::LoadResolved(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkURILoader_Methods[] = {
  {"IsTypeOf", PyvtkURILoader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkURILoader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkURILoader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkURILoader\nC++: static vtkURILoader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkURILoader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkURILoader\nC++: vtkURILoader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkURILoader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkURILoader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetBaseURI", PyvtkURILoader_SetBaseURI, METH_VARARGS,
   "SetBaseURI(self, uri:str) -> bool\nC++: bool SetBaseURI(const std::string &uri)\nSetBaseURI(self, uri:vtkURI) -> bool\nC++: bool SetBaseURI(vtkURI *uri)\n\nSet base URI to use\n\nURI must be an absolute URI. It will be used by `Resolve` and\n`Load(const vtkURI*)` functions to resolve relative references.\n\nIt may be `nullptr`. `HasBaseURI` is a more explicit way to check\nthat.\n\n`SetBaseURI(const std::string& uri)` parses the URI from a string\nand then do the same as `SetBaseURI(vtkURI* uri)`.\n\nBase URI is manipulated as a non-const `vtkURI` because loader\nkeep a owning reference on it.\n\n@param uri A string to parse, or an existing URI. Empty string is\nthe same as nullptr.\nExisting URI Reference count will be increased.\n@return `true` if uri is a suitable base URI (i.e. is\n    `absolute`).\n"},
  {"GetBaseURI", PyvtkURILoader_GetBaseURI, METH_VARARGS,
   "GetBaseURI(self) -> vtkURI\nC++: vtkURI *GetBaseURI()\n\nGet base URI\n@return the pointer on base URI, may be nullptr.\n"},
  {"HasBaseURI", PyvtkURILoader_HasBaseURI, METH_VARARGS,
   "HasBaseURI(self) -> bool\nC++: bool HasBaseURI()\n\nCheck if loader as a base URI\n"},
  {"SetBaseFileName", PyvtkURILoader_SetBaseFileName, METH_VARARGS,
   "SetBaseFileName(self, filepath:str) -> bool\nC++: bool SetBaseFileName(const std::string &filepath)\n\nHigher level way to set the base URI to an existing file\n\nThis generates a file URI on the absolute path of the specified\nfilepath. `filepath` must refer to an existing file.\n\n@param filepath File path to use as base URI.\n`filepath` may be relative, it will be automatically transformed\ninto an absolute path.\n@return true if filename can be resolved, false otherwise\n"},
  {"SetBaseDirectory", PyvtkURILoader_SetBaseDirectory, METH_VARARGS,
   "SetBaseDirectory(self, dirpath:str) -> bool\nC++: bool SetBaseDirectory(const std::string &dirpath)\n\nHigher level way to set the base URI to an existing directory\n\nThis generates a file URI on the absolute path of the specified\ndirectory `\".\"` file. `path` must refer to an existing directory.\n\n@param dirpath File path to use as base URI.\n`dirpath` may be relative, it will be automatically transformed\ninto an absolute path.\n@return true if path can be resolved, false otherwise\n"},
  {"Resolve", PyvtkURILoader_Resolve, METH_VARARGS,
   "Resolve(self, uri:vtkURI) -> vtkURI\nC++: vtkSmartPointer<vtkURI> Resolve(const vtkURI *uri)\n\nResolve URI from base URI\n@return vtkURI::Resolve(this->GetBaseURI(), uri);\n"},
  {"Load", PyvtkURILoader_Load, METH_VARARGS,
   "Load(self, uri:str) -> vtkResourceStream\nC++: vtkSmartPointer<vtkResourceStream> Load(\n    const std::string &uri)\nLoad(self, uri:str, size:int) -> vtkResourceStream\nC++: vtkSmartPointer<vtkResourceStream> Load(const char *uri,\n    std::size_t size)\nLoad(self, uri:vtkURI) -> vtkResourceStream\nC++: vtkSmartPointer<vtkResourceStream> Load(const vtkURI *uri)\n\nLoad a resource referenced by an URI\n\nPerform as if by calling `this->Load(uri.data(), uri.size())`.\n\n@param uri URI string representation, may be empty.\n@return A `vtkResourceStream` on the loaded resource on success,\n    nullptr otherwise.\n"},
  {"LoadResolved", PyvtkURILoader_LoadResolved, METH_VARARGS,
   "LoadResolved(self, uri:vtkURI) -> vtkResourceStream\nC++: vtkSmartPointer<vtkResourceStream> LoadResolved(\n    const vtkURI *uri)\n\nLoad a resource from a full URI\n\nChecks if URI is suitable for loading (i.e. is a full URI), then\ncalls `DoLoad(uri)`.\n\n@param uri A `vtkURI`, must be a full URI\n@return A `vtkResourceStream` on the loaded resource on success,\n    nullptr otherwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkURILoader_Doc =
  "vtkURILoader - Helper class for readers and importer that need to\nload more than one resource\n\n"
  "Superclass: vtkObject\n\n"
  "## Introduction\n\n"
  "`vtkURILoader` is a class that will load URIs, giving\n"
  "`vtkResourceStream`s from resolved resource. URI logic (parsing,\n"
  "resolution) is implemented in `vtkURI`.\n\n"
  "Some formats, such as GLTF, may refer to external resources through\n"
  "URIs. This URI loader can be used to solve this problem.\n\n"
  "`vtkURILoader` provides \"file\" and \"data\" URIs loading. \"file\" URIs\n"
  "loading only supports localhost. More schemes may be supported in\n"
  "future versions.\n\n"
  "## Base URI\n\n"
  "Base URI, specified in\n"
  "[RFC3986#5](https://datatracker.ietf.org/doc/html/rfc3986#section-5),\n"
  "is a concept that enable URIs to refer to relative resources from a\n"
  "base resource. For example, you can have a file that needs to look\n"
  "for another file next to it. The best way to implement this, is to\n"
  "have the first file as the base URI, and the referenced file as a\n"
  "relative reference.\n\n"
  "To set a local file as base URI, you should use `SetBaseFileName`,\n"
  "and for a local directory, you should use `SetBaseDirectory`. These\n"
  "functions generate a \"file\" URI from given path. For example, calling\n"
  "`SetBaseFileName(\".\")` will generate the following URI:\n"
  "`\"file:///<absolute-current-working-directory>/.\"`. These functions\n"
  "should be used because they handle some platform specific details,\n"
  "such as adding a `/` at the beginning of the path on Windows,\n"
  "percent-encoding, resolving relative paths, \".\" and \"..\", checking\n"
  "that path exists and actual filesystem entry type is coherent.\n\n"
  "If the loader has no base URI, it can only load full URIs. See\n"
  "`vtkURI` for more informations.\n\n"
  "## Basic usage\n\n"
  "Here is a basic exemple of `vtkURILoader` usage: ```cpp vtkNewloader;\n"
  "loader->SetBaseFileName(\".\"); // Set current working directory as the\n"
  "base URI // This Load call will parse the string to a vtkURI. In that\n"
  "case, the URI only has a path. // Then it will be resolved from base\n"
  "URI. In that case, the current working directory: //\n"
  "\"file:///<cwd>/.\" + \"example.txt\" == \"file:///<cwd>/example.txt\" //\n"
  "Then it will call the `DoLoad` function. This DoLoad function will\n"
  "check URI scheme, // here \"file\", and call the right loading\n"
  "function. In that case LoadFile will be called. // LoadFile will\n"
  "create a vtkFileResourceStream and open it on URI path. auto stream =\n"
  "loader->Load(\"example.txt\"); // stream is opened on ./example.txt...\n"
  "Or it is null, in case of error.\n\n"
  "// When loading a full URI, base URI is ignored (see vtkURI::Resolve\n"
  "and RFC specs) auto other = loader->Load(\"data:;base64,AAAA\"); //\n"
  "other is a vtkMemoryResourceStream on the decoded base64 data. Here,\n"
  "3 bytes, all equal to 0. ```\n\n"
  "Note that in previous example, `loader->Load()` actually returns a\n"
  "`vtkResourceStream`, the real type can be accessed through\n"
  "`SafeDownCast`.\n\n"
  "## Usage in readers\n\n"
  "When implementing a reader, you should use `vtkURILoader` if the\n"
  "format can contain URIs. Here are the global guidelines of URI loader\n"
  "support in a reader:\n"
  "- The function should be named `SetURILoader`.\n"
  "- Depending on the format, the reader may require an URI loader, or\n"
  "  just optionally use it.\n"
  "- The reader may use a default constructed URI loader by default.\n"
  "  This would enable full URI loading, such as \"data\" URIs.\n"
  "- When reading from a file name, using `SetFileName` function, the\n"
  "  reader should internally open a `vtkFileResourceStream` on the file\n"
  "and create a `vtkURILoader` with a base URI set to `FileName`, then\n"
  "  use the same code as the resource stream based reading. This\n"
  "  prevents code duplication.\n\n"
  "## Extension\n\n"
  "`vtkURILoader::DoLoad` is reponsible of actually loading a full URI.\n"
  "It is a virtual function, so it can be reimplemented to let the user\n"
  "support additional schemes. In case you want do support additional\n"
  "scheme, URI scheme and host should be case-insensitive as specified\n"
  "in\n"
  "[RFC3986#6.2.2.1](https://datatracker.ietf.org/doc/html/rfc3986#sectio\n"
  "n-6.2.2.1).\n\n"
  "`vtkURILoader::LoadFile` and `vtkURILoader::LoadData` are the actual\n"
  "implementation of \"file\" and \"data\" URI loading.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkURILoader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCore.vtkURILoader", // tp_name
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
  PyvtkURILoader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkURILoader_StaticNew()
{
  return vtkURILoader::New();
}

PyObject *PyvtkURILoader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkURILoader_Type, PyvtkURILoader_Methods,
    "vtkURILoader",
 &PyvtkURILoader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkURILoader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkURILoader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkURILoader", o) != 0)
  {
    Py_DECREF(o);
  }

}

