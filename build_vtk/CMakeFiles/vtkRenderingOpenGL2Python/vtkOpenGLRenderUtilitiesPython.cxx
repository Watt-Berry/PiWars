// python wrapper for vtkOpenGLRenderUtilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLRenderUtilities.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLRenderUtilities(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLRenderUtilities_ClassNew(); }


static PyObject *
PyvtkOpenGLRenderUtilities_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLRenderUtilities::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderUtilities *op = static_cast<vtkOpenGLRenderUtilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLRenderUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderUtilities_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLRenderUtilities *tempr = vtkOpenGLRenderUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderUtilities *op = static_cast<vtkOpenGLRenderUtilities *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLRenderUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLRenderUtilities::NewInstance());

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
PyvtkOpenGLRenderUtilities_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLRenderUtilities::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderUtilities_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderUtilities *op = static_cast<vtkOpenGLRenderUtilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLRenderUtilities::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderUtilities_RenderQuad(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RenderQuad");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkShaderProgram *temp2 = nullptr;
  vtkOpenGLVertexArrayObject *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkShaderProgram") &&
      ap.GetVTKObject(temp3, "vtkOpenGLVertexArrayObject"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkOpenGLRenderUtilities::RenderQuad(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkOpenGLRenderUtilities_GetFullScreenQuadVertexShader(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFullScreenQuadVertexShader");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkOpenGLRenderUtilities::GetFullScreenQuadVertexShader();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderUtilities_GetFullScreenQuadFragmentShaderTemplate(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFullScreenQuadFragmentShaderTemplate");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkOpenGLRenderUtilities::GetFullScreenQuadFragmentShaderTemplate();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderUtilities_GetFullScreenQuadGeometryShader(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFullScreenQuadGeometryShader");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkOpenGLRenderUtilities::GetFullScreenQuadGeometryShader();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderUtilities_PrepFullScreenVAO_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PrepFullScreenVAO");

  vtkOpenGLRenderWindow *temp0 = nullptr;
  vtkOpenGLVertexArrayObject *temp1 = nullptr;
  vtkShaderProgram *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderWindow") &&
      ap.GetVTKObject(temp1, "vtkOpenGLVertexArrayObject") &&
      ap.GetVTKObject(temp2, "vtkShaderProgram"))
  {
    bool tempr = vtkOpenGLRenderUtilities::PrepFullScreenVAO(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderUtilities_PrepFullScreenVAO_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PrepFullScreenVAO");

  vtkOpenGLBufferObject *temp0 = nullptr;
  vtkOpenGLVertexArrayObject *temp1 = nullptr;
  vtkShaderProgram *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkOpenGLBufferObject") &&
      ap.GetVTKObject(temp1, "vtkOpenGLVertexArrayObject") &&
      ap.GetVTKObject(temp2, "vtkShaderProgram"))
  {
    bool tempr = vtkOpenGLRenderUtilities::PrepFullScreenVAO(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderUtilities_PrepFullScreenVAO_Methods[] = {
  {"PrepFullScreenVAO", PyvtkOpenGLRenderUtilities_PrepFullScreenVAO_s1, METH_VARARGS | METH_STATIC,
   "VVV *vtkOpenGLRenderWindow *vtkOpenGLVertexArrayObject *vtkShaderProgram"},
  {"PrepFullScreenVAO", PyvtkOpenGLRenderUtilities_PrepFullScreenVAO_s2, METH_VARARGS | METH_STATIC,
   "VVV *vtkOpenGLBufferObject *vtkOpenGLVertexArrayObject *vtkShaderProgram"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLRenderUtilities_PrepFullScreenVAO(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderUtilities_PrepFullScreenVAO_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PrepFullScreenVAO");
  return nullptr;
}


static PyObject *
PyvtkOpenGLRenderUtilities_DrawFullScreenQuad(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DrawFullScreenQuad");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkOpenGLRenderUtilities::DrawFullScreenQuad();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderUtilities_MarkDebugEvent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MarkDebugEvent");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkOpenGLRenderUtilities::MarkDebugEvent(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderUtilities_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLRenderUtilities_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLRenderUtilities_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLRenderUtilities_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLRenderUtilities\nC++: static vtkOpenGLRenderUtilities *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLRenderUtilities_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLRenderUtilities\nC++: vtkOpenGLRenderUtilities *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLRenderUtilities_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLRenderUtilities_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RenderQuad", PyvtkOpenGLRenderUtilities_RenderQuad, METH_VARARGS,
   "RenderQuad(verts:[float, ...], tcoords:[float, ...],\n    program:vtkShaderProgram, vao:vtkOpenGLVertexArrayObject)\n    -> None\nC++: static void RenderQuad(float *verts, float *tcoords,\n    vtkShaderProgram *program, vtkOpenGLVertexArrayObject *vao)\n\nHelper function that draws a quad on the screen at the specified\nvertex coordinates and if tcoords are not NULL with the specified\ntexture coordinates.\n"},
  {"GetFullScreenQuadVertexShader", PyvtkOpenGLRenderUtilities_GetFullScreenQuadVertexShader, METH_VARARGS,
   "GetFullScreenQuadVertexShader() -> str\nC++: static std::string GetFullScreenQuadVertexShader()\n\nDraw a full-screen quad:\n\n* VertexShader and GeometryShader should be used as-is when\n  building the ShaderProgram.\n* FragmentShaderTemplate supports the replacements\n  //VTK::FSQ::Decl  and//VTK::FSQ::Impl  for declaring variables\n  and the shader body, respectively.\n* The varying texCoord is available to the fragment shader for\n  texture lookups into full-screen textures, ie.\n  texture2D(textureName, texCoord).\n* PrepFullScreenVAO initializes a new VAO for drawing a quad.\n* DrawFullScreenQuad actually draws the quad.\n\n* Example usage:\n* * typedef vtkOpenGLRenderUtilities GLUtil;\n\n* // Prep fragment shader source:\n* std::string fragShader =\n  GLUtil::GetFullScreenQuadFragmentShaderTemplate();\n* vtkShaderProgram::Substitute(fragShader, \"//VTK::FSQ::Decl\",\n* \"uniform sampler2D aTexture;\");\n* vtkShaderProgram::Substitute(fragShader, \"//VTK::FSQ::Impl\",\n* \"gl_FragData[0] = texture2D(aTexture, texCoord);\");\n\n* // Create shader program:\n* vtkShaderProgram *prog = shaderCache->ReadyShaderProgram(\n* GLUtil::GetFullScreenQuadVertexShader().c_str(),\n* fragShader.c_str(),\n* GLUtil::GetFullScreenQuadGeometryShader().c_str());\n\n* // Initialize new VAO/vertex buffer. This is only done once:\n* vtkNewvao;\n* GLUtil::PrepFullScreenVAO(renWin, vao.Get(), prog);\n\n* // Setup shader program to sample vtkTextureObject aTexture:\n* aTexture->Activate();\n* prog->SetUniformi(\"aTexture\", aTexture->GetTextureUnit());\n\n* // Render the full-screen quad:\n* vao->Bind();\n* GLUtil::DrawFullScreenQuad();\n* vao->Release();\n* aTexture->Deactivate();\n* \n"},
  {"GetFullScreenQuadFragmentShaderTemplate", PyvtkOpenGLRenderUtilities_GetFullScreenQuadFragmentShaderTemplate, METH_VARARGS,
   "GetFullScreenQuadFragmentShaderTemplate() -> str\nC++: static std::string GetFullScreenQuadFragmentShaderTemplate()\n\n"},
  {"GetFullScreenQuadGeometryShader", PyvtkOpenGLRenderUtilities_GetFullScreenQuadGeometryShader, METH_VARARGS,
   "GetFullScreenQuadGeometryShader() -> str\nC++: static std::string GetFullScreenQuadGeometryShader()\n\n"},
  {"PrepFullScreenVAO", PyvtkOpenGLRenderUtilities_PrepFullScreenVAO, METH_VARARGS,
   "PrepFullScreenVAO(renWin:vtkOpenGLRenderWindow,\n    vao:vtkOpenGLVertexArrayObject, prog:vtkShaderProgram) -> bool\nC++: static bool PrepFullScreenVAO(vtkOpenGLRenderWindow *renWin,\n    vtkOpenGLVertexArrayObject *vao, vtkShaderProgram *prog)\nPrepFullScreenVAO(vertBuf:vtkOpenGLBufferObject,\n    vao:vtkOpenGLVertexArrayObject, prog:vtkShaderProgram) -> bool\nC++: static bool PrepFullScreenVAO(vtkOpenGLBufferObject *vertBuf,\n     vtkOpenGLVertexArrayObject *vao, vtkShaderProgram *prog)\n\n"},
  {"DrawFullScreenQuad", PyvtkOpenGLRenderUtilities_DrawFullScreenQuad, METH_VARARGS,
   "DrawFullScreenQuad() -> None\nC++: static void DrawFullScreenQuad()\n\n"},
  {"MarkDebugEvent", PyvtkOpenGLRenderUtilities_MarkDebugEvent, METH_VARARGS,
   "MarkDebugEvent(event:str) -> None\nC++: static void MarkDebugEvent(const std::string &event)\n\nPass a debugging mark to the render engine to assist development\nvia tools like apitrace. This calls glDebugMessageInsert to\ninsert the event string into the OpenGL command stream.\n\nNote that this method only works when glDebugMessageInsert is\nbound, which it may not be on certain platforms.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLRenderUtilities_Doc =
  "vtkOpenGLRenderUtilities - OpenGL rendering utility functions\n\n"
  "Superclass: vtkObject\n\n"
  "vtkOpenGLRenderUtilities provides functions to help render\n"
  "primitives.\n\n"
  "See also the vtkOpenGLQuadHelper class which may be easier to use.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLRenderUtilities_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLRenderUtilities", // tp_name
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
  PyvtkOpenGLRenderUtilities_Doc, // tp_doc
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

PyObject *PyvtkOpenGLRenderUtilities_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLRenderUtilities_Type, PyvtkOpenGLRenderUtilities_Methods,
    "vtkOpenGLRenderUtilities",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLRenderUtilities(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLRenderUtilities_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLRenderUtilities", o) != 0)
  {
    Py_DECREF(o);
  }

}

