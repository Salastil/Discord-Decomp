// ===== 006497a0  rive::ViewModelInstanceList::removeAllItems =====

void __thiscall rive::ViewModelInstanceList::removeAllItems(ViewModelInstanceList *this)

{
  (*(code *)PTR_removeAllItems_006802a8)();
  return;
}


// ===== 006497b0  rive::ViewModelInstanceList::addItemAt =====

void __thiscall rive::ViewModelInstanceList::addItemAt(void)

{
  (*(code *)PTR_addItemAt_006802b0)();
  return;
}


// ===== 006497c0  rive::ViewModelInstanceList::removeItem =====

void __thiscall rive::ViewModelInstanceList::removeItem(void)

{
  (*(code *)PTR_removeItem_006802b8)();
  return;
}


// ===== 006497d0  luaL_checkinteger =====

void luaL_checkinteger(lua_State *param_1,int param_2)

{
  (*(code *)PTR_luaL_checkinteger_006802c0)(param_1,param_2);
  return;
}


// ===== 006497e0  rive::ViewModelInstanceList::removeItem =====

void __thiscall rive::ViewModelInstanceList::removeItem(ViewModelInstanceList *this,int param_1)

{
  (*(code *)PTR_removeItem_006802c8)(this,param_1);
  return;
}


// ===== 006497f0  rive::ViewModelInstanceList::removeAllItemsWithViewModelInstance =====

void __thiscall
rive::ViewModelInstanceList::removeAllItemsWithViewModelInstance
          (ViewModelInstanceList *this,ViewModelInstance *param_1)

{
  (*(code *)PTR_removeAllItemsWithViewModelInstance_006802d0)();
  return;
}


// ===== 00649800  luaL_checknumber =====

void luaL_checknumber(lua_State *param_1,int param_2)

{
  (*(code *)PTR_luaL_checknumber_006802d8)(param_1,param_2);
  return;
}


// ===== 00649810  luaL_checkunsigned =====

void luaL_checkunsigned(lua_State *param_1,int param_2)

{
  (*(code *)PTR_luaL_checkunsigned_006802e0)(param_1,param_2);
  return;
}


// ===== 00649820  luaL_checkboolean =====

void luaL_checkboolean(lua_State *param_1,int param_2)

{
  (*(code *)PTR_luaL_checkboolean_006802e8)(param_1,param_2);
  return;
}


// ===== 00649830  luaopen_rive_mat2d =====

void luaopen_rive_mat2d(lua_State *param_1)

{
  (*(code *)PTR_luaopen_rive_mat2d_006802f0)();
  return;
}


// ===== 00649840  luaopen_rive_mat4 =====

void luaopen_rive_mat4(lua_State *param_1)

{
  (*(code *)PTR_luaopen_rive_mat4_006802f8)();
  return;
}


// ===== 00649850  luaopen_rive_vector =====

void luaopen_rive_vector(lua_State *param_1)

{
  (*(code *)PTR_luaopen_rive_vector_00680300)();
  return;
}


// ===== 00649860  luaopen_rive_blob =====

void luaopen_rive_blob(lua_State *param_1)

{
  (*(code *)PTR_luaopen_rive_blob_00680308)();
  return;
}


// ===== 00649870  lua_gpu_load_shader_by_name =====

void lua_gpu_load_shader_by_name
               (ScriptedShader *param_1,ScriptingContext *param_2,char *param_3,ShaderAsset *param_4
               )

{
  (*(code *)PTR_lua_gpu_load_shader_by_name_00680310)();
  return;
}


// ===== 00649880  lua_gpu_push_shader_by_name =====

void lua_gpu_push_shader_by_name(lua_State *param_1,char *param_2)

{
  (*(code *)PTR_lua_gpu_push_shader_by_name_00680318)();
  return;
}


// ===== 00649890  gpucanvas_beginrenderpass =====

void gpucanvas_beginrenderpass(lua_State *param_1)

{
  (*(code *)PTR_gpucanvas_beginrenderpass_00680320)();
  return;
}


// ===== 006498a0  luaopen_rive_gpu =====

void luaopen_rive_gpu(lua_State *param_1)

{
  (*(code *)PTR_luaopen_rive_gpu_00680328)();
  return;
}


// ===== 006498b0  rive::rive_lua_closeOrphanRenderPass =====

void __thiscall rive::rive_lua_closeOrphanRenderPass(rive *this,lua_State *param_1)

{
  (*(code *)PTR_rive_lua_closeOrphanRenderPass_00680330)();
  return;
}


// ===== 006498c0  rive::ScriptedGPUBindGroup::~ScriptedGPUBindGroup =====

void __thiscall rive::ScriptedGPUBindGroup::~ScriptedGPUBindGroup(ScriptedGPUBindGroup *this)

{
  (*(code *)PTR__ScriptedGPUBindGroup_00680338)();
  return;
}


// ===== 006498d0  rive::ScriptedGPUCanvas::~ScriptedGPUCanvas =====

void __thiscall rive::ScriptedGPUCanvas::~ScriptedGPUCanvas(ScriptedGPUCanvas *this)

{
  (*(code *)PTR__ScriptedGPUCanvas_00680340)();
  return;
}


// ===== 006498e0  rive::ScriptedGPURenderPass::~ScriptedGPURenderPass =====

void __thiscall rive::ScriptedGPURenderPass::~ScriptedGPURenderPass(ScriptedGPURenderPass *this)

{
  (*(code *)PTR__ScriptedGPURenderPass_00680348)();
  return;
}


// ===== 006498f0  rive::ScriptedCanvas::~ScriptedCanvas =====

void __thiscall rive::ScriptedCanvas::~ScriptedCanvas(ScriptedCanvas *this)

{
  (*(code *)PTR__ScriptedCanvas_00680350)();
  return;
}


// ===== 00649900  rive::ScriptedImage::~ScriptedImage =====

void __thiscall rive::ScriptedImage::~ScriptedImage(ScriptedImage *this)

{
  (*(code *)PTR__ScriptedImage_00680358)();
  return;
}


// ===== 00649910  luaL_checktype =====

void luaL_checktype(lua_State *param_1,int param_2,int param_3)

{
  (*(code *)PTR_luaL_checktype_00680360)(param_1,param_2,param_3);
  return;
}


// ===== 00649920  <EXTERNAL>::snprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00680368)((int)__s);
  return iVar1;
}


// ===== 00649930  lua_tonumberx =====

void lua_tonumberx(lua_State *param_1,int param_2,int *param_3)

{
  (*(code *)PTR_lua_tonumberx_00680370)(param_1,param_2);
  return;
}


// ===== 00649940  luaL_register =====

void luaL_register(lua_State *param_1,char *param_2,luaL_Reg *param_3)

{
  (*(code *)PTR_luaL_register_00680378)();
  return;
}


// ===== 00649950  lua_tobuffer =====

void lua_tobuffer(lua_State *param_1,int param_2,ulong *param_3)

{
  (*(code *)PTR_lua_tobuffer_00680380)(param_1,param_2);
  return;
}


// ===== 00649960  lua_isnumber =====

void lua_isnumber(lua_State *param_1,int param_2)

{
  (*(code *)PTR_lua_isnumber_00680388)(param_1,param_2);
  return;
}


// ===== 00649970  lua_objlen =====

void lua_objlen(lua_State *param_1,int param_2)

{
  (*(code *)PTR_lua_objlen_00680390)(param_1,param_2);
  return;
}


// ===== 00649980  lua_tointegerx =====

void lua_tointegerx(lua_State *param_1,int param_2,int *param_3)

{
  (*(code *)PTR_lua_tointegerx_00680398)(param_1,param_2);
  return;
}


// ===== 00649990  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     assign(char *param_1)

{
  (*(code *)PTR_assign_006803a0)();
  return;
}


// ===== 006499a0  luaopen_rive_image =====

void luaopen_rive_image(lua_State *param_1)

{
  (*(code *)PTR_luaopen_rive_image_006803a8)();
  return;
}


// ===== 006499b0  rive::ScriptedVertexBuffer::update =====

void __thiscall rive::ScriptedVertexBuffer::update(ScriptedVertexBuffer *this,Factory *param_1)

{
  (*(code *)PTR_update_006803b0)();
  return;
}


// ===== 006499c0  rive::ScriptedTriangleBuffer::update =====

void __thiscall rive::ScriptedTriangleBuffer::update(ScriptedTriangleBuffer *this,Factory *param_1)

{
  (*(code *)PTR_update_006803b8)();
  return;
}


// ===== 006499d0  luaopen_rive_mesh =====

void luaopen_rive_mesh(lua_State *param_1)

{
  (*(code *)PTR_luaopen_rive_mesh_006803c0)();
  return;
}


// ===== 006499e0  rive::lua_toblendmode =====

void rive::lua_toblendmode(lua_State *param_1,int param_2)

{
  (*(code *)PTR_lua_toblendmode_006803c8)(param_1,param_2);
  return;
}


// ===== 006499f0  luaopen_rive_paint =====

void luaopen_rive_paint(lua_State *param_1)

{
  (*(code *)PTR_luaopen_rive_paint_006803d0)();
  return;
}


// ===== 00649a00  rive::ScriptedPaintData::ScriptedPaintData =====

void __thiscall
rive::ScriptedPaintData::ScriptedPaintData(ScriptedPaintData *this,ShapePaint *param_1)

{
  (*(code *)PTR_ScriptedPaintData_006803d8)();
  return;
}


// ===== 00649a10  rive::ScriptedPaint::ScriptedPaint =====

void __thiscall rive::ScriptedPaint::ScriptedPaint(ScriptedPaint *this,Factory *param_1)

{
  (*(code *)PTR_ScriptedPaint_006803e0)();
  return;
}


// ===== 00649a20  rive::ScriptedPaint::ScriptedPaint =====

void __thiscall
rive::ScriptedPaint::ScriptedPaint(ScriptedPaint *this,Factory *param_1,ScriptedPaint *param_2)

{
  (*(code *)PTR_ScriptedPaint_006803e8)();
  return;
}


// ===== 00649a30  rive::ScriptedPathData::renderPath =====

void __thiscall rive::ScriptedPathData::renderPath(ScriptedPathData *this,lua_State *param_1)

{
  (*(code *)PTR_renderPath_006803f0)();
  return;
}


// ===== 00649a40  luaopen_rive_path =====

void luaopen_rive_path(lua_State *param_1)

{
  (*(code *)PTR_luaopen_rive_path_006803f8)();
  return;
}


// ===== 00649a50  rive::ScriptedPathData::ScriptedPathData =====

void __thiscall rive::ScriptedPathData::ScriptedPathData(ScriptedPathData *this,RawPath *param_1)

{
  (*(code *)PTR_ScriptedPathData_00680400)();
  return;
}


// ===== 00649a60  luaopen_rive_renderer =====

void luaopen_rive_renderer(lua_State *param_1)

{
  (*(code *)PTR_luaopen_rive_renderer_00680408)();
  return;
}


// ===== 00649a70  lua_replace =====

void lua_replace(lua_State *param_1,int param_2)

{
  (*(code *)PTR_lua_replace_00680410)(param_1,param_2);
  return;
}


// ===== 00649a80  rive::RawPath::move =====

void rive::RawPath::move(void)

{
  (*(code *)PTR_move_00680418)();
  return;
}


// ===== 00649a90  luaL_checkvector =====

void luaL_checkvector(lua_State *param_1,int param_2)

{
  (*(code *)PTR_luaL_checkvector_00680420)(param_1,param_2);
  return;
}


// ===== 00649aa0  rive::RawPath::line =====

void rive::RawPath::line(void)

{
  (*(code *)PTR_line_00680428)();
  return;
}


// ===== 00649ab0  rive::RawPath::quad =====

void rive::RawPath::quad(void)

{
  (*(code *)PTR_quad_00680430)();
  return;
}


// ===== 00649ac0  rive::RawPath::cubic =====

void rive::RawPath::cubic(void)

