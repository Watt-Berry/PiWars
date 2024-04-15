// python wrapper for vtkOpenGLGL2PSHelperImpl
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLGL2PSHelperImpl.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLGL2PSHelperImpl(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLGL2PSHelperImpl_ClassNew(); }


static PyObject *
PyvtkOpenGLGL2PSHelperImpl_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLGL2PSHelperImpl::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelperImpl_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLGL2PSHelperImpl::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelperImpl_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLGL2PSHelperImpl *tempr = vtkOpenGLGL2PSHelperImpl::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelperImpl_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLGL2PSHelperImpl *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLGL2PSHelperImpl::NewInstance());

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
PyvtkOpenGLGL2PSHelperImpl_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLGL2PSHelperImpl::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelperImpl_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLGL2PSHelperImpl::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessTransformFeedback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  vtkTransformFeedback *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  vtkActor *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTransformFeedback") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->ProcessTransformFeedback(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLGL2PSHelperImpl::ProcessTransformFeedback(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessTransformFeedback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  vtkTransformFeedback *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  const size_t size2 = 4;
  unsigned char temp2[4];
  unsigned char save2[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTransformFeedback") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->ProcessTransformFeedback(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLGL2PSHelperImpl::ProcessTransformFeedback(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessTransformFeedback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  vtkTransformFeedback *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  const size_t size2 = 4;
  float temp2[4];
  float save2[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTransformFeedback") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->ProcessTransformFeedback(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLGL2PSHelperImpl::ProcessTransformFeedback(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback_Methods[] = {
  {"ProcessTransformFeedback", PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback_s1, METH_VARARGS,
   "@VVV *vtkTransformFeedback *vtkRenderer *vtkActor"},
  {"ProcessTransformFeedback", PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback_s2, METH_VARARGS,
   "@VVP *vtkTransformFeedback *vtkRenderer *B"},
  {"ProcessTransformFeedback", PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback_s3, METH_VARARGS,
   "@VVP *vtkTransformFeedback *vtkRenderer *f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ProcessTransformFeedback");
  return nullptr;
}


static PyObject *
PyvtkOpenGLGL2PSHelperImpl_DrawString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  std::string temp0;
  vtkTextProperty *temp1 = nullptr;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  double temp3;
  vtkRenderer *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkRenderer"))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->DrawString(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkOpenGLGL2PSHelperImpl::DrawString(temp0, temp1, temp2, temp3, temp4);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelperImpl_DrawPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  vtkPath *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 2;
  double temp2[2];
  double save2[2];
  const size_t size3 = 4;
  unsigned char temp3[4];
  unsigned char save3[4];
  size_t size4 = 0;
  double store4[2*2];
  double *temp4 = nullptr;
  double *save4 = nullptr;
  if (ap.GetArgSize(4) > 0)
  {
    size4 = 2;
    temp4 = store4;
    save4 = store4 + 2;
  }
  double temp5 = 0.0;
  float temp6 = -1;
  const char *temp7 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 8) &&
      ap.GetVTKObject(temp0, "vtkPath") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->DrawPath(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkOpenGLGL2PSHelperImpl::DrawPath(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelperImpl_Draw3DPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Draw3DPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  vtkPath *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 4;
  unsigned char temp3[4];
  unsigned char save3[4];
  vtkRenderer *temp4 = nullptr;
  const char *temp5 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetVTKObject(temp0, "vtkPath") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetVTKObject(temp4, "vtkRenderer") &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->Draw3DPath(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkOpenGLGL2PSHelperImpl::Draw3DPath(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGL2PSHelperImpl_DrawImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGL2PSHelperImpl *op = static_cast<vtkOpenGLGL2PSHelperImpl *>(vp);

  vtkImageData *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->DrawImage(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLGL2PSHelperImpl::DrawImage(temp0, temp1);
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

static PyMethodDef PyvtkOpenGLGL2PSHelperImpl_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLGL2PSHelperImpl_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLGL2PSHelperImpl_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLGL2PSHelperImpl_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLGL2PSHelperImpl\nC++: static vtkOpenGLGL2PSHelperImpl *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLGL2PSHelperImpl_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLGL2PSHelperImpl\nC++: vtkOpenGLGL2PSHelperImpl *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLGL2PSHelperImpl_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLGL2PSHelperImpl_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ProcessTransformFeedback", PyvtkOpenGLGL2PSHelperImpl_ProcessTransformFeedback, METH_VARARGS,
   "ProcessTransformFeedback(self, tfc:vtkTransformFeedback,\n    ren:vtkRenderer, act:vtkActor) -> None\nC++: void ProcessTransformFeedback(vtkTransformFeedback *tfc,\n    vtkRenderer *ren, vtkActor *act) override;\nProcessTransformFeedback(self, tfc:vtkTransformFeedback,\n    ren:vtkRenderer, col:[int, int, int, int]) -> None\nC++: void ProcessTransformFeedback(vtkTransformFeedback *tfc,\n    vtkRenderer *ren, unsigned char col[4]) override;\nProcessTransformFeedback(self, tfc:vtkTransformFeedback,\n    ren:vtkRenderer, col:[float, float, float, float]) -> None\nC++: void ProcessTransformFeedback(vtkTransformFeedback *tfc,\n    vtkRenderer *ren, float col[4]) override;\n\nParse the vertex information in tfc and inject primitives into\nGL2PS. ren is used to obtain viewport information to complete the\nvertex transformation into pixel coordinates, and act/col are\nused to color the vertices when tfc does not contain color\ninformation.\n"},
  {"DrawString", PyvtkOpenGLGL2PSHelperImpl_DrawString, METH_VARARGS,
   "DrawString(self, str:str, tprop:vtkTextProperty, pos:[float,\n    float, float], backgroundDepth:float, ren:vtkRenderer) -> None\nC++: void DrawString(const std::string &str,\n    vtkTextProperty *tprop, double pos[3], double backgroundDepth,\n     vtkRenderer *ren) override;\n\nFormat the text in str according to tprop and instruct GL2PS to\ndraw it at pixel coordinate pos. Background depth is the z value\nfor the background quad, and should be in NDC space. The drawing\nis always done in the overlay plane.\n@sa TextAsPath\n"},
  {"DrawPath", PyvtkOpenGLGL2PSHelperImpl_DrawPath, METH_VARARGS,
   "DrawPath(self, path:vtkPath, rasterPos:[float, float, float],\n    windowPos:[float, float], rgba:[int, int, int, int],\n    scale:[float, float]=..., rotateAngle:float=0.0,\n    strokeWidth:float=-1, label:str=...) -> None\nC++: void DrawPath(vtkPath *path, double rasterPos[3],\n    double windowPos[2], unsigned char rgba[4],\n    double scale[2]=nullptr, double rotateAngle=0.0,\n    float strokeWidth=-1, const char *label=nullptr) override;\n\nGenerate PS, EPS, or SVG markup from a vtkPath object, and then\ninject it into the output using the gl2psSpecial command. The\npath is translated uniformly in the scene by windowPos. It is\nscaled by scale and rotated counter-clockwise by rotateAngle. The\nrasterPos is in world coordinates and determines clipping and\ndepth. If scale is NULL, no scaling is done. If strokeWidth is\npositive, the path will be stroked with the indicated width. If\nzero or negative, the path will be filled (default). The label\nstring is inserted into the GL2PS output at the beginning of the\npath specification as a comment on supported backends.\n"},
  {"Draw3DPath", PyvtkOpenGLGL2PSHelperImpl_Draw3DPath, METH_VARARGS,
   "Draw3DPath(self, path:vtkPath, actorMatrix:vtkMatrix4x4,\n    rasterPos:[float, float, float], actorColor:[int, int, int,\n    int], ren:vtkRenderer, label:str=...) -> None\nC++: void Draw3DPath(vtkPath *path, vtkMatrix4x4 *actorMatrix,\n    double rasterPos[3], unsigned char actorColor[4],\n    vtkRenderer *ren, const char *label=nullptr) override;\n\nTransform the path using the actor's matrix and current GL state,\nthen draw it to GL2PS. The label string is inserted into the\nGL2PS output at the beginning of the path specification as a\ncomment on supported backends.\n"},
  {"DrawImage", PyvtkOpenGLGL2PSHelperImpl_DrawImage, METH_VARARGS,
   "DrawImage(self, input:vtkImageData, pos:[float, float, float])\n    -> None\nC++: void DrawImage(vtkImageData *input, double pos[3]) override;\n\nDraw the image at pos. Image must be RGB or RGBA with float\nscalars.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLGL2PSHelperImpl_Doc =
  "vtkOpenGLGL2PSHelperImpl - vtkOpenGLGL2PSHelper override\nimplementation.\n\n"
  "Superclass: vtkOpenGLGL2PSHelper\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLGL2PSHelperImpl_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingGL2PSOpenGL2.vtkOpenGLGL2PSHelperImpl", // tp_name
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
  PyvtkOpenGLGL2PSHelperImpl_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLGL2PSHelperImpl_StaticNew()
{
  return vtkOpenGLGL2PSHelperImpl::New();
}

PyObject *PyvtkOpenGLGL2PSHelperImpl_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLGL2PSHelperImpl_Type, PyvtkOpenGLGL2PSHelperImpl_Methods,
    "vtkOpenGLGL2PSHelperImpl",
 &PyvtkOpenGLGL2PSHelperImpl_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkOpenGLGL2PSHelper");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLGL2PSHelperImpl(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLGL2PSHelperImpl_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLGL2PSHelperImpl", o) != 0)
  {
    Py_DECREF(o);
  }

}

