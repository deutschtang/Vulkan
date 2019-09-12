/*
 *  examples.h
 *
 *  Copyright (c) 2016-2017 The Brenwill Workshop Ltd.
 *  This code is licensed under the MIT license (MIT) (http://opensource.org/licenses/MIT)
 *
 *
 * Loads the appropriate example code, as indicated by the appropriate compiler build setting below.
 *
 * To select an example to run, define one (and only one) of the macros below, either by
 * adding a #define XXX statement at the top of this file, or more flexibily, by adding the
 * macro value to the Preprocessor Macros (aka GCC_PREPROCESSOR_DEFINITIONS) compiler setting.
 *
 * To add a compiler setting, select the project in the Xcode Project Navigator panel,
 * select the Build Settings panel, and add the value to the Preprocessor Macros
 * (aka GCC_PREPROCESSOR_DEFINITIONS) entry.
 *
 * For example, to run the pipelines example, you would add the MVK_pipelines define macro
 * to the Preprocessor Macros (aka GCC_PREPROCESSOR_DEFINITIONS) entry of the Xcode project,
 * overwriting any otheor value there.
 *
 * If you choose to add a #define statement to this file, be sure to clear the existing macro
 * from the Preprocessor Macros (aka GCC_PREPROCESSOR_DEFINITIONS) compiler setting in Xcode.
 */


// In the list below, the comments indicate entries that,
// under certain conditions, that may not run as expected.

#define MVK_triangle

// BASICS
#ifdef MVK_triangle
#   include "../examples/triangle/triangle.cpp"
#endif

#ifdef MVK_pipelines
#   include "../examples/pipelines/pipelines.cpp"
#endif

#ifdef MVK_descriptorsets
#   include "../examples/descriptorsets/descriptorsets.cpp"
#endif

#ifdef MVK_dynamicuniformbuffer
#   include "../examples/dynamicuniformbuffer/dynamicuniformbuffer.cpp"
#endif

// Does not run. Metal does not support passing arrays between shader stages.
#ifdef MVK_pushconstants
#   include "../examples/pushconstants/pushconstants.cpp"
#endif

#ifdef MVK_specializationconstants
#   include "../examples/specializationconstants/specializationconstants.cpp"
#endif

#ifdef MVK_texture
#   include "../examples/texture/texture.cpp"
#endif

// Does not run. Metal does not support passing matrices between shader stages.
#ifdef MVK_texturecubemap
#   include "../examples/texturecubemap/texturecubemap.cpp"
#endif

// Runs in Release mode. Does not run in Debug mode, as Metal validation will
// assert that UBO buffer length is too short for UBO size declared in shader.
#ifdef MVK_texturearray
#   include "../examples/texturearray/texturearray.cpp"
#endif

#ifdef MVK_texture3d
#   include "../examples/texture3d/texture3d.cpp"
#endif

#ifdef MVK_mesh
#   include "../examples/mesh/mesh.cpp"
#endif

#ifdef MVK_inputattachments
#   include "../examples/inputattachments/inputattachments.cpp"
#endif

#ifdef MVK_subpasses
#   include "../examples/subpasses/subpasses.cpp"
#endif

#ifdef MVK_offscreen
#   include "../examples/offscreen/offscreen.cpp"
#endif

#ifdef MVK_particlefire
#   include "../examples/particlefire/particlefire.cpp"
#endif

#ifdef MVK_stencilbuffer
#   include "../examples/stencilbuffer/stencilbuffer.cpp"
#endif

// ADVANCED

#ifdef MVK_scenerendering
#   include "../examples/scenerendering/scenerendering.cpp"
#endif

#ifdef MVK_multisampling
#   include "../examples/multisampling/multisampling.cpp"
#endif

// Does not run. Metal does not support passing matrices between shader stages.
#ifdef MVK_hdr
#   include "../examples/hdr/hdr.cpp"
#endif

#ifdef MVK_shadowmapping
#   include "../examples/shadowmapping/shadowmapping.cpp"
#endif

#ifdef MVK_shadowmappingcascade
#   include "../examples/shadowmappingcascade/shadowmappingcascade.cpp"
#endif

#ifdef MVK_shadowmappingomni
#   include "../examples/shadowmappingomni/shadowmappingomni.cpp"
#endif

// Does not run. Sampler arrays require Metal 2.
#ifdef MVK_texturemipmapgen
#   include "../examples/texturemipmapgen/texturemipmapgen.cpp"
#endif

#ifdef MVK_skeletalanimation
#   include "../examples/skeletalanimation/skeletalanimation.cpp"
#endif

#ifdef MVK_screenshot
#   include "../examples/screenshot/screenshot.cpp"
#endif

// Performance
#ifdef MVK_multithreading
#   include "../examples/multithreading/multithreading.cpp"
#endif

#ifdef MVK_instancing
#   include "../examples/instancing/instancing.cpp"
#endif

#ifdef MVK_indirectdraw
#   include "../examples/indirectdraw/indirectdraw.cpp"
#endif

#ifdef MVK_occlusionquery
#   include "../examples/occlusionquery/occlusionquery.cpp"
#endif