{
  (*(code *)PTR_cubic_00680438)();
  return;
}


// ===== 00649ad0  rive::RawPath::close =====

void __thiscall rive::RawPath::close(RawPath *this)

{
  (*(code *)PTR_close_00680440)();
  return;
}


// ===== 00649ae0  rive::ContourMeasureIter::next =====

void rive::ContourMeasureIter::next(void)

{
  (*(code *)PTR_next_00680448)();
  return;
}


// ===== 00649af0  rive::ContourMeasure::getPosTan =====

void __thiscall rive::ContourMeasure::getPosTan(ContourMeasure *this,float param_1)

{
  (*(code *)PTR_getPosTan_00680450)();
  return;
}


// ===== 00649b00  rive::ContourMeasure::getSegment =====

void __thiscall
rive::ContourMeasure::getSegment
          (ContourMeasure *this,float param_1,float param_2,RawPath *param_3,bool param_4)

{
  (*(code *)PTR_getSegment_00680458)(this,param_3,param_4);
  return;
}


// ===== 00649b10  rive::PathMeasure::atDistance =====

void rive::PathMeasure::atDistance(float param_1)

{
  (*(code *)PTR_atDistance_00680460)();
  return;
}


// ===== 00649b20  rive::PathMeasure::getSegment =====

void __thiscall
rive::PathMeasure::getSegment
          (PathMeasure *this,float param_1,float param_2,RawPath *param_3,bool param_4)

{
  (*(code *)PTR_getSegment_00680468)(this,param_3,param_4);
  return;
}


// ===== 00649b30  lua_next =====

void lua_next(lua_State *param_1,int param_2)

{
  (*(code *)PTR_lua_next_00680470)(param_1,param_2);
  return;
}


// ===== 00649b40  lua_setmetatable =====

void lua_setmetatable(lua_State *param_1,int param_2)

{
  (*(code *)PTR_lua_setmetatable_00680478)(param_1,param_2);
  return;
}


// ===== 00649b50  rive::ScriptingVM::init =====

void rive::ScriptingVM::init(lua_State *param_1,ScriptingContext *param_2)

{
  (*(code *)PTR_init_00680480)();
  return;
}


// ===== 00649b60  rive::ScriptingContext::addModule =====

void __thiscall rive::ScriptingContext::addModule(ScriptingContext *this,ModuleDetails *param_1)

{
  (*(code *)PTR_addModule_00680488)();
  return;
}


// ===== 00649b70  rive::ScriptingContext::performRegistration =====

void __thiscall
rive::ScriptingContext::performRegistration(ScriptingContext *this,lua_State *param_1)

{
  (*(code *)PTR_performRegistration_00680490)();
  return;
}


// ===== 00649b80  rive::ScriptingVM::loadModule =====

void __thiscall rive::ScriptingVM::loadModule(void)

{
  (*(code *)PTR_loadModule_00680498)();
  return;
}


// ===== 00649b90  rive::ScriptingVM::executeModule =====

void rive::ScriptingVM::executeModule(lua_State *param_1,char *param_2,bool param_3)

{
  (*(code *)PTR_executeModule_006804a0)(param_1,param_2,param_3);
  return;
}


// ===== 00649ba0  rive::ScriptingContext::tryRegisterModule =====

void __thiscall
rive::ScriptingContext::tryRegisterModule
          (ScriptingContext *this,lua_State *param_1,ModuleDetails *param_2)

{
  (*(code *)PTR_tryRegisterModule_006804a8)();
  return;
}


// ===== 00649bb0  rive::ScriptingVM::registerScript =====

void __thiscall rive::ScriptingVM::registerScript(void)

{
  (*(code *)PTR_registerScript_006804b0)();
  return;
}


// ===== 00649bc0  rive::ScriptingVM::registerModule =====

void __thiscall rive::ScriptingVM::registerModule(void)

{
  (*(code *)PTR_registerModule_006804b8)();
  return;
}


// ===== 00649bd0  rive::ScriptingContext::onModuleRegistered =====

void __thiscall
rive::ScriptingContext::onModuleRegistered(ScriptingContext *this,ModuleDetails *param_1)

{
  (*(code *)PTR_onModuleRegistered_006804c0)();
  return;
}


// ===== 00649be0  rive::ScriptingContext::sortNextModule =====

void __thiscall
rive::ScriptingContext::sortNextModule
          (ScriptingContext *this,ModuleDetails *param_1,vector *param_2,vector *param_3,
          unordered_set *param_4)

{
  (*(code *)PTR_sortNextModule_006804c8)();
  return;
}


// ===== 00649bf0  rive::ScriptingContext::recordMissingDependency =====

void __thiscall
rive::ScriptingContext::recordMissingDependency
          (ScriptingContext *this,basic_string *param_1,basic_string *param_2)

{
  (*(code *)PTR_recordMissingDependency_006804d0)();
  return;
}


// ===== 00649c00  lua_call =====

void lua_call(lua_State *param_1,int param_2,int param_3)

{
  (*(code *)PTR_lua_call_006804d8)(param_1,param_2,param_3);
  return;
}


// ===== 00649c10  luaL_checkbuffer =====

void luaL_checkbuffer(lua_State *param_1,int param_2,ulong *param_3)

{
  (*(code *)PTR_luaL_checkbuffer_006804e0)(param_1,param_2);
  return;
}


// ===== 00649c20  lua_checkstack =====

void lua_checkstack(lua_State *param_1,int param_2)

{
  (*(code *)PTR_lua_checkstack_006804e8)(param_1,param_2);
  return;
}


// ===== 00649c30  luaL_sandbox =====

void luaL_sandbox(lua_State *param_1)

{
  (*(code *)PTR_luaL_sandbox_006804f0)();
  return;
}


// ===== 00649c40  lua_newstate =====

void lua_newstate(_func_void_ptr_void_ptr_void_ptr_ulong_ulong *param_1,void *param_2)

{
  (*(code *)PTR_lua_newstate_006804f8)();
  return;
}


// ===== 00649c50  lua_newthread =====

void lua_newthread(lua_State *param_1)

{
  (*(code *)PTR_lua_newthread_00680500)();
  return;
}


// ===== 00649c60  lua_xmove =====

void lua_xmove(lua_State *param_1,lua_State *param_2,int param_3)

{
  (*(code *)PTR_lua_xmove_00680508)(param_1,param_2,param_3);
  return;
}


// ===== 00649c70  luau_load =====

void luau_load(lua_State *param_1,char *param_2,char *param_3,ulong param_4,int param_5)

{
  (*(code *)PTR_luau_load_00680510)();
  return;
}


// ===== 00649c80  lua_resume =====

void lua_resume(lua_State *param_1,lua_State *param_2,int param_3)

{
  (*(code *)PTR_lua_resume_00680518)(param_1,param_2,param_3);
  return;
}


// ===== 00649c90  lua_pushfstringL =====

void lua_pushfstringL(lua_State *param_1,char *param_2,...)

{
  (*(code *)PTR_lua_pushfstringL_00680520)();
  return;
}


// ===== 00649ca0  luaL_findtable =====

void luaL_findtable(lua_State *param_1,int param_2,char *param_3,int param_4)

{
  (*(code *)PTR_luaL_findtable_00680528)(param_1,param_2,param_3,param_4);
  return;
}


// ===== 00649cb0  luaL_tolstring =====

void luaL_tolstring(lua_State *param_1,int param_2,ulong *param_3)

{
  (*(code *)PTR_luaL_tolstring_00680530)(param_1,param_2);
  return;
}


// ===== 00649cc0  lua_tovector =====

void lua_tovector(lua_State *param_1,int param_2)

{
  (*(code *)PTR_lua_tovector_00680538)(param_1,param_2);
  return;
}


// ===== 00649cd0  lua_rawseti =====

void lua_rawseti(lua_State *param_1,int param_2,int param_3)

{
  (*(code *)PTR_lua_rawseti_00680540)(param_1,param_2,param_3);
  return;
}


// ===== 00649ce0  lua_rawgetfield =====

void lua_rawgetfield(lua_State *param_1,int param_2,char *param_3)

{
  (*(code *)PTR_lua_rawgetfield_00680548)(param_1,param_2);
  return;
}


// ===== 00649cf0  lua_newbuffer =====

void lua_newbuffer(lua_State *param_1,ulong param_2)

{
  (*(code *)PTR_lua_newbuffer_00680550)();
  return;
}


// ===== 00649d00  lua_yield =====

void lua_yield(lua_State *param_1,int param_2)

{
  (*(code *)PTR_lua_yield_00680558)(param_1,param_2);
  return;
}


// ===== 00649d10  lua_resetthread =====

void lua_resetthread(lua_State *param_1)

{
  (*(code *)PTR_lua_resetthread_00680560)();
  return;
}


// ===== 00649d20  lua_getinfo =====

void lua_getinfo(lua_State *param_1,int param_2,char *param_3,lua_Debug *param_4)

{
  (*(code *)PTR_lua_getinfo_00680568)(param_1,param_2);
  return;
}


// ===== 00649d30  luaL_where =====

void luaL_where(lua_State *param_1,int param_2)

{
  (*(code *)PTR_luaL_where_00680570)(param_1,param_2);
  return;
}


// ===== 00649d40  lua_concat =====

void lua_concat(lua_State *param_1,int param_2)

{
  (*(code *)PTR_lua_concat_00680578)(param_1,param_2);
  return;
}


// ===== 00649d50  lua_error =====

void lua_error(lua_State *param_1)

{
  (*(code *)PTR_lua_error_00680580)();
  return;
}


// ===== 00649d60  <EXTERNAL>::realloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00680588)();
  return pvVar1;
}


// ===== 00649d70  lua_rawcheckstack =====

void lua_rawcheckstack(lua_State *param_1,int param_2)

{
  (*(code *)PTR_lua_rawcheckstack_00680590)(param_1,param_2);
  return;
}


// ===== 00649d80  <EXTERNAL>::printf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00680598)((int)__format);
  return iVar1;
}


// ===== 00649d90  <EXTERNAL>::fputc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_006805a0)(__c);
  return iVar1;
}


// ===== 00649da0  <EXTERNAL>::putchar =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_006805a8)(__c);
  return iVar1;
}


// ===== 00649db0  rive::AABB::AABB =====

void __thiscall rive::AABB::AABB(void)

{
  (*(code *)PTR_AABB_006805b0)();
  return;
}


// ===== 00649dc0  rive::math::chop_cubic_at =====

void rive::math::chop_cubic_at(Vec2D *param_1,Vec2D *param_2,float *param_3,int param_4)

{
  (*(code *)PTR_chop_cubic_at_006805b8)();
  return;
}


// ===== 00649dd0  rive::ContourMeasure::Segment::extract =====

void __thiscall
rive::ContourMeasure::Segment::extract(Segment *this,RawPath *param_1,Vec2D *param_2)

{
  (*(code *)PTR_extract_006805c0)();
  return;
}


// ===== 00649de0  rive::ContourMeasure::Segment::extract =====

void __thiscall
rive::ContourMeasure::Segment::extract
          (Segment *this,RawPath *param_1,float param_2,float param_3,Vec2D *param_4,bool param_5)

{
  (*(code *)PTR_extract_006805c8)();
  return;
}


// ===== 00649df0  rive::ContourMeasureIter::tryNext =====

void rive::ContourMeasureIter::tryNext(void)

{
  (*(code *)PTR_tryNext_006805d0)();
  return;
}


// ===== 00649e00  rive::ContourMeasure::ContourMeasure =====

void __thiscall
rive::ContourMeasure::ContourMeasure
          (ContourMeasure *this,vector *param_1,vector *param_2,float param_3,bool param_4)

{
  (*(code *)PTR_ContourMeasure_006805d8)();
  return;
}


// ===== 00649e10  rive::HitTester::reset =====

void __thiscall rive::HitTester::reset(HitTester *this,TAABB *param_1)

{
  (*(code *)PTR_reset_006805e0)();
  return;
}


