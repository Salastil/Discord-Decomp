package le;

import ad.d0;
import android.opengl.GLES20;
import android.opengl.GLSurfaceView;
import android.util.Log;
import java.nio.Buffer;
import java.nio.FloatBuffer;
import java.util.concurrent.atomic.AtomicReference;
import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

/* loaded from: classes3.dex */
public final class l implements GLSurfaceView.Renderer {
    public static final String[] E = {"y_tex", "u_tex", "v_tex"};
    public static final FloatBuffer F = ke.b.p(new float[]{-1.0f, 1.0f, -1.0f, -1.0f, 1.0f, 1.0f, 1.0f, -1.0f});

    /* renamed from: d, reason: collision with root package name */
    public final m f13912d;

    /* renamed from: e, reason: collision with root package name */
    public final int[] f13913e = new int[3];

    /* renamed from: i, reason: collision with root package name */
    public final int[] f13914i = new int[3];

    /* renamed from: v, reason: collision with root package name */
    public final int[] f13915v = new int[3];

    /* renamed from: w, reason: collision with root package name */
    public final int[] f13916w = new int[3];

    /* renamed from: x, reason: collision with root package name */
    public final AtomicReference f13917x = new AtomicReference();

    /* renamed from: y, reason: collision with root package name */
    public d0 f13918y;

    public l(m mVar) {
        this.f13912d = mVar;
        for (int i5 = 0; i5 < 3; i5++) {
            int[] iArr = this.f13915v;
            this.f13916w[i5] = -1;
            iArr[i5] = -1;
        }
    }

    public final void a() {
        int[] iArr = this.f13913e;
        try {
            GLES20.glGenTextures(3, iArr, 0);
            for (int i5 = 0; i5 < 3; i5++) {
                d0 d0Var = this.f13918y;
                GLES20.glUniform1i(GLES20.glGetUniformLocation(d0Var.f316d, E[i5]), i5);
                GLES20.glActiveTexture(33984 + i5);
                ke.b.d(3553, iArr[i5]);
            }
            ke.b.h();
        } catch (ke.h e9) {
            Log.e("VideoDecoderGLSV", "Failed to set up the textures", e9);
        }
    }

    @Override // android.opengl.GLSurfaceView.Renderer
    public final void onDrawFrame(GL10 gl10) {
        if (this.f13917x.getAndSet(null) != null) {
            throw new ClassCastException();
        }
    }

    @Override // android.opengl.GLSurfaceView.Renderer
    public final void onSurfaceChanged(GL10 gl10, int i5, int i6) {
        GLES20.glViewport(0, 0, i5, i6);
    }

    @Override // android.opengl.GLSurfaceView.Renderer
    public final void onSurfaceCreated(GL10 gl10, EGLConfig eGLConfig) {
        int[] iArr = this.f13914i;
        try {
            d0 d0Var = new d0("varying vec2 interp_tc_y;\nvarying vec2 interp_tc_u;\nvarying vec2 interp_tc_v;\nattribute vec4 in_pos;\nattribute vec2 in_tc_y;\nattribute vec2 in_tc_u;\nattribute vec2 in_tc_v;\nvoid main() {\n  gl_Position = in_pos;\n  interp_tc_y = in_tc_y;\n  interp_tc_u = in_tc_u;\n  interp_tc_v = in_tc_v;\n}\n", "precision mediump float;\nvarying vec2 interp_tc_y;\nvarying vec2 interp_tc_u;\nvarying vec2 interp_tc_v;\nuniform sampler2D y_tex;\nuniform sampler2D u_tex;\nuniform sampler2D v_tex;\nuniform mat3 mColorConversion;\nvoid main() {\n  vec3 yuv;\n  yuv.x = texture2D(y_tex, interp_tc_y).r - 0.0625;\n  yuv.y = texture2D(u_tex, interp_tc_u).r - 0.5;\n  yuv.z = texture2D(v_tex, interp_tc_v).r - 0.5;\n  gl_FragColor = vec4(mColorConversion * yuv, 1.0);\n}\n");
            this.f13918y = d0Var;
            GLES20.glVertexAttribPointer(d0Var.g("in_pos"), 2, 5126, false, 0, (Buffer) F);
            iArr[0] = this.f13918y.g("in_tc_y");
            iArr[1] = this.f13918y.g("in_tc_u");
            iArr[2] = this.f13918y.g("in_tc_v");
            GLES20.glGetUniformLocation(this.f13918y.f316d, "mColorConversion");
            ke.b.h();
            a();
            ke.b.h();
        } catch (ke.h e9) {
            Log.e("VideoDecoderGLSV", "Failed to set up the textures and program", e9);
        }
    }
}