#ifdef MVK_pipelinestatistics
#   include "../examples/pipelinestatistics/pipelinestatistics.cpp"
#endif

// Physically Based Rendering
#ifdef MVK_pbrbasic
#include "../examples/pbrbasic/pbrbasic.cpp"
#endif

#ifdef MVK_pbribl
#include "../examples/pbribl/pbribl.cpp"
#endif

#ifdef MVK_pbrtexture
#include "../examples/pbrtexture/main.cpp"
#endif

// Deferred
// Runs in Release mode. Debug mode Metal validation will assert
// UBO buffer length is too short for UBO size declared in shader.
#ifdef MVK_deferred
#   include "../examples/deferred/deferred.cpp"
#endif

#ifdef MVK_deferredmultisampling
#   include "../examples/deferredmultisampling/deferredmultisampling.cpp"
#endif

// Does not run. Metal does not support geometry shaders.
#ifdef MVK_deferredshadows
#   include "../examples/deferredshadows/deferredshadows.cpp"
#endif

// Runs in Release mode, but does not display content.
// Metal does not support the use of specialization constants to set array lengths,
#ifdef MVK_ssao
#   include "../examples/ssao/ssao.cpp"
#endif

// COMPUTE - Currently unsupported by MoltenVK
#ifdef MVK_computeshader
#   include "../examples/computeshader/computeshader.cpp"
#endif

#ifdef MVK_computeparticles
#   include "../examples/computeparticles/computeparticles.cpp"
#endif

#ifdef MVK_computenbody
#   include "../examples/computenbody/computenbody.cpp"
#endif

#ifdef MVK_computeraytracing
#   include "../examples/computeraytracing/computeraytracing.cpp"
#endif

#ifdef MVK_computecloth
#   include "../examples/computecloth/computecloth.cpp"
#endif

#ifdef MVK_computecullandlod
#   include "../examples/computecullandlod/computecullandlod.cpp"
#endif

// GEOMETRY SHADER - Unsupported by Metal
#ifdef MVK_geometryshader
#   include "../examples/geometryshader/geometryshader.cpp"
#endif

#ifdef MVK_viewportarray
#   include "../examples/viewportarray/viewportarray.cpp"
#endif

// Tessellation Shader
#ifdef MVK_tessellation
#   include "../examples/tessellation/tessellation.cpp"
#endif

#ifdef MVK_terraintessellation
#   include "../examples/terraintessellation/terraintessellation.cpp"
#endif

// Headless
#ifdef MVK_renderheadless
#   include "../examples/renderheadless/renderheadless.cpp"
#endif

#ifdef MVK_computeheadless
#   include "../examples/computeheadless/computeheadless.cpp"
#endif

// User Interface
#ifdef MVK_textoverlay
#   include "../examples/textoverlay/textoverlay.cpp"
#endif

#ifdef MVK_distancefieldfonts
#   include "../examples/distancefieldfonts/distancefieldfonts.cpp"
#endif

#ifdef MVK_imgui
#   include "../examples/imgui/main.cpp"
#endif

// Effects
#ifdef MVK_radialblur
#   include "../examples/radialblur/radialblur.cpp"
#endif

#ifdef MVK_bloom
#   include "../examples/bloom/bloom.cpp"
#endif

#ifdef MVK_parallaxmapping
#   include "../examples/parallaxmapping/parallaxmapping.cpp"
#endif

#ifdef MVK_sphericalenvmapping
#   include "../examples/sphericalenvmapping/sphericalenvmapping.cpp"
#endif

// EXTENSIONS - Currently unsupported by MoltenVK
#ifdef MVK_conservativeraster
#   include "../examples/conservativeraster/conservativeraster.cpp"
#endif

#ifdef MVK_pushdescriptors
#   include "../examples/pushdescriptors/pushdescriptors.cpp"
#endif

#ifdef MVK_inlineuniformblocks
#   include "../examples/inlineuniformblocks/inlineuniformblocks.cpp"
#endif

#ifdef MVK_multiview
#   include "../examples/multiview/multiview.cpp"
#endif

#ifdef MVK_conditionalrender
#   include "../examples/conditionalrender/conditionalrender.cpp"
#endif

#ifdef MVK_debugmarker
#   include "../examples/debugmarker/debugmarker.cpp"
#endif

#ifdef MVK_negativeviewportheight
#   include "../examples/negativeviewportheight/negativeviewportheight.cpp"
#endif

#ifdef MVK_nv_ray_tracing_basic
#   include "../examples/nv_ray_tracing_basic/nv_ray_tracing_basic.cpp"
#endif

#ifdef MVK_nv_ray_tracing_shadows
#   include "../examples/nv_ray_tracing_shadows/nv_ray_tracing_shadows.cpp"
#endif

#ifdef MVK_nv_ray_tracing_reflections
#   include "../examples/nv_ray_tracing_reflections/nv_ray_tracing_reflections.cpp"
#endif

// Misc
#ifdef MVK_gears
#   include "../examples/gears/gears.cpp"
#endif

#ifdef MVK_vulkanscene
#   include "../examples/vulkanscene/vulkanscene.cpp"
#endif