// ===== 00649e20  rive::HitTester::close =====

void __thiscall rive::HitTester::close(HitTester *this)

{
  (*(code *)PTR_close_006805e8)();
  return;
}


// ===== 00649e30  rive::HitTester::line =====

void rive::HitTester::line(void)

{
  (*(code *)PTR_line_006805f0)();
  return;
}


// ===== 00649e40  rive::HitTester::recurse_cubic =====

void rive::HitTester::recurse_cubic(void)

{
  (*(code *)PTR_recurse_cubic_006805f8)();
  return;
}


// ===== 00649e50  rive::HitTester::cubic =====

void rive::HitTester::cubic(void)

{
  (*(code *)PTR_cubic_00680600)();
  return;
}


// ===== 00649e60  rive::HitTester::addRect =====

void __thiscall rive::HitTester::addRect(void)

{
  (*(code *)PTR_addRect_00680608)();
  return;
}


// ===== 00649e70  rive::Mat2D::findMaxScale =====

void __thiscall rive::Mat2D::findMaxScale(Mat2D *this)

{
  (*(code *)PTR_findMaxScale_00680610)();
  return;
}


// ===== 00649e80  rive::RawPath::transform =====

void rive::RawPath::transform(Mat2D *param_1)

{
  (*(code *)PTR_transform_00680618)();
  return;
}


// ===== 00649e90  <EXTERNAL>::std::__ndk1::__sort<std::__ndk1::__less<float,float>&,float*> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__sort<std::__ndk1::__less<float,float>&,float*>
               (float *param_1,float *param_2,__less *param_3)

{
  (*(code *)PTR___sort<std___ndk1___less<float,float>&,float*>_00680620)();
  return;
}


// ===== 00649ea0  rive::RawPath::addPathBackwards =====

void __thiscall rive::RawPath::addPathBackwards(RawPath *this,RawPath *param_1,Mat2D *param_2)

{
  (*(code *)PTR_addPathBackwards_00680628)();
  return;
}


// ===== 00649eb0  rive::RawPath::pruneEmptySegments =====

void rive::RawPath::pruneEmptySegments(void)

{
  (*(code *)PTR_pruneEmptySegments_00680630)();
  return;
}


// ===== 00649ec0  rive::RawPath::addTo =====

void __thiscall rive::RawPath::addTo(RawPath *this,CommandPath *param_1)

{
  (*(code *)PTR_addTo_00680638)();
  return;
}


// ===== 00649ed0  rive::RawPath::preciseBounds =====

void __thiscall rive::RawPath::preciseBounds(RawPath *this)

{
  (*(code *)PTR_preciseBounds_00680640)();
  return;
}


// ===== 00649ee0  rive::RawPath::computeCoarseArea =====

void __thiscall rive::RawPath::computeCoarseArea(RawPath *this)

{
  (*(code *)PTR_computeCoarseArea_00680648)();
  return;
}


// ===== 00649ef0  rive::RectanglesToContour::subdivideRectangles =====

void __thiscall rive::RectanglesToContour::subdivideRectangles(RectanglesToContour *this)

{
  (*(code *)PTR_subdivideRectangles_00680650)();
  return;
}


// ===== 00649f00  rive::RectanglesToContour::addRect =====

void __thiscall rive::RectanglesToContour::addRect(RectanglesToContour *this,AABB *param_1)

{
  (*(code *)PTR_addRect_00680658)();
  return;
}


// ===== 00649f10  extractPolygons =====

void extractPolygons(vector *param_1,vector *param_2,unordered_map *param_3,unordered_map *param_4)

{
  (*(code *)PTR_extractPolygons_00680660)();
  return;
}


// ===== 00649f20  rive::RectanglesToContour::computeContours =====

void __thiscall rive::RectanglesToContour::computeContours(RectanglesToContour *this)

{
  (*(code *)PTR_computeContours_00680668)();
  return;
}


// ===== 00649f30  rive::Contour::isClockwise =====

void __thiscall rive::Contour::isClockwise(Contour *this)

{
  (*(code *)PTR_isClockwise_00680670)();
  return;
}


// ===== 00649f40  rive::NestedArtboard::~NestedArtboard =====

void __thiscall rive::NestedArtboard::~NestedArtboard(NestedArtboard *this)

{
  (*(code *)PTR__NestedArtboard_00680678)();
  return;
}


// ===== 00649f50  rive::NestedArtboard::nest =====

void __thiscall rive::NestedArtboard::nest(NestedArtboard *this,Artboard *param_1)

{
  (*(code *)PTR_nest_00680680)();
  return;
}


// ===== 00649f60  rive::NestedArtboard::bindArtboardInstance =====

void __thiscall rive::NestedArtboard::bindArtboardInstance(void)

{
  (*(code *)PTR_bindArtboardInstance_00680688)();
  return;
}


// ===== 00649f70  rive::NestedArtboard::updateArtboard =====

void __thiscall
rive::NestedArtboard::updateArtboard(NestedArtboard *this,ViewModelInstanceArtboard *param_1)

{
  (*(code *)PTR_updateArtboard_00680690)();
  return;
}


// ===== 00649f80  rive::NestedArtboard::onAddedClean =====

void rive::NestedArtboard::onAddedClean(CoreContext *param_1)

{
  (*(code *)PTR_onAddedClean_00680698)();
  return;
}


// ===== 00649f90  rive::NestedArtboard::update =====

void __thiscall rive::NestedArtboard::update(void)

{
  (*(code *)PTR_update_006806a0)();
  return;
}


// ===== 00649fa0  rive::NestedArtboard::input =====

void __thiscall rive::NestedArtboard::input(void)

{
  (*(code *)PTR_input_006806a8)();
  return;
}


// ===== 00649fb0  rive::NestedArtboard::internalDataContext =====

void __thiscall rive::NestedArtboard::internalDataContext(void)

{
  (*(code *)PTR_internalDataContext_006806b0)();
  return;
}


// ===== 00649fc0  rive::NestedArtboard::relinkDataContext =====

void __thiscall rive::NestedArtboard::relinkDataContext(void)

{
  (*(code *)PTR_relinkDataContext_006806b8)();
  return;
}


// ===== 00649fd0  rive::NestedArtboard::bindViewModelInstance =====

void __thiscall rive::NestedArtboard::bindViewModelInstance(void)

{
  (*(code *)PTR_bindViewModelInstance_006806c0)();
  return;
}


// ===== 00649fe0  rive::NestedArtboard::advanceComponent =====

void __thiscall rive::NestedArtboard::advanceComponent(void)

{
  (*(code *)PTR_advanceComponent_006806c8)();
  return;
}


// ===== 00649ff0  rive::NestedArtboard::~NestedArtboard =====

void __thiscall rive::NestedArtboard::~NestedArtboard(NestedArtboard *this)

{
  (*(code *)PTR__NestedArtboard_006806d0)();
  return;
}


// ===== 0064a000  rive::NestedArtboardLayout::updateArtboard =====

void __thiscall
rive::NestedArtboardLayout::updateArtboard
          (NestedArtboardLayout *this,ViewModelInstanceArtboard *param_1)

{
  (*(code *)PTR_updateArtboard_006806d8)();
  return;
}


// ===== 0064a010  rive::Font::shapeText =====

void __thiscall rive::Font::shapeText(void)

{
  (*(code *)PTR_shapeText_006806e0)();
  return;
}


// ===== 0064a020  rive::RenderShader::~RenderShader =====

void __thiscall rive::RenderShader::~RenderShader(RenderShader *this)

{
  (*(code *)PTR__RenderShader_006806e8)();
  return;
}


// ===== 0064a030  rive::RenderImage::~RenderImage =====

void __thiscall rive::RenderImage::~RenderImage(RenderImage *this)

{
  (*(code *)PTR__RenderImage_006806f0)();
  return;
}


// ===== 0064a040  rive::ScriptInputArtboard::updateArtboard =====

void __thiscall
rive::ScriptInputArtboard::updateArtboard
          (ScriptInputArtboard *this,ViewModelInstanceArtboard *param_1)

{
  (*(code *)PTR_updateArtboard_006806f8)();
  return;
}


// ===== 0064a050  rive::ScriptInputArtboard::~ScriptInputArtboard =====

void __thiscall rive::ScriptInputArtboard::~ScriptInputArtboard(ScriptInputArtboard *this)

{
  (*(code *)PTR__ScriptInputArtboard_00680700)();
  return;
}


// ===== 0064a060  rive::ScriptedObject::setArtboardInput =====

void __thiscall rive::ScriptedObject::setArtboardInput(void)

{
  (*(code *)PTR_setArtboardInput_00680708)();
  return;
}


// ===== 0064a070  rive::ScriptInputBoolean::~ScriptInputBoolean =====

void __thiscall rive::ScriptInputBoolean::~ScriptInputBoolean(ScriptInputBoolean *this)

{
  (*(code *)PTR__ScriptInputBoolean_00680710)();
  return;
}


// ===== 0064a080  rive::ScriptedObject::setBooleanInput =====

void __thiscall rive::ScriptedObject::setBooleanInput(void)

{
  (*(code *)PTR_setBooleanInput_00680718)();
  return;
}


// ===== 0064a090  rive::ScriptInputColor::~ScriptInputColor =====

void __thiscall rive::ScriptInputColor::~ScriptInputColor(ScriptInputColor *this)

{
  (*(code *)PTR__ScriptInputColor_00680720)();
  return;
}


// ===== 0064a0a0  rive::ScriptedObject::setIntegerInput =====

void __thiscall rive::ScriptedObject::setIntegerInput(void)

{
  (*(code *)PTR_setIntegerInput_00680728)();
  return;
}


// ===== 0064a0b0  rive::ScriptInputNumber::~ScriptInputNumber =====

void __thiscall rive::ScriptInputNumber::~ScriptInputNumber(ScriptInputNumber *this)

{
  (*(code *)PTR__ScriptInputNumber_00680730)();
  return;
}


// ===== 0064a0c0  rive::ScriptedObject::setNumberInput =====

void rive::ScriptedObject::setNumberInput(void)

{
  (*(code *)PTR_setNumberInput_00680738)();
  return;
}


// ===== 0064a0d0  rive::ScriptInputString::~ScriptInputString =====

void __thiscall rive::ScriptInputString::~ScriptInputString(ScriptInputString *this)

{
  (*(code *)PTR__ScriptInputString_00680740)();
  return;
}


// ===== 0064a0e0  rive::ScriptedObject::setStringInput =====

void __thiscall rive::ScriptedObject::setStringInput(void)

{
  (*(code *)PTR_setStringInput_00680748)();
  return;
}


// ===== 0064a0f0  rive::ScriptInputTrigger::~ScriptInputTrigger =====

void __thiscall rive::ScriptInputTrigger::~ScriptInputTrigger(ScriptInputTrigger *this)

{
  (*(code *)PTR__ScriptInputTrigger_00680750)();
  return;
}


// ===== 0064a100  rive::ScriptedObject::trigger =====

void rive::ScriptedObject::trigger(void)

{
  (*(code *)PTR_trigger_00680758)();
  return;
}


// ===== 0064a110  rive::ScriptInputViewModelProperty::~ScriptInputViewModelProperty =====

void __thiscall
rive::ScriptInputViewModelProperty::~ScriptInputViewModelProperty
          (ScriptInputViewModelProperty *this)

{
  (*(code *)PTR__ScriptInputViewModelProperty_00680760)();
  return;
}


// ===== 0064a120  rive::ScriptedObject::setViewModelInput =====

void __thiscall rive::ScriptedObject::setViewModelInput(void)

{
  (*(code *)PTR_setViewModelInput_00680768)();
  return;
}


// ===== 0064a130  rive::ScriptedDataConverter::disposeScriptInputs =====

void __thiscall rive::ScriptedDataConverter::disposeScriptInputs(ScriptedDataConverter *this)

{
  (*(code *)PTR_disposeScriptInputs_00680770)();
  return;
}


