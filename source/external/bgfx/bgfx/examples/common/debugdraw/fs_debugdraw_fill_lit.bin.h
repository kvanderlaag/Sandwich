static const uint8_t fs_debugdraw_fill_lit_glsl[485] =
{
	0x46, 0x53, 0x48, 0x09, 0x0f, 0xc8, 0x56, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x75, // FSH...V_.......u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x02, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xc1, // _params.........
	0x01, 0x00, 0x00, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x77, 0x6f, 0x72, // ...in vec3 v_wor
	0x6c, 0x64, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, // ld;.uniform vec4
	0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, 0x34, 0x5d, 0x3b, 0x0a, 0x76, 0x6f, //  u_params[4];.vo
	0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x76, // id main ().{.  v
	0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, // ec3 tmpvar_1;.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x64, 0x46, 0x64, 0x78, 0x28, // tmpvar_1 = dFdx(
	0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, // v_world);.  vec3
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, //  tmpvar_2;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x64, 0x46, 0x64, 0x79, 0x28, 0x76, 0x5f, 0x77, // var_2 = dFdy(v_w
	0x6f, 0x72, 0x6c, 0x64, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, // orld);.  vec4 tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // pvar_3;.  tmpvar
	0x5f, 0x33, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x6d, 0x69, 0x78, 0x20, 0x28, 0x75, // _3.xyz = (mix (u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, 0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x2c, 0x20, // _params[2].xyz, 
	0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, 0x31, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x2c, // u_params[1].xyz,
	0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6e, 0x6f, 0x72, //  (.    (dot (nor
	0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, // malize((.      (
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x79, 0x7a, 0x78, 0x20, 0x2a, 0x20, 0x74, // tmpvar_1.yzx * t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x7a, 0x78, 0x79, 0x29, 0x0a, 0x20, 0x20, 0x20, // mpvar_2.zxy).   
	0x20, 0x20, 0x2d, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, //   - .      (tmpv
	0x61, 0x72, 0x5f, 0x31, 0x2e, 0x7a, 0x78, 0x79, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // ar_1.zxy * tmpva
	0x72, 0x5f, 0x32, 0x2e, 0x79, 0x7a, 0x78, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x29, 0x29, 0x2c, // r_2.yzx).    )),
	0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, 0x30, 0x5d, 0x2e, 0x78, 0x79, 0x7a, //  u_params[0].xyz
	0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x35, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x30, 0x2e, // ) * 0.5).   + 0.
	0x35, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, 0x33, // 5)) * u_params[3
	0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ].xyz);.  tmpvar
	0x5f, 0x33, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, // _3.w = u_params[
	0x33, 0x5d, 0x2e, 0x77, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, // 3].w;.  gl_FragC
	0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, // olor = tmpvar_3;
	0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                                   // .}...
};
static const uint8_t fs_debugdraw_fill_lit_spv[1595] =
{
	0x46, 0x53, 0x48, 0x09, 0x0f, 0xc8, 0x56, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x75, // FSH...V_.......u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x12, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x14, // _params.........
	0x06, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x00, 0x08, 0x00, 0xe4, // .....#..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, // ................
	0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, // .......GLSL.std.
	0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // 450.............
	0x00, 0x00, 0x00, 0x0f, 0x00, 0x09, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, // ...............m
	0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x81, // ain....z...~....
	0x00, 0x00, 0x00, 0x8e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, // ................
	0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, // ................
	0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, // .......main.....
	0x00, 0x06, 0x00, 0x49, 0x00, 0x00, 0x00, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x42, 0x6c, // ...I...UniformBl
	0x6f, 0x63, 0x6b, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x49, 0x00, 0x00, 0x00, 0x00, // ock........I....
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x00, 0x00, 0x00, 0x00, 0x05, // ...u_params.....
	0x00, 0x03, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x7a, // ...K...........z
	0x00, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x00, // ...gl_FragCoord.
	0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x76, 0x69, 0x65, // .......~...v_vie
	0x77, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x81, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x77, 0x6f, 0x72, // w..........v_wor
	0x6c, 0x64, 0x00, 0x05, 0x00, 0x06, 0x00, 0x8e, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, // ld.........bgfx_
	0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x48, // FragData0..G...H
	0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x49, // ...........H...I
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, // .......#.......G
	0x00, 0x03, 0x00, 0x49, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4b, // ...I.......G...K
	0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4b, // ...".......G...K
	0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x7a, // ...!...0...G...z
	0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x7e, // ...........G...~
	0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x81, // ...........G....
	0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x8e, // ...........G....
	0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, // ................
	0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x16, // ...!............
	0x00, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x07, // ....... ........
	0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x14, // ................
	0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x46, // ...............F
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x46, // ... .......+...F
	0x00, 0x00, 0x00, 0x47, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0x48, // ...G...........H
	0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x47, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0x49, // .......G.......I
	0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x02, // ...H... ...J....
	0x00, 0x00, 0x00, 0x49, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x4b, // ...I...;...J...K
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x20, // ...........L... 
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x4d, // .......+...L...M
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x02, // ....... ...N....
	0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x54, // .......+...L...T
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x55, // .......+...L...U
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x57, // .......+.......W
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x2b, 0x00, 0x04, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x65, // ......?+...L...e
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x46, 0x00, 0x00, 0x00, 0x70, // .......+...F...p
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x71, 0x00, 0x00, 0x00, 0x02, // ....... ...q....
	0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x79, 0x00, 0x00, 0x00, 0x01, // ....... ...y....
	0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x79, 0x00, 0x00, 0x00, 0x7a, // .......;...y...z
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x01, // ....... ...}....
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x7e, // .......;...}...~
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x81, // .......;...}....
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x8d, 0x00, 0x00, 0x00, 0x03, // ....... ........
	0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x8d, 0x00, 0x00, 0x00, 0x8e, // .......;........
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, // .......6........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, // ................
	0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x81, // ...=............
	0x00, 0x00, 0x00, 0xcf, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x82, // ................
	0x00, 0x00, 0x00, 0x7f, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0xb2, 0x00, 0x00, 0x00, 0x82, // ................
	0x00, 0x00, 0x00, 0xd0, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x00, 0xb2, // ................
	0x00, 0x00, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0x01, // ................
	0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x00, 0x0c, // ...D............
	0x00, 0x06, 0x00, 0x07, 0x00, 0x00, 0x00, 0xb5, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x45, // ...............E
	0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x4e, 0x00, 0x00, 0x00, 0xba, // .......A...N....
	0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x3d, // ...K...M...M...=
	0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0xba, 0x00, 0x00, 0x00, 0x4f, // ...............O
	0x00, 0x08, 0x00, 0x07, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0xbb, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x94, // ................
	0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0x00, 0xb5, 0x00, 0x00, 0x00, 0xbc, // ................
	0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0xbf, 0x00, 0x00, 0x00, 0xbd, // ................
	0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x81, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0xc0, // ...W............
	0x00, 0x00, 0x00, 0xbf, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x50, 0x00, 0x06, 0x00, 0x07, // .......W...P....
	0x00, 0x00, 0x00, 0xc1, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc0, // ................
	0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x4e, 0x00, 0x00, 0x00, 0xc2, 0x00, 0x00, 0x00, 0x4b, // ...A...N.......K
	0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x14, // ...M...T...=....
	0x00, 0x00, 0x00, 0xc3, 0x00, 0x00, 0x00, 0xc2, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x08, 0x00, 0x07, // ...........O....
	0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00, 0xc3, 0x00, 0x00, 0x00, 0xc3, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x4e, // ...........A...N
	0x00, 0x00, 0x00, 0xc5, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x55, // .......K...M...U
	0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0xc6, 0x00, 0x00, 0x00, 0xc5, // ...=............
	0x00, 0x00, 0x00, 0x4f, 0x00, 0x08, 0x00, 0x07, 0x00, 0x00, 0x00, 0xc7, 0x00, 0x00, 0x00, 0xc6, // ...O............
	0x00, 0x00, 0x00, 0xc6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x07, 0x00, 0x00, 0x00, 0xe3, 0x00, 0x00, 0x00, 0x01, // ................
	0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00, 0xc7, 0x00, 0x00, 0x00, 0xc1, // ................
	0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x4e, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00, 0x4b, // ...A...N.......K
	0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x14, // ...M...e...=....
	0x00, 0x00, 0x00, 0xca, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x08, 0x00, 0x07, // ...........O....
	0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0xca, 0x00, 0x00, 0x00, 0xca, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x07, // ................
	0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0xe3, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0x41, // ...............A
	0x00, 0x07, 0x00, 0x71, 0x00, 0x00, 0x00, 0xd1, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x4d, // ...q.......K...M
	0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, // ...e...p...=....
	0x00, 0x00, 0x00, 0xd2, 0x00, 0x00, 0x00, 0xd1, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, // ...........Q....
	0x00, 0x00, 0x00, 0xd3, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, // ...............Q
	0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0x01, // ................
	0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0xd5, 0x00, 0x00, 0x00, 0xcc, // ...Q............
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x14, 0x00, 0x00, 0x00, 0xd6, // .......P........
	0x00, 0x00, 0x00, 0xd3, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0xd5, 0x00, 0x00, 0x00, 0xd2, // ................
	0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x8e, 0x00, 0x00, 0x00, 0xd6, 0x00, 0x00, 0x00, 0xfd, // ...>............
	0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x00, 0x40, 0x00,                               // ...8.....@.
};
static const uint8_t fs_debugdraw_fill_lit_dx9[408] =
{
	0x46, 0x53, 0x48, 0x09, 0x0f, 0xc8, 0x56, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x75, // FSH...V_.......u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x12, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x74, // _params........t
	0x01, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0xff, 0x20, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, // ......... .CTAB.
	0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, // ...S............
	0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x02, // .......L...0....
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, // .......<.......u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x00, 0xab, 0xab, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, // _params.........
	0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, // ...........ps_3_
	0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, // 0.Microsoft (R) 
	0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, // HLSL Shader Comp
	0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, 0x04, // iler 10.1..Q....
	0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......?.........
	0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x01, 0x80, 0x00, 0x00, 0x07, 0x90, 0x01, // ................
	0x00, 0x00, 0x02, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xc9, 0x91, 0x5c, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x5b, 0x00, 0x00, 0x02, 0x01, 0x00, 0x07, 0x80, 0x00, // .......[........
	0x00, 0xd2, 0x90, 0x05, 0x00, 0x00, 0x03, 0x02, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x01, // ................
	0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x80, 0x01, 0x00, 0xd2, 0x80, 0x00, // ................
	0x00, 0xc9, 0x80, 0x02, 0x00, 0xe4, 0x81, 0x24, 0x00, 0x00, 0x02, 0x01, 0x00, 0x07, 0x80, 0x00, // .......$........
	0x00, 0xe4, 0x80, 0x08, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x00, // ................
	0x00, 0xe4, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x04, // ................
	0x00, 0x00, 0xa0, 0x04, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x01, 0x00, 0x07, 0x80, 0x02, // ................
	0x00, 0xe4, 0xa0, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0e, 0x80, 0x01, 0x00, 0x90, 0x81, 0x01, // ................
	0x00, 0x90, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, // ................
	0x00, 0xf9, 0x80, 0x02, 0x00, 0xe4, 0xa0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x08, 0x07, 0x80, 0x00, // ................
	0x00, 0xe4, 0x80, 0x03, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x08, 0x80, 0x03, // ................
	0x00, 0xff, 0xa0, 0xff, 0xff, 0x00, 0x00, 0x00,                                                 // ........
};
static const uint8_t fs_debugdraw_fill_lit_dx11[727] =
{
	0x46, 0x53, 0x48, 0x09, 0x0f, 0xc8, 0x56, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x75, // FSH...V_.......u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x12, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xb0, // _params.........
	0x02, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x59, 0x1c, 0xf9, 0xc6, 0x41, 0xb7, 0xae, 0xfd, 0xa5, // ...DXBCY...A....
	0xa5, 0x0c, 0x28, 0x25, 0x0d, 0x24, 0x29, 0x01, 0x00, 0x00, 0x00, 0xb0, 0x02, 0x00, 0x00, 0x03, // ..(%.$).........
	0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x00, 0x49, // ...,...........I
	0x53, 0x47, 0x4e, 0x68, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, // SGNh...........P
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x5c, // ................
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, // .......SV_POSITI
	0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0xab, 0x4f, // ON.TEXCOORD....O
	0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, // SGN,........... 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, // .......SV_TARGET
	0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0xd8, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x76, // ...SHDR....@...v
	0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, // ...Y...F. ......
	0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, // ...b...r.......e
	0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x03, // .... ......h....
	0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, // ...6...r........
	0x14, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x05, 0x72, // ...A...........r
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, // .......F........
	0x00, 0x00, 0x05, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x26, 0x19, 0x10, 0x00, 0x02, // ...r.......&....
	0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x72, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, // ...8...r.......F
	0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, // .......F.......2
	0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x09, 0x10, 0x00, 0x01, // ...r.......&....
	0x00, 0x00, 0x00, 0x96, 0x04, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x80, 0x41, // ...........F...A
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x07, 0x82, 0x00, 0x10, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, // ...F.......F....
	0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x05, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, // ...D...........:
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x72, 0x00, 0x10, 0x00, 0x00, // .......8...r....
	0x00, 0x00, 0x00, 0xf6, 0x0f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, // ...........F....
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x08, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, // ...............F
	0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .......F. ......
	0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x09, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, // ...2............
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x01, // ........@.....?.
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x0a, 0xe2, 0x00, 0x10, 0x00, 0x00, // @.....?.........
	0x00, 0x00, 0x00, 0x06, 0x89, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, // ..... ..........
	0x89, 0x20, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x32, // . .A...........2
	0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, // ...r............
	0x00, 0x00, 0x00, 0x96, 0x07, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, // ...........F. ..
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0x72, 0x20, 0x10, 0x00, 0x00, // .......8...r ...
	0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, // ...F.......F. ..
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0x82, 0x20, 0x10, 0x00, 0x00, // .......6.... ...
	0x00, 0x00, 0x00, 0x3a, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3e, // ...:. .........>
	0x00, 0x00, 0x01, 0x00, 0x00, 0x40, 0x00,                                                       // .....@.
};
static const uint8_t fs_debugdraw_fill_lit_mtl[688] =
{
	0x46, 0x53, 0x48, 0x09, 0x0f, 0xc8, 0x56, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x75, // FSH...V_.......u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x12, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x89, // _params.........
	0x02, 0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, // ...#include <met
	0x61, 0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, // al_stdlib>.#incl
	0x75, 0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, 0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, // ude <simd/simd.h
	0x3e, 0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, // >..using namespa
	0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, // ce metal;..struc
	0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, // t _Global.{.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, // float4 u_params[
	0x34, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, // 4];.};..struct x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x0a, 0x7b, // latMtlMain_out.{
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, // .    float4 bgfx
	0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x5b, 0x5b, 0x63, 0x6f, 0x6c, // _FragData0 [[col
	0x6f, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, // or(0)]];.};..str
	0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, // uct xlatMtlMain_
	0x69, 0x6e, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, // in.{.    float3 
	0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, // v_world [[user(l
	0x6f, 0x63, 0x6e, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x66, 0x72, 0x61, // ocn1)]];.};..fra
	0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, // gment xlatMtlMai
	0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, // n_out xlatMtlMai
	0x6e, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, // n(xlatMtlMain_in
	0x20, 0x69, 0x6e, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, //  in [[stage_in]]
	0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, // , constant _Glob
	0x61, 0x6c, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, // al& _mtl_u [[buf
	0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, // fer(0)]]).{.    
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, // xlatMtlMain_out 
	0x6f, 0x75, 0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, // out = {};.    ou
	0x74, 0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, // t.bgfx_FragData0
	0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x6d, 0x69, 0x78, 0x28, 0x5f, 0x6d, //  = float4(mix(_m
	0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, 0x32, 0x5d, // tl_u.u_params[2]
	0x2e, 0x78, 0x79, 0x7a, 0x2c, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, // .xyz, _mtl_u.u_p
	0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, 0x31, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x2c, 0x20, 0x66, 0x6c, // arams[1].xyz, fl
	0x6f, 0x61, 0x74, 0x33, 0x28, 0x28, 0x64, 0x6f, 0x74, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // oat3((dot(normal
	0x69, 0x7a, 0x65, 0x28, 0x63, 0x72, 0x6f, 0x73, 0x73, 0x28, 0x64, 0x66, 0x64, 0x78, 0x28, 0x69, // ize(cross(dfdx(i
	0x6e, 0x2e, 0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x29, 0x2c, 0x20, 0x64, 0x66, 0x64, 0x79, // n.v_world), dfdy
	0x28, 0x2d, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x29, 0x29, 0x29, 0x2c, // (-in.v_world))),
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, //  _mtl_u.u_params
	0x5b, 0x30, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x35, 0x29, 0x20, // [0].xyz) * 0.5) 
	0x2b, 0x20, 0x30, 0x2e, 0x35, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, // + 0.5)) * _mtl_u
	0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, 0x33, 0x5d, 0x2e, 0x78, 0x79, 0x7a, // .u_params[3].xyz
	0x2c, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, // , _mtl_u.u_param
	0x73, 0x5b, 0x33, 0x5d, 0x2e, 0x77, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, // s[3].w);.    ret
	0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x00, 0x40, 0x00, // urn out;.}....@.
};
extern const uint8_t* fs_debugdraw_fill_lit_pssl;
extern const uint32_t fs_debugdraw_fill_lit_pssl_size;