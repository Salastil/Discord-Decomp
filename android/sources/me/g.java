package me;

import ad.d0;
import android.opengl.GLES20;
import android.util.Log;
import com.google.android.gms.internal.play_billing.w1;

/* loaded from: classes3.dex */
public final class g {

    /* renamed from: i, reason: collision with root package name */
    public static final float[] f14456i = {1.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1.0f, 1.0f};
    public static final float[] j = {1.0f, 0.0f, 0.0f, 0.0f, -0.5f, 0.0f, 0.0f, 0.5f, 1.0f};
    public static final float[] k = {0.5f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1.0f, 1.0f};
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public w1 f14457b;

    /* renamed from: c, reason: collision with root package name */
    public d0 f14458c;

    /* renamed from: d, reason: collision with root package name */
    public int f14459d;

    /* renamed from: e, reason: collision with root package name */
    public int f14460e;

    /* renamed from: f, reason: collision with root package name */
    public int f14461f;

    /* renamed from: g, reason: collision with root package name */
    public int f14462g;

    /* renamed from: h, reason: collision with root package name */
    public int f14463h;

    public static boolean b(f fVar) {
        e eVar = fVar.a;
        e eVar2 = fVar.f14453b;
        w1[] w1VarArr = eVar.a;
        if (w1VarArr.length == 1 && w1VarArr[0].f5866e == 0) {
            w1[] w1VarArr2 = eVar2.a;
            if (w1VarArr2.length == 1 && w1VarArr2[0].f5866e == 0) {
                return true;
            }
        }
        return false;
    }

    public final void a() {
        try {
            d0 d0Var = new d0("uniform mat4 uMvpMatrix;\nuniform mat3 uTexMatrix;\nattribute vec4 aPosition;\nattribute vec2 aTexCoords;\nvarying vec2 vTexCoords;\n// Standard transformation.\nvoid main() {\n  gl_Position = uMvpMatrix * aPosition;\n  vTexCoords = (uTexMatrix * vec3(aTexCoords, 1)).xy;\n}\n", "// This is required since the texture data is GL_TEXTURE_EXTERNAL_OES.\n#extension GL_OES_EGL_image_external : require\nprecision mediump float;\n// Standard texture rendering shader.\nuniform samplerExternalOES uTexture;\nvarying vec2 vTexCoords;\nvoid main() {\n  gl_FragColor = texture2D(uTexture, vTexCoords);\n}\n");
            this.f14458c = d0Var;
            this.f14459d = GLES20.glGetUniformLocation(d0Var.f316d, "uMvpMatrix");
            this.f14460e = GLES20.glGetUniformLocation(this.f14458c.f316d, "uTexMatrix");
            this.f14461f = this.f14458c.g("aPosition");
            this.f14462g = this.f14458c.g("aTexCoords");
            this.f14463h = GLES20.glGetUniformLocation(this.f14458c.f316d, "uTexture");
        } catch (ke.h e9) {
            Log.e("ProjectionRenderer", "Failed to initialize the program", e9);
        }
    }
}