// ===== 0064a140  rive::ScriptedDataConverter::pushDataValue =====

void __thiscall
rive::ScriptedDataConverter::pushDataValue(ScriptedDataConverter *this,DataValue *param_1)

{
  (*(code *)PTR_pushDataValue_00680778)();
  return;
}


// ===== 0064a150  rive::ScriptedDataConverter::applyConversion =====

void __thiscall
rive::ScriptedDataConverter::applyConversion
          (ScriptedDataConverter *this,DataValue *param_1,basic_string *param_2)

{
  (*(code *)PTR_applyConversion_00680780)();
  return;
}


// ===== 0064a160  rive::ScriptedDataConverter::~ScriptedDataConverter =====

void __thiscall rive::ScriptedDataConverter::~ScriptedDataConverter(ScriptedDataConverter *this)

{
  (*(code *)PTR__ScriptedDataConverter_00680788)();
  return;
}


// ===== 0064a170  rive::ScriptedObject::scriptAdvance =====

void rive::ScriptedObject::scriptAdvance(float param_1)

{
  (*(code *)PTR_scriptAdvance_00680790)();
  return;
}


// ===== 0064a180  rive::ScriptedObject::scriptUpdate =====

void rive::ScriptedObject::scriptUpdate(void)

{
  (*(code *)PTR_scriptUpdate_00680798)();
  return;
}


// ===== 0064a190  rive::ScriptedLayout::callScriptedResize =====

void rive::ScriptedLayout::callScriptedResize(void)

{
  (*(code *)PTR_callScriptedResize_006807a0)();
  return;
}


// ===== 0064a1a0  rive::ScriptedLayout::measureLayout =====

void __thiscall rive::ScriptedLayout::measureLayout(void)

{
  (*(code *)PTR_measureLayout_006807a8)();
  return;
}


// ===== 0064a1b0  rive::ScriptedObject::tryLuaUserInit =====

void rive::ScriptedObject::tryLuaUserInit(lua_State *param_1)

{
  (*(code *)PTR_tryLuaUserInit_006807b0)();
  return;
}


// ===== 0064a1c0  rive::ScriptedPathEffect::updateEffect =====

void rive::ScriptedPathEffect::updateEffect
               (PathProvider *param_1,ShapePaintPath *param_2,ShapePaint *param_3)

{
  (*(code *)PTR_updateEffect_006807b8)();
  return;
}


// ===== 0064a1d0  rive::StrokeEffect::invalidateEffect =====

void __thiscall rive::StrokeEffect::invalidateEffect(StrokeEffect *this,PathProvider *param_1)

{
  (*(code *)PTR_invalidateEffect_006807c0)();
  return;
}


// ===== 0064a1e0  rive::SemanticData::applyInferredSemanticsIfNeeded =====

void __thiscall rive::SemanticData::applyInferredSemanticsIfNeeded(SemanticData *this)

{
  (*(code *)PTR_applyInferredSemanticsIfNeeded_006807c8)();
  return;
}


// ===== 0064a1f0  rive::SemanticData::updateWorldBounds =====

void rive::SemanticData::updateWorldBounds(void)

{
  (*(code *)PTR_updateWorldBounds_006807d0)();
  return;
}


// ===== 0064a200  rive::SemanticData::requestFocus =====

void __thiscall rive::SemanticData::requestFocus(SemanticData *this)

{
  (*(code *)PTR_requestFocus_006807d8)();
  return;
}


// ===== 0064a210  rive::SemanticData::~SemanticData =====

void __thiscall rive::SemanticData::~SemanticData(SemanticData *this)

{
  (*(code *)PTR__SemanticData_006807e0)();
  return;
}


// ===== 0064a220  rive::resolveInferredSemantics =====

void rive::resolveInferredSemantics(Component *param_1,ResolvedSemanticData *param_2)

{
  (*(code *)PTR_resolveInferredSemantics_006807e8)();
  return;
}


// ===== 0064a230  rive::SemanticProvider::semanticBounds =====

void rive::SemanticProvider::semanticBounds(Component *param_1)

{
  (*(code *)PTR_semanticBounds_006807f0)();
  return;
}


// ===== 0064a240  rive::SemanticManager::sortChildrenByVisualPosition =====

void rive::SemanticManager::sortChildrenByVisualPosition(vector *param_1)

{
  (*(code *)PTR_sortChildrenByVisualPosition_006807f8)();
  return;
}


// ===== 0064a250  rive::SemanticManager::reconcileBoundsForSubtree =====

void rive::SemanticManager::reconcileBoundsForSubtree(SemanticNode *param_1)

{
  (*(code *)PTR_reconcileBoundsForSubtree_00680800)();
  return;
}


// ===== 0064a260  rive::SemanticManager::patchBoundsNode =====

void __thiscall
rive::SemanticManager::patchBoundsNode
          (SemanticManager *this,SemanticsDiffNode *param_1,SemanticsDiff *param_2)

{
  (*(code *)PTR_patchBoundsNode_00680808)();
  return;
}


// ===== 0064a270  rive::SemanticManager::patchContentNode =====

void __thiscall
rive::SemanticManager::patchContentNode
          (SemanticManager *this,SemanticsDiffNode *param_1,SemanticsDiff *param_2)

{
  (*(code *)PTR_patchContentNode_00680810)();
  return;
}


// ===== 0064a280  rive::SemanticManager::refresh =====

void rive::SemanticManager::refresh(void)

{
  (*(code *)PTR_refresh_00680818)();
  return;
}


// ===== 0064a290  rive::SemanticManager::consumeDiff =====

void rive::SemanticManager::consumeDiff(void)

{
  (*(code *)PTR_consumeDiff_00680820)();
  return;
}


// ===== 0064a2a0  rive::SemanticProvider::rootTransformAABB =====

void rive::SemanticProvider::rootTransformAABB(Artboard *param_1,AABB *param_2)

{
  (*(code *)PTR_rootTransformAABB_00680828)();
  return;
}


// ===== 0064a2b0  rive::ClippingShape::~ClippingShape =====

void __thiscall rive::ClippingShape::~ClippingShape(ClippingShape *this)

{
  (*(code *)PTR__ClippingShape_00680830)();
  return;
}


// ===== 0064a2c0  rive::Path::addVertex =====

void __thiscall rive::Path::addVertex(Path *this,PathVertex *param_1)

{
  (*(code *)PTR_addVertex_00680838)();
  return;
}


// ===== 0064a2d0  rive::Path::update =====

void __thiscall rive::Path::update(void)

{
  (*(code *)PTR_update_00680840)();
  return;
}


// ===== 0064a2e0  rive::Image::setAsset =====

void __thiscall rive::Image::setAsset(void)

{
  (*(code *)PTR_setAsset_00680848)();
  return;
}


// ===== 0064a2f0  rive::Image::updateImageScale =====

void __thiscall rive::Image::updateImageScale(Image *this)

{
  (*(code *)PTR_updateImageScale_00680850)();
  return;
}


// ===== 0064a300  <EXTERNAL>::puts =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00680858)((int)__s);
  return iVar1;
}


// ===== 0064a310  rive::VertexListener::createProperties =====

void __thiscall rive::VertexListener::createProperties(VertexListener *this)

{
  (*(code *)PTR_createProperties_00680860)();
  return;
}


// ===== 0064a320  rive::VertexListener::createPropertyListener =====

void __thiscall rive::VertexListener::createPropertyListener(void)

{
  (*(code *)PTR_createPropertyListener_00680868)();
  return;
}


// ===== 0064a330  rive::VertexListener::createInPointPropertyListener =====

void __thiscall rive::VertexListener::createInPointPropertyListener(VertexListener *this)

{
  (*(code *)PTR_createInPointPropertyListener_00680870)();
  return;
}


// ===== 0064a340  rive::VertexListener::createOutPointPropertyListener =====

void __thiscall rive::VertexListener::createOutPointPropertyListener(VertexListener *this)

{
  (*(code *)PTR_createOutPointPropertyListener_00680878)();
  return;
}


// ===== 0064a350  rive::VertexListener::createDistancePropertyListener =====

void __thiscall rive::VertexListener::createDistancePropertyListener(VertexListener *this)

{
  (*(code *)PTR_createDistancePropertyListener_00680880)();
  return;
}


// ===== 0064a360  rive::VertexListener::createRotationPropertyListener =====

void __thiscall rive::VertexListener::createRotationPropertyListener(VertexListener *this)

{
  (*(code *)PTR_createRotationPropertyListener_00680888)();
  return;
}


// ===== 0064a370  rive::ListPath::updateList =====

void __thiscall rive::ListPath::updateList(ListPath *this,vector *param_1)

{
  (*(code *)PTR_updateList_00680890)();
  return;
}


// ===== 0064a380  rive::VertexListener::VertexListener =====

void __thiscall rive::VertexListener::VertexListener(void)

{
  (*(code *)PTR_VertexListener_00680898)();
  return;
}


// ===== 0064a390  rive::VertexPropertyListenerSingle::VertexPropertyListenerSingle =====

void __thiscall
rive::VertexPropertyListenerSingle::VertexPropertyListenerSingle
          (VertexPropertyListenerSingle *this,Core *param_1,VertexListener *param_2,
          ViewModelInstanceValue *param_3,ushort param_4,float param_5)

{
  (*(code *)PTR_VertexPropertyListenerSingle_006808a0)();
  return;
}


// ===== 0064a3a0  rive::VertexPropertyListenerMulti::VertexPropertyListenerMulti =====

void __thiscall rive::VertexPropertyListenerMulti::VertexPropertyListenerMulti(void)

{
  (*(code *)PTR_VertexPropertyListenerMulti_006808a8)();
  return;
}


// ===== 0064a3b0  rive::VertexPropertyListenerPoint::VertexPropertyListenerPoint =====

void __thiscall
rive::VertexPropertyListenerPoint::VertexPropertyListenerPoint
          (VertexPropertyListenerPoint *this,Core *param_1,VertexListener *param_2,
          ViewModelInstanceValue *param_3,ViewModelInstanceValue *param_4,ushort param_5,
          ushort param_6)

{
  (*(code *)PTR_VertexPropertyListenerPoint_006808b0)();
  return;
}


// ===== 0064a3c0  rive::VertexPropertyListenerPoint::~VertexPropertyListenerPoint =====

void __thiscall
rive::VertexPropertyListenerPoint::~VertexPropertyListenerPoint(VertexPropertyListenerPoint *this)

{
  (*(code *)PTR__VertexPropertyListenerPoint_006808b8)();
  return;
}


// ===== 0064a3d0  rive::ListPath::~ListPath =====

void __thiscall rive::ListPath::~ListPath(ListPath *this)

{
  (*(code *)PTR__ListPath_006808c0)();
  return;
}


// ===== 0064a3e0  rive::Mesh::addVertex =====

void __thiscall rive::Mesh::addVertex(Mesh *this,MeshVertex *param_1)

{
  (*(code *)PTR_addVertex_006808c8)();
  return;
}


// ===== 0064a3f0  rive::Mesh::onAssetLoaded =====

void __thiscall rive::Mesh::onAssetLoaded(Mesh *this,RenderImage *param_1)

{
  (*(code *)PTR_onAssetLoaded_006808d0)();
  return;
}


// ===== 0064a400  rive::Mesh::draw =====

void __thiscall rive::Mesh::draw(void)

{
  (*(code *)PTR_draw_006808d8)();
  return;
}


// ===== 0064a410  rive::Dash::Dash =====

void __thiscall rive::Dash::Dash(Dash *this,float param_1,bool param_2)

{
  (*(code *)PTR_Dash_006808e0)(this,param_2);
  return;
}


// ===== 0064a420  rive::PathDasher::applyDash =====

void rive::PathDasher::applyDash(void)

{
  (*(code *)PTR_applyDash_006808e8)();
  return;
}


// ===== 0064a430  rive::DashPath::updateEffect =====

void __thiscall
rive::DashPath::updateEffect
          (DashPath *this,PathProvider *param_1,ShapePaintPath *param_2,ShapePaint *param_3)

{
  (*(code *)PTR_updateEffect_006808f0)();
  return;
}


// ===== 0064a440  rive::EffectsContainer::addStrokeEffect =====

void __thiscall
rive::EffectsContainer::addStrokeEffect(EffectsContainer *this,StrokeEffect *param_1)

{
  (*(code *)PTR_addStrokeEffect_006808f8)();
  return;
}


// ===== 0064a450  rive::Feather::rebuildInnerPath =====

void __thiscall
rive::Feather::rebuildInnerPath(Feather *this,ShapePaintPath *param_1,Mat2D *param_2,bool param_3)

{
  (*(code *)PTR_rebuildInnerPath_00680900)();
  return;
}


// ===== 0064a460  rive::ShapePaint::update =====

void __thiscall rive::ShapePaint::update(void)

{
  (*(code *)PTR_update_00680908)();
  return;
}


// ===== 0064a470  rive::LinearGradient::addStop =====

void __thiscall rive::LinearGradient::addStop(LinearGradient *this,GradientStop *param_1)

{
  (*(code *)PTR_addStop_00680910)();
  return;
}


// ===== 0064a480  rive::GroupEffect::addTargetEffect =====

void __thiscall rive::GroupEffect::addTargetEffect(GroupEffect *this,TargetEffect *param_1)

{
  (*(code *)PTR_addTargetEffect_00680918)();
  return;
}


// ===== 0064a490  rive::LinearGradient::applyTo =====

void __thiscall
rive::LinearGradient::applyTo(LinearGradient *this,RenderPaint *param_1,float param_2)

{
  (*(code *)PTR_applyTo_00680920)();
  return;
}


// ===== 0064a4a0  rive::ShapePaintContainer::addPaint =====

void __thiscall rive::ShapePaintContainer::addPaint(ShapePaintContainer *this,ShapePaint *param_1)

{
  (*(code *)PTR_addPaint_00680928)();
  return;
}


// ===== 0064a4b0  rive::ShapePaintPath::renderPath =====

void __thiscall rive::ShapePaintPath::renderPath(ShapePaintPath *this,Factory *param_1)

{
  (*(code *)PTR_renderPath_00680930)();
  return;
}


// ===== 0064a4c0  rive::ShapePaintPath::ShapePaintPath =====

void __thiscall rive::ShapePaintPath::ShapePaintPath(void)

{
  (*(code *)PTR_ShapePaintPath_00680938)();
  return;
}


// ===== 0064a4d0  rive::TargetEffect::updateEffect =====

void rive::TargetEffect::updateEffect
               (PathProvider *param_1,ShapePaintPath *param_2,ShapePaint *param_3)

{
  (*(code *)PTR_updateEffect_00680940)();
  return;
}


// ===== 0064a4e0  rive::TargetEffect::effectPath =====

void __thiscall rive::TargetEffect::effectPath(TargetEffect *this,PathProvider *param_1)

{
  (*(code *)PTR_effectPath_00680948)();
  return;
}


// ===== 0064a4f0  rive::TargetEffect::addPathProvider =====

void __thiscall rive::TargetEffect::addPathProvider(TargetEffect *this,PathProvider *param_1)

{
  (*(code *)PTR_addPathProvider_00680950)();
  return;
}


// ===== 0064a500  rive::TargetEffect::invalidateEffect =====

void __thiscall rive::TargetEffect::invalidateEffect(TargetEffect *this,PathProvider *param_1)

{
  (*(code *)PTR_invalidateEffect_00680958)();
  return;
}


// ===== 0064a510  rive::TrimPath::trimPath =====

void __thiscall rive::TrimPath::trimPath(void)

{
  (*(code *)PTR_trimPath_00680960)();
  return;
}


// ===== 0064a520  rive::TrimPath::updateEffect =====

void __thiscall
rive::TrimPath::updateEffect
          (TrimPath *this,PathProvider *param_1,ShapePaintPath *param_2,ShapePaint *param_3)

{
  (*(code *)PTR_updateEffect_00680968)();
  return;
}


// ===== 0064a530  rive::Path::buildPath =====

void __thiscall rive::Path::buildPath(Path *this,RawPath *param_1)

{
  (*(code *)PTR_buildPath_00680970)();
  return;
}


// ===== 0064a540  rive::Shape::addPath =====

void __thiscall rive::Shape::addPath(Shape *this,Path *param_1)

{
  (*(code *)PTR_addPath_00680978)();
  return;
}


// ===== 0064a550  rive::Shape::pathChanged =====

void __thiscall rive::Shape::pathChanged(Shape *this)

{
  (*(code *)PTR_pathChanged_00680980)();
  return;
}


// ===== 0064a560  rive::PathComposer::PathComposer =====

void __thiscall rive::PathComposer::PathComposer(PathComposer *this,Shape *param_1)

{
  (*(code *)PTR_PathComposer_00680988)();
  return;
}


// ===== 0064a570  rive::Polygon::update =====

void __thiscall rive::Polygon::update(void)

{
  (*(code *)PTR_update_00680990)();
  return;
}


// ===== 0064a580  rive::Polygon::~Polygon =====

void __thiscall rive::Polygon::~Polygon(Polygon *this)

{
  (*(code *)PTR__Polygon_00680998)();
  return;
}


// ===== 0064a590  rive::Shape::hitTestHiFi =====

void __thiscall rive::Shape::hitTestHiFi(Shape *this,Vec2D *param_1,float param_2)

{
  (*(code *)PTR_hitTestHiFi_006809a0)();
  return;
}


// ===== 0064a5a0  rive::Shape::computeWorldBounds =====

void __thiscall rive::Shape::computeWorldBounds(Shape *this,Mat2D *param_1)

{
  (*(code *)PTR_computeWorldBounds_006809a8)();
  return;
}


// ===== 0064a5b0  rive::SliceMesh::updateBuffers =====

void __thiscall rive::SliceMesh::updateBuffers(SliceMesh *this)

{
  (*(code *)PTR_updateBuffers_006809b0)();
  return;
}


// ===== 0064a5c0  rive::SliceMesh::vertexStops =====

void rive::SliceMesh::vertexStops(void)

{
  (*(code *)PTR_vertexStops_006809b8)();
  return;
}


// ===== 0064a5d0  rive::SliceMesh::tileRepeat =====

void __thiscall
rive::SliceMesh::tileRepeat
          (SliceMesh *this,vector *param_1,vector *param_2,vector *param_3,ushort param_4)

{
  (*(code *)PTR_tileRepeat_006809c0)();
  return;
}


// ===== 0064a5e0  rive::SliceMesh::calc =====

void rive::SliceMesh::calc(void)

{
  (*(code *)PTR_calc_006809c8)();
  return;
}


// ===== 0064a5f0  rive::CursorPosition::visualPosition =====

void __thiscall rive::CursorPosition::visualPosition(CursorPosition *this,FullyShapedText *param_1)

{
  (*(code *)PTR_visualPosition_006809d0)();
  return;
}


// ===== 0064a600  rive::CursorPosition::fromOrderedLine =====

void rive::CursorPosition::fromOrderedLine
               (OrderedLine *param_1,uint param_2,float param_3,FullyShapedText *param_4)

{
  (*(code *)PTR_fromOrderedLine_006809d8)(param_1,param_2);
  return;
}


// ===== 0064a610  rive::CursorPosition::atIndex =====

void rive::CursorPosition::atIndex(uint param_1,FullyShapedText *param_2)

{
  (*(code *)PTR_atIndex_006809e0)(param_1);
  return;
}


// ===== 0064a620  rive::Cursor::selectionRects =====

void __thiscall rive::Cursor::selectionRects(Cursor *this,vector *param_1,FullyShapedText *param_2)

{
  (*(code *)PTR_selectionRects_006809e8)();
  return;
}


// ===== 0064a630  rive::Cursor::resolveLinePositions =====

void __thiscall rive::Cursor::resolveLinePositions(Cursor *this,FullyShapedText *param_1)

{
  (*(code *)PTR_resolveLinePositions_006809f0)();
  return;
}


// ===== 0064a640  HBFont::HBFont =====

void __thiscall HBFont::HBFont(void)

{
  (*(code *)PTR_HBFont_006809f8)();
  return;
}


// ===== 0064a650  HBFont::HBFont =====

void __thiscall HBFont::HBFont(HBFont *this,rive_hb_font_t *param_1)

{
  (*(code *)PTR_HBFont_00680a00)();
  return;
}


// ===== 0064a660  HBFont::HBFont =====

void __thiscall HBFont::HBFont(void)

{
  (*(code *)PTR_HBFont_00680a08)();
  return;
}


// ===== 0064a670  HBFont::~HBFont =====

void __thiscall HBFont::~HBFont(HBFont *this)

{
  (*(code *)PTR__HBFont_00680a10)();
  return;
}


// ===== 0064a680  rive_hb_blob_create_or_fail =====

void rive_hb_blob_create_or_fail(void)

{
  (*(code *)PTR_rive_hb_blob_create_or_fail_00680a18)();
  return;
}


// ===== 0064a690  rive_hb_blob_destroy =====

void rive_hb_blob_destroy(void)

{
  (*(code *)PTR_rive_hb_blob_destroy_00680a20)();
  return;
}


// ===== 0064a6a0  rive_hb_face_destroy =====

void rive_hb_face_destroy(void)

{
  (*(code *)PTR_rive_hb_face_destroy_00680a28)();
  return;
}


// ===== 0064a6b0  rive_hb_style_get_value =====

void rive_hb_style_get_value(void)

{
  (*(code *)PTR_rive_hb_style_get_value_00680a30)();
  return;
}


// ===== 0064a6c0  rive_hb_draw_funcs_create =====

void rive_hb_draw_funcs_create(void)

{
  (*(code *)PTR_rive_hb_draw_funcs_create_00680a38)();
  return;
}


// ===== 0064a6d0  rive_hb_draw_funcs_set_move_to_func =====

void rive_hb_draw_funcs_set_move_to_func(void)

{
  (*(code *)PTR_rive_hb_draw_funcs_set_move_to_func_00680a40)();
  return;
}


// ===== 0064a6e0  rive_hb_draw_funcs_set_line_to_func =====

void rive_hb_draw_funcs_set_line_to_func(void)

{
  (*(code *)PTR_rive_hb_draw_funcs_set_line_to_func_00680a48)();
  return;
}


// ===== 0064a6f0  rive_hb_draw_funcs_set_quadratic_to_func =====

void rive_hb_draw_funcs_set_quadratic_to_func(void)

{
  (*(code *)PTR_rive_hb_draw_funcs_set_quadratic_to_func_00680a50)();
  return;
}


// ===== 0064a700  rive_hb_draw_funcs_set_cubic_to_func =====

void rive_hb_draw_funcs_set_cubic_to_func(void)

{
  (*(code *)PTR_rive_hb_draw_funcs_set_cubic_to_func_00680a58)();
  return;
}


// ===== 0064a710  rive_hb_draw_funcs_set_close_path_func =====

void rive_hb_draw_funcs_set_close_path_func(void)

{
  (*(code *)PTR_rive_hb_draw_funcs_set_close_path_func_00680a60)();
  return;
}


// ===== 0064a720  rive_hb_paint_funcs_create =====

void rive_hb_paint_funcs_create(void)

{
  (*(code *)PTR_rive_hb_paint_funcs_create_00680a68)();
  return;
}


// ===== 0064a730  rive_hb_paint_funcs_set_push_transform_func =====

void rive_hb_paint_funcs_set_push_transform_func(void)

{
  (*(code *)PTR_rive_hb_paint_funcs_set_push_transform_func_00680a70)();
  return;
}


// ===== 0064a740  rive_hb_paint_funcs_set_pop_transform_func =====

void rive_hb_paint_funcs_set_pop_transform_func(void)

{
  (*(code *)PTR_rive_hb_paint_funcs_set_pop_transform_func_00680a78)();
  return;
}


// ===== 0064a750  rive_hb_paint_funcs_set_push_clip_glyph_func =====

void rive_hb_paint_funcs_set_push_clip_glyph_func(void)

{
  (*(code *)PTR_rive_hb_paint_funcs_set_push_clip_glyph_func_00680a80)();
  return;
}


// ===== 0064a760  rive_hb_paint_funcs_set_push_clip_rectangle_func =====

void rive_hb_paint_funcs_set_push_clip_rectangle_func(void)

{
  (*(code *)PTR_rive_hb_paint_funcs_set_push_clip_rectangle_func_00680a88)();
  return;
}


// ===== 0064a770  rive_hb_paint_funcs_set_pop_clip_func =====

void rive_hb_paint_funcs_set_pop_clip_func(void)

{
  (*(code *)PTR_rive_hb_paint_funcs_set_pop_clip_func_00680a90)();
  return;
}


// ===== 0064a780  rive_hb_paint_funcs_set_color_func =====

void rive_hb_paint_funcs_set_color_func(void)

{
  (*(code *)PTR_rive_hb_paint_funcs_set_color_func_00680a98)();
  return;
}


// ===== 0064a790  rive_hb_paint_funcs_set_push_group_func =====

void rive_hb_paint_funcs_set_push_group_func(void)

{
  (*(code *)PTR_rive_hb_paint_funcs_set_push_group_func_00680aa0)();
  return;
}


// ===== 0064a7a0  rive_hb_paint_funcs_set_pop_group_func =====

void rive_hb_paint_funcs_set_pop_group_func(void)

{
  (*(code *)PTR_rive_hb_paint_funcs_set_pop_group_func_00680aa8)();
  return;
}


// ===== 0064a7b0  rive_hb_paint_funcs_set_linear_gradient_func =====

void rive_hb_paint_funcs_set_linear_gradient_func(void)

{
  (*(code *)PTR_rive_hb_paint_funcs_set_linear_gradient_func_00680ab0)();
  return;
}


// ===== 0064a7c0  rive_hb_paint_funcs_set_radial_gradient_func =====

void rive_hb_paint_funcs_set_radial_gradient_func(void)

{
  (*(code *)PTR_rive_hb_paint_funcs_set_radial_gradient_func_00680ab8)();
  return;
}


// ===== 0064a7d0  rive_hb_paint_funcs_set_sweep_gradient_func =====

void rive_hb_paint_funcs_set_sweep_gradient_func(void)

{
  (*(code *)PTR_rive_hb_paint_funcs_set_sweep_gradient_func_00680ac0)();
  return;
}


// ===== 0064a7e0  rive_hb_paint_funcs_set_image_func =====

void rive_hb_paint_funcs_set_image_func(void)

{
  (*(code *)PTR_rive_hb_paint_funcs_set_image_func_00680ac8)();
  return;
}


// ===== 0064a7f0  rive_hb_ot_color_palette_get_colors =====

void rive_hb_ot_color_palette_get_colors(void)

{
  (*(code *)PTR_rive_hb_ot_color_palette_get_colors_00680ad0)();
  return;
}


// ===== 0064a800  rive_hb_draw_funcs_destroy =====

void rive_hb_draw_funcs_destroy(void)

{
  (*(code *)PTR_rive_hb_draw_funcs_destroy_00680ad8)();
  return;
}


// ===== 0064a810  rive_hb_paint_funcs_destroy =====

void rive_hb_paint_funcs_destroy(void)

{
  (*(code *)PTR_rive_hb_paint_funcs_destroy_00680ae0)();
  return;
}


// ===== 0064a820  rive_hb_font_destroy =====

void rive_hb_font_destroy(void)

{
  (*(code *)PTR_rive_hb_font_destroy_00680ae8)();
  return;
}


// ===== 0064a830  rive_hb_font_create_sub_font =====

void rive_hb_font_create_sub_font(void)

{
  (*(code *)PTR_rive_hb_font_create_sub_font_00680af0)();
  return;
}


// ===== 0064a840  rive_hb_font_set_variations =====

void rive_hb_font_set_variations(void)

{
  (*(code *)PTR_rive_hb_font_set_variations_00680af8)();
  return;
}


// ===== 0064a850  rive_hb_ot_color_glyph_get_layers =====

void rive_hb_ot_color_glyph_get_layers(void)

{
  (*(code *)PTR_rive_hb_ot_color_glyph_get_layers_00680b00)();
  return;
}


// ===== 0064a860  rive_hb_ot_color_glyph_reference_png =====

void rive_hb_ot_color_glyph_reference_png(void)

{
  (*(code *)PTR_rive_hb_ot_color_glyph_reference_png_00680b08)();
  return;
}


// ===== 0064a870  rive_hb_unicode_funcs_get_default =====

void rive_hb_unicode_funcs_get_default(void)

{
  (*(code *)PTR_rive_hb_unicode_funcs_get_default_00680b10)();
  return;
}


// ===== 0064a880  SBAlgorithmCreate =====

void SBAlgorithmCreate(void)

{
  (*(code *)PTR_SBAlgorithmCreate_00680b18)();
  return;
}


// ===== 0064a890  SBAlgorithmCreateParagraph =====

void SBAlgorithmCreateParagraph(void)

{
  (*(code *)PTR_SBAlgorithmCreateParagraph_00680b20)();
  return;
}


// ===== 0064a8a0  rive_hb_ot_font_set_funcs =====

void rive_hb_ot_font_set_funcs(void)

{
  (*(code *)PTR_rive_hb_ot_font_set_funcs_00680b28)();
  return;
}


// ===== 0064a8b0  rive_hb_ot_layout_table_get_script_tags =====

void rive_hb_ot_layout_table_get_script_tags(void)

{
  (*(code *)PTR_rive_hb_ot_layout_table_get_script_tags_00680b30)();
  return;
}


// ===== 0064a8c0  rive_hb_ot_layout_script_get_language_tags =====

void rive_hb_ot_layout_script_get_language_tags(void)

{
  (*(code *)PTR_rive_hb_ot_layout_script_get_language_tags_00680b38)();
  return;
}


// ===== 0064a8d0  rive_hb_ot_layout_language_get_feature_tags =====

void rive_hb_ot_layout_language_get_feature_tags(void)

{
  (*(code *)PTR_rive_hb_ot_layout_language_get_feature_tags_00680b40)();
  return;
}


// ===== 0064a8e0  rive_hb_buffer_create =====

void rive_hb_buffer_create(void)

{
  (*(code *)PTR_rive_hb_buffer_create_00680b48)();
  return;
}


// ===== 0064a8f0  rive_hb_buffer_add_utf32 =====

void rive_hb_buffer_add_utf32(void)

{
  (*(code *)PTR_rive_hb_buffer_add_utf32_00680b50)();
  return;
}


// ===== 0064a900  rive_hb_buffer_destroy =====

void rive_hb_buffer_destroy(void)

{
  (*(code *)PTR_rive_hb_buffer_destroy_00680b58)();
  return;
}


// ===== 0064a910  rive::FullyShapedText::shape =====

void rive::FullyShapedText::shape(void)

{
  (*(code *)PTR_shape_00680b60)();
  return;
}


// ===== 0064a920  rive::GlyphLookup::compute =====

void rive::GlyphLookup::compute(void)

{
  (*(code *)PTR_compute_00680b68)();
  return;
}


// ===== 0064a930  rive::GlyphLine::ComputeLineSpacing =====

void rive::GlyphLine::ComputeLineSpacing(void)

{
  (*(code *)PTR_ComputeLineSpacing_00680b70)();
  return;
}


// ===== 0064a940  rive::GlyphLine::BreakLines =====

void rive::GlyphLine::BreakLines(void)

{
  (*(code *)PTR_BreakLines_00680b78)();
  return;
}


// ===== 0064a950  rive::RawTextInput::backspace =====

void __thiscall rive::RawTextInput::backspace(RawTextInput *this,int param_1)

{
  (*(code *)PTR_backspace_00680b80)(this,param_1);
  return;
}


// ===== 0064a960  rive::RawTextInput::captureJournalEntry =====

void rive::RawTextInput::captureJournalEntry(void)

{
  (*(code *)PTR_captureJournalEntry_00680b88)();
  return;
}


// ===== 0064a970  rive::RawTextInput::insert =====

void __thiscall rive::RawTextInput::insert(RawTextInput *this,basic_string *param_1)

{
  (*(code *)PTR_insert_00680b90)();
  return;
}


// ===== 0064a980  rive::RawTextInput::update =====

void __thiscall rive::RawTextInput::update(RawTextInput *this,Factory *param_1)

{
  (*(code *)PTR_update_00680b98)();
  return;
}


// ===== 0064a990  rive::RawTextInput::buildTextPaths =====

void __thiscall rive::RawTextInput::buildTextPaths(RawTextInput *this,Factory *param_1)

{
  (*(code *)PTR_buildTextPaths_00680ba0)();
  return;
}


// ===== 0064a9a0  rive::RawTextInput::cursorHorizontal =====

void __thiscall rive::RawTextInput::cursorHorizontal(void)

{
  (*(code *)PTR_cursorHorizontal_00680ba8)();
  return;
}


// ===== 0064a9b0  rive::RawTextInput::find =====

void __thiscall
rive::RawTextInput::find(RawTextInput *this,uchar param_1,CursorPosition *param_2,int param_3)

{
  (*(code *)PTR_find_00680bb0)(this,param_1,param_2,param_3);
  return;
}


// ===== 0064a9c0  rive::RawTextInput::classify =====

void rive::RawTextInput::classify(uint param_1)

{
  (*(code *)PTR_classify_00680bb8)(param_1);
  return;
}


// ===== 0064a9d0  rive::RawTextInput::cursorUp =====

void __thiscall rive::RawTextInput::cursorUp(RawTextInput *this,bool param_1)

{
  (*(code *)PTR_cursorUp_00680bc0)(this,param_1);
  return;
}


// ===== 0064a9e0  rive::RawTextInput::cursorDown =====

void __thiscall rive::RawTextInput::cursorDown(RawTextInput *this,bool param_1)

{
  (*(code *)PTR_cursorDown_00680bc8)(this,param_1);
  return;
}


// ===== 0064a9f0  rive::RawTextInput::moveCursorTo =====

void rive::RawTextInput::moveCursorTo(void)

{
  (*(code *)PTR_moveCursorTo_00680bd0)();
  return;
}


// ===== 0064aa00  rive::RawTextInput::text =====

void rive::RawTextInput::text(void)

{
  (*(code *)PTR_text_00680bd8)();
  return;
}


// ===== 0064aa10  rive::RawTextInput::setTextPrivate =====

void __thiscall rive::RawTextInput::setTextPrivate(void)

{
  (*(code *)PTR_setTextPrivate_00680be0)();
  return;
}


// ===== 0064aa20  rive::RawTextInput::undo =====

void __thiscall rive::RawTextInput::undo(RawTextInput *this)

{
  (*(code *)PTR_undo_00680be8)();
  return;
}


// ===== 0064aa30  rive::RawTextInput::redo =====

void __thiscall rive::RawTextInput::redo(RawTextInput *this)

{
  (*(code *)PTR_redo_00680bf0)();
  return;
}


// ===== 0064aa40  rive::RawTextInput::measure =====

void __thiscall rive::RawTextInput::measure(RawTextInput *this,float param_1,float param_2)

{
  (*(code *)PTR_measure_00680bf8)();
  return;
}


// ===== 0064aa50  rive::Text::BreakLines =====

void __thiscall rive::Text::BreakLines(void)

{
  (*(code *)PTR_BreakLines_00680c00)();
  return;
}


// ===== 0064aa60  rive::OrderedLine::OrderedLine =====

void __thiscall
rive::OrderedLine::OrderedLine
          (OrderedLine *this,Paragraph *param_1,GlyphLine *param_2,float param_3,bool param_4,
          bool param_5,GlyphRun *param_6,float param_7)

{
  (*(code *)PTR_OrderedLine_00680c08)();
  return;
}


// ===== 0064aa70  rive::TextSelectionPath::update =====

void rive::TextSelectionPath::update(void)

{
  (*(code *)PTR_update_00680c10)();
  return;
}


// ===== 0064aa80  rive::OrderedLine::firstCodePointIndex =====

void __thiscall rive::OrderedLine::firstCodePointIndex(OrderedLine *this,GlyphLookup *param_1)

{
  (*(code *)PTR_firstCodePointIndex_00680c18)();
  return;
}


// ===== 0064aa90  rive::OrderedLine::lastCodePointIndex =====

void __thiscall rive::OrderedLine::lastCodePointIndex(OrderedLine *this,GlyphLookup *param_1)

{
  (*(code *)PTR_lastCodePointIndex_00680c20)();
  return;
}


// ===== 0064aaa0  rive::TextValueRunListener::createPropertyListener =====

void __thiscall rive::TextValueRunListener::createPropertyListener(void)

{
  (*(code *)PTR_createPropertyListener_00680c28)();
  return;
}


// ===== 0064aab0  rive::Text::measure =====

void rive::Text::measure(void)

{
  (*(code *)PTR_measure_00680c30)();
  return;
}


// ===== 0064aac0  rive::Text::computeBoundsInfo =====

void rive::Text::computeBoundsInfo(void)

{
  (*(code *)PTR_computeBoundsInfo_00680c38)();
  return;
}


// ===== 0064aad0  rive::Text::shouldDrawLine =====

void __thiscall
rive::Text::shouldDrawLine(Text *this,float param_1,float param_2,GlyphLine *param_3)

{
  (*(code *)PTR_shouldDrawLine_00680c40)();
  return;
}


// ===== 0064aae0  rive::Text::buildRenderStyles =====

void rive::Text::buildRenderStyles(void)

{
  (*(code *)PTR_buildRenderStyles_00680c48)();
  return;
}


// ===== 0064aaf0  rive::Text::drawColorGlyph =====

void __thiscall
rive::Text::drawColorGlyph(Text *this,Renderer *param_1,ColorGlyphInfo *param_2,Mat2D *param_3)

{
  (*(code *)PTR_drawColorGlyph_00680c50)();
  return;
}


// ===== 0064ab00  rive::Text::addRun =====

void __thiscall rive::Text::addRun(Text *this,TextValueRun *param_1)

{
  (*(code *)PTR_addRun_00680c58)();
  return;
}


// ===== 0064ab10  rive::Text::addModifierGroup =====

void __thiscall rive::Text::addModifierGroup(Text *this,TextModifierGroup *param_1)

{
  (*(code *)PTR_addModifierGroup_00680c60)();
  return;
}


// ===== 0064ab20  rive::StyledText::append =====

void __thiscall rive::StyledText::append(void)

{
  (*(code *)PTR_append_00680c68)();
  return;
}


// ===== 0064ab30  rive::Text::makeStyled =====

void __thiscall rive::Text::makeStyled(Text *this,StyledText *param_1,bool param_2)

{
  (*(code *)PTR_makeStyled_00680c70)(this,param_1,param_2);
  return;
}


// ===== 0064ab40  rive::Text::updateList =====

void __thiscall rive::Text::updateList(Text *this,vector *param_1)

{
  (*(code *)PTR_updateList_00680c78)();
  return;
}


// ===== 0064ab50  rive::Text::buildTextStylePaints =====

void __thiscall rive::Text::buildTextStylePaints(Text *this)

{
  (*(code *)PTR_buildTextStylePaints_00680c80)();
  return;
}


// ===== 0064ab60  rive::TextValueRunProperty::TextValueRunProperty =====

void __thiscall rive::TextValueRunProperty::TextValueRunProperty(void)

{
  (*(code *)PTR_TextValueRunProperty_00680c88)();
  return;
}


// ===== 0064ab70  rive::TextValueRunListener::TextValueRunListener =====

void __thiscall rive::TextValueRunListener::TextValueRunListener(void)

{
  (*(code *)PTR_TextValueRunListener_00680c90)();
  return;
}


// ===== 0064ab80  rive::Text::~Text =====

void __thiscall rive::Text::~Text(Text *this)

{
  (*(code *)PTR__Text_00680c98)();
  return;
}


// ===== 0064ab90  rive::TextStylePaint::rewindPath =====

void __thiscall rive::TextStylePaint::rewindPath(TextStylePaint *this)

{
  (*(code *)PTR_rewindPath_00680ca0)();
  return;
}


// ===== 0064aba0  rive::TextModifierGroup::transform =====

void __thiscall
rive::TextModifierGroup::transform
          (TextModifierGroup *this,float param_1,Mat2D *param_2,TransformGlyphArg *param_3)

{
  (*(code *)PTR_transform_00680ca8)();
  return;
}


// ===== 0064abb0  rive::TextStylePaint::addPath =====

void __thiscall rive::TextStylePaint::addPath(TextStylePaint *this,RawPath *param_1,float param_2)

{
  (*(code *)PTR_addPath_00680cb0)();
  return;
}


// ===== 0064abc0  rive::TextValueRun::addHitRect =====

void __thiscall rive::TextValueRun::addHitRect(TextValueRun *this,AABB *param_1)

{
  (*(code *)PTR_addHitRect_00680cb8)();
  return;
}


// ===== 0064abd0  rive::TextStylePaint::draw =====

void __thiscall rive::TextStylePaint::draw(TextStylePaint *this,Renderer *param_1,Mat2D *param_2)

{
  (*(code *)PTR_draw_00680cc0)();
  return;
}


// ===== 0064abe0  rive::TextModifierGroup::applyShapeModifiers =====

void __thiscall
rive::TextModifierGroup::applyShapeModifiers
          (TextModifierGroup *this,Text *param_1,StyledText *param_2)

{
  (*(code *)PTR_applyShapeModifiers_00680cc8)();
  return;
}


// ===== 0064abf0  rive::OrderedLine::buildEllipsisRuns =====

void __thiscall
rive::OrderedLine::buildEllipsisRuns
          (OrderedLine *this,vector *param_1,Paragraph *param_2,GlyphLine *param_3,float param_4,
          bool param_5,GlyphRun *param_6)

{
  (*(code *)PTR_buildEllipsisRuns_00680cd0)();
  return;
}


// ===== 0064ac00  rive::TextFollowPathModifier::reset =====

void __thiscall rive::TextFollowPathModifier::reset(TextFollowPathModifier *this,Mat2D *param_1)

{
  (*(code *)PTR_reset_00680cd8)();
  return;
}


// ===== 0064ac10  rive::TextFollowPathModifier::transformGlyph =====

void rive::TextFollowPathModifier::transformGlyph
               (TransformComponents *param_1,TransformGlyphArg *param_2)

{
  (*(code *)PTR_transformGlyph_00680ce0)();
  return;
}


// ===== 0064ac20  rive::TextInput::syncDisplayedTextFromSource =====

void __thiscall rive::TextInput::syncDisplayedTextFromSource(TextInput *this,bool param_1)

{
  (*(code *)PTR_syncDisplayedTextFromSource_00680ce8)(this,param_1);
  return;
}


// ===== 0064ac30  rive::TextInput::updateMultiline =====

void __thiscall rive::TextInput::updateMultiline(TextInput *this,bool param_1)

{
  (*(code *)PTR_updateMultiline_00680cf0)(this,param_1);
  return;
}


// ===== 0064ac40  rive::TextInput::displayedText =====

void rive::TextInput::displayedText(void)

{
  (*(code *)PTR_displayedText_00680cf8)();
  return;
}


// ===== 0064ac50  rive::TextInput::syncSourceTextFromRaw =====

void __thiscall rive::TextInput::syncSourceTextFromRaw(TextInput *this)

{
  (*(code *)PTR_syncSourceTextFromRaw_00680d00)();
  return;
}


// ===== 0064ac60  rive::TextInput::keyInput =====

void rive::TextInput::keyInput(void)

{
  (*(code *)PTR_keyInput_00680d08)();
  return;
}


// ===== 0064ac70  rive::TextInput::textInput =====

void __thiscall rive::TextInput::textInput(TextInput *this,basic_string *param_1)

{
  (*(code *)PTR_textInput_00680d10)();
  return;
}


// ===== 0064ac80  rive::TextInput::worldToLocalWithViewport =====

void rive::TextInput::worldToLocalWithViewport(void)

{
  (*(code *)PTR_worldToLocalWithViewport_00680d18)();
  return;
}


// ===== 0064ac90  rive::TextInput::advanceDrag =====

void __thiscall rive::TextInput::advanceDrag(TextInput *this,float param_1)

{
  (*(code *)PTR_advanceDrag_00680d20)();
  return;
}


// ===== 0064aca0  rive::TextModifierGroup::addModifierRange =====

void __thiscall
rive::TextModifierGroup::addModifierRange(TextModifierGroup *this,TextModifierRange *param_1)

{
  (*(code *)PTR_addModifierRange_00680d28)();
  return;
}


// ===== 0064acb0  rive::TextModifierGroup::addModifier =====

void __thiscall rive::TextModifierGroup::addModifier(TextModifierGroup *this,TextModifier *param_1)

{
  (*(code *)PTR_addModifier_00680d30)();
  return;
}


// ===== 0064acc0  rive::TextModifierGroup::modifyShape =====

void rive::TextModifierGroup::modifyShape(void)

{
  (*(code *)PTR_modifyShape_00680d38)();
  return;
}


// ===== 0064acd0  rive::TextModifierRange::computeRange =====

void rive::TextModifierRange::computeRange(void)

{
  (*(code *)PTR_computeRange_00680d40)();
  return;
}


// ===== 0064ace0  rive::TextModifierRange::computeCoverage =====

void __thiscall rive::TextModifierRange::computeCoverage(void)

{
  (*(code *)PTR_computeCoverage_00680d48)();
  return;
}


// ===== 0064acf0  rive::RangeMapper::fromCharacters =====

void rive::RangeMapper::fromCharacters(void)

{
  (*(code *)PTR_fromCharacters_00680d50)();
  return;
}


// ===== 0064ad00  rive::RangeMapper::fromWords =====

void rive::RangeMapper::fromWords(void)

{
  (*(code *)PTR_fromWords_00680d58)();
  return;
}


// ===== 0064ad10  rive::RangeMapper::fromLines =====

void rive::RangeMapper::fromLines(void)

{
  (*(code *)PTR_fromLines_00680d60)();
  return;
}


// ===== 0064ad20  rive::TextModifierRange::coverageAt =====

void __thiscall rive::TextModifierRange::coverageAt(TextModifierRange *this,float param_1)

{
  (*(code *)PTR_coverageAt_00680d68)();
  return;
}


// ===== 0064ad30  rive::RangeMapper::addRange =====

void __thiscall
rive::RangeMapper::addRange(RangeMapper *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  (*(code *)PTR_addRange_00680d70)(this,param_1,param_2,param_3,param_4);
  return;
}


// ===== 0064ad40  rive::TextValueRun::offset =====

void __thiscall rive::TextValueRun::offset(TextValueRun *this)

{
  (*(code *)PTR_offset_00680d78)();
  return;
}


// ===== 0064ad50  rive::TextSelectionPath::addRoundedPath =====

void __thiscall
rive::TextSelectionPath::addRoundedPath
          (TextSelectionPath *this,Contour *param_1,float param_2,RawPath *param_3)

{
  (*(code *)PTR_addRoundedPath_00680d80)();
  return;
}


// ===== 0064ad60  rive::TextStyle::addVariation =====

void __thiscall rive::TextStyle::addVariation(TextStyle *this,TextStyleAxis *param_1)

{
  (*(code *)PTR_addVariation_00680d88)();
  return;
}


// ===== 0064ad70  rive::TextStyle::addFeature =====

void __thiscall rive::TextStyle::addFeature(TextStyle *this,TextStyleFeature *param_1)

{
  (*(code *)PTR_addFeature_00680d90)();
  return;
}


// ===== 0064ad80  rive::TextStyle::updateVariableFont =====

void __thiscall rive::TextStyle::updateVariableFont(TextStyle *this)

{
  (*(code *)PTR_updateVariableFont_00680d98)();
  return;
}


// ===== 0064ad90  rive::TextValueRun::hitTestAABB =====

void __thiscall rive::TextValueRun::hitTestAABB(TextValueRun *this,Vec2D *param_1)

{
  (*(code *)PTR_hitTestAABB_00680da0)();
  return;
}


// ===== 0064ada0  rive::TextValueRun::hitTestHiFi =====

void __thiscall rive::TextValueRun::hitTestHiFi(TextValueRun *this,Vec2D *param_1,float param_2)

{
  (*(code *)PTR_hitTestHiFi_00680da8)();
  return;
}


// ===== 0064adb0  rive::DataEnum::value =====

void rive::DataEnum::value(void)

{
  (*(code *)PTR_value_00680db0)();
  return;
}


// ===== 0064adc0  rive::DataEnum::value =====

void __thiscall rive::DataEnum::value(void)

{
  (*(code *)PTR_value_00680db8)();
  return;
}


// ===== 0064add0  rive::DataEnum::value =====

void __thiscall rive::DataEnum::value(void)

{
  (*(code *)PTR_value_00680dc0)();
  return;
}


// ===== 0064ade0  rive::DataEnum::~DataEnum =====

void __thiscall rive::DataEnum::~DataEnum(DataEnum *this)

{
  (*(code *)PTR__DataEnum_00680dc8)();
  return;
}


// ===== 0064adf0  rive::CoreObjectListener::~CoreObjectListener =====

void __thiscall rive::CoreObjectListener::~CoreObjectListener(CoreObjectListener *this)

{
  (*(code *)PTR__CoreObjectListener_00680dd0)();
  return;
}


// ===== 0064ae00  rive::ViewModelInstanceArtboard::asset =====

void __thiscall rive::ViewModelInstanceArtboard::asset(void)

{
  (*(code *)PTR_asset_00680dd8)();
  return;
}


// ===== 0064ae10  rive::ViewModelInstanceRuntime::ViewModelInstanceRuntime =====

void __thiscall rive::ViewModelInstanceRuntime::ViewModelInstanceRuntime(void)

{
  (*(code *)PTR_ViewModelInstanceRuntime_00680de0)();
  return;
}


// ===== 0064ae20  rive::ViewModelInstanceRuntime::viewModelInstanceAtPath =====

void __thiscall
rive::ViewModelInstanceRuntime::viewModelInstanceAtPath
          (ViewModelInstanceRuntime *this,basic_string *param_1)

{
  (*(code *)PTR_viewModelInstanceAtPath_00680de8)();
  return;
}


// ===== 0064ae30  rive::ViewModelInstanceRuntime::instanceRuntime =====

void rive::ViewModelInstanceRuntime::instanceRuntime(basic_string *param_1)

{
  (*(code *)PTR_instanceRuntime_00680df0)();
  return;
}


// ===== 0064ae40  rive::ViewModelInstanceRuntime::getPropertyNameFromPath =====

void rive::ViewModelInstanceRuntime::getPropertyNameFromPath(basic_string *param_1)

{
  (*(code *)PTR_getPropertyNameFromPath_00680df8)();
  return;
}


// ===== 0064ae50  rive::ViewModelInstanceRuntime::viewModelInstanceFromFullPath =====

void __thiscall
rive::ViewModelInstanceRuntime::viewModelInstanceFromFullPath
          (ViewModelInstanceRuntime *this,basic_string *param_1)

{
  (*(code *)PTR_viewModelInstanceFromFullPath_00680e00)();
  return;
}


// ===== 0064ae60  rive::ViewModelInstanceRuntime::replaceViewModelByName =====

void __thiscall
rive::ViewModelInstanceRuntime::replaceViewModelByName
          (ViewModelInstanceRuntime *this,basic_string *param_1,ViewModelInstanceRuntime *param_2)

{
  (*(code *)PTR_replaceViewModelByName_00680e08)();
  return;
}


// ===== 0064ae70  rive::ViewModelInstance::replaceViewModelByName =====

void __thiscall rive::ViewModelInstance::replaceViewModelByName(void)

{
  (*(code *)PTR_replaceViewModelByName_00680e10)();
  return;
}


// ===== 0064ae80  rive::ViewModelRuntime::buildPropertiesData =====

void __thiscall rive::ViewModelRuntime::buildPropertiesData(ViewModelRuntime *this,vector *param_1)

{
  (*(code *)PTR_buildPropertiesData_00680e18)();
  return;
}


// ===== 0064ae90  rive::ViewModel::~ViewModel =====

void __thiscall rive::ViewModel::~ViewModel(ViewModel *this)

{
  (*(code *)PTR__ViewModel_00680e20)();
  return;
}


// ===== 0064aea0  rive::ViewModelInstance::rebindDependents =====

void __thiscall rive::ViewModelInstance::rebindDependents(ViewModelInstance *this)

{
  (*(code *)PTR_rebindDependents_00680e28)();
  return;
}


// ===== 0064aeb0  rive::ViewModelInstance::rebindProperties =====

void __thiscall rive::ViewModelInstance::rebindProperties(ViewModelInstance *this)

{
  (*(code *)PTR_rebindProperties_00680e30)();
  return;
}


// ===== 0064aec0  rive::ViewModelInstance::propertyFromPath =====

void __thiscall
rive::ViewModelInstance::propertyFromPath(ViewModelInstance *this,vector *param_1,ulong param_2)

{
  (*(code *)PTR_propertyFromPath_00680e38)();
  return;
}


// ===== 0064aed0  rive::ViewModelInstance::~ViewModelInstance =====

void __thiscall rive::ViewModelInstance::~ViewModelInstance(ViewModelInstance *this)

{
  (*(code *)PTR__ViewModelInstance_00680e40)();
  return;
}


// ===== 0064aee0  rive::ViewModelInstanceValue::onValueChanged =====

void __thiscall rive::ViewModelInstanceValue::onValueChanged(ViewModelInstanceValue *this)

{
  (*(code *)PTR_onValueChanged_00680e48)();
  return;
}


// ===== 0064aef0  rive::ViewModelInstanceValue::import =====

void __thiscall
rive::ViewModelInstanceValue::import(ViewModelInstanceValue *this,ImportStack *param_1)

{
  (*(code *)PTR_import_00680e50)();
  return;
}


// ===== 0064af00  rive::ViewModelPropertyEnum::valueIndex =====

void __thiscall rive::ViewModelPropertyEnum::valueIndex(void)

{
  (*(code *)PTR_valueIndex_00680e58)();
  return;
}


// ===== 0064af10  rive::ViewModelInstanceList::updateList =====

void __thiscall rive::ViewModelInstanceList::updateList(ViewModelInstanceList *this,vector *param_1)

{
  (*(code *)PTR_updateList_00680e60)();
  return;
}


// ===== 0064af20  rive::ViewModelInstanceList::~ViewModelInstanceList =====

void __thiscall rive::ViewModelInstanceList::~ViewModelInstanceList(ViewModelInstanceList *this)

{
  (*(code *)PTR__ViewModelInstanceList_00680e68)();
  return;
}


// ===== 0064af30  rive::ViewModelInstanceViewModel::updateViewModel =====

void __thiscall
rive::ViewModelInstanceViewModel::updateViewModel
          (ViewModelInstanceViewModel *this,ViewModelInstance *param_1)

{
  (*(code *)PTR_updateViewModel_00680e70)();
  return;
}


// ===== 0064af40  hydro_hash_final =====

void hydro_hash_final(void)

{
  (*(code *)PTR_hydro_hash_final_00680e78)();
  return;
}


// ===== 0064af50  hydro_sign_final_verify =====

void hydro_sign_final_verify(void)

{
  (*(code *)PTR_hydro_sign_final_verify_00680e80)();
  return;
}


// ===== 0064af60  <EXTERNAL>::strchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00680e88)(__s,__c);
  return pcVar1;
}


// ===== 0064af70  rive_hb_aat_layout_has_substitution =====

void rive_hb_aat_layout_has_substitution(void)

{
  (*(code *)PTR_rive_hb_aat_layout_has_substitution_00680e90)();
  return;
}


// ===== 0064af80  rive_hb_aat_layout_has_tracking =====

void rive_hb_aat_layout_has_tracking(void)

{
  (*(code *)PTR_rive_hb_aat_layout_has_tracking_00680e98)();
  return;
}


// ===== 0064af90  rive_AAT::FeatureName::get_feature_type =====

void __thiscall rive_AAT::FeatureName::get_feature_type(FeatureName *this)

{
  (*(code *)PTR_get_feature_type_00680ea0)();
  return;
}


// ===== 0064afa0  rive_hb_blob_create_sub_blob =====

void rive_hb_blob_create_sub_blob(void)

{
  (*(code *)PTR_rive_hb_blob_create_sub_blob_00680ea8)();
  return;
}


// ===== 0064afb0  rive_hb_segment_properties_overlay =====

void rive_hb_segment_properties_overlay(void)

{
  (*(code *)PTR_rive_hb_segment_properties_overlay_00680eb0)();
  return;
}


// ===== 0064afc0  rive_hb_buffer_set_length =====

void rive_hb_buffer_set_length(void)

{
  (*(code *)PTR_rive_hb_buffer_set_length_00680eb8)();
  return;
}


// ===== 0064afd0  rive_hb_buffer_append =====

void rive_hb_buffer_append(void)

{
  (*(code *)PTR_rive_hb_buffer_append_00680ec0)();
  return;
}


// ===== 0064afe0  rive_hb_unicode_funcs_destroy =====

void rive_hb_unicode_funcs_destroy(void)

{
  (*(code *)PTR_rive_hb_unicode_funcs_destroy_00680ec8)();
  return;
}


// ===== 0064aff0  rive_hb_script_get_horizontal_direction =====

void rive_hb_script_get_horizontal_direction(void)

{
  (*(code *)PTR_rive_hb_script_get_horizontal_direction_00680ed0)();
  return;
}


// ===== 0064b000  rive_hb_tag_from_string =====

void rive_hb_tag_from_string(void)

{
  (*(code *)PTR_rive_hb_tag_from_string_00680ed8)();
  return;
}


// ===== 0064b010  rive_hb_language_from_string =====

void rive_hb_language_from_string(void)

{
  (*(code *)PTR_rive_hb_language_from_string_00680ee0)();
  return;
}


// ===== 0064b020  rive_hb_language_matches =====

void rive_hb_language_matches(void)

{
  (*(code *)PTR_rive_hb_language_matches_00680ee8)();
  return;
}


// ===== 0064b030  rive_hb_script_from_iso15924_tag =====

void rive_hb_script_from_iso15924_tag(void)

{
  (*(code *)PTR_rive_hb_script_from_iso15924_tag_00680ef0)();
  return;
}


// ===== 0064b040  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00680ef8)((int)__s1);
  return iVar1;
}


// ===== 0064b050  <EXTERNAL>::calloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00680f00)();
  return pvVar1;
}


// ===== 0064b060  rive_hb_face_builder_create =====

void rive_hb_face_builder_create(void)

{
  (*(code *)PTR_rive_hb_face_builder_create_00680f08)();
  return;
}


// ===== 0064b070  rive_hb_face_builder_add_table =====

void rive_hb_face_builder_add_table(void)

{
  (*(code *)PTR_rive_hb_face_builder_add_table_00680f10)();
  return;
}


// ===== 0064b080  rive_hb_face_count =====

void rive_hb_face_count(void)

{
  (*(code *)PTR_rive_hb_face_count_00680f18)();
  return;
}


// ===== 0064b090  rive_hb_face_create_for_tables =====

void rive_hb_face_create_for_tables(void)

{
  (*(code *)PTR_rive_hb_face_create_for_tables_00680f20)();
  return;
}


