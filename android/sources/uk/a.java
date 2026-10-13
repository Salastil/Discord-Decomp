package uk;

import android.graphics.PointF;
import android.opengl.GLES20;
import e4.l;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.FloatBuffer;

/* loaded from: classes3.dex */
public final class a {

    /* renamed from: d, reason: collision with root package name */
    public final FloatBuffer f18949d;

    /* renamed from: e, reason: collision with root package name */
    public int f18950e;

    /* renamed from: f, reason: collision with root package name */
    public int f18951f;

    /* renamed from: g, reason: collision with root package name */
    public int f18952g;

    /* renamed from: h, reason: collision with root package name */
    public int f18953h;

    /* renamed from: i, reason: collision with root package name */
    public int f18954i;
    public int j;
    public int k;

    /* renamed from: l, reason: collision with root package name */
    public int f18955l;

    /* renamed from: b, reason: collision with root package name */
    public float[] f18947b = new float[16];

    /* renamed from: c, reason: collision with root package name */
    public float[] f18948c = new float[16];
    public final l a = new l(23, new PointF(1.0f, 1.0f), new PointF(0.5f, 0.5f));

    public a() {
        FloatBuffer asFloatBuffer = ByteBuffer.allocateDirect(80).order(ByteOrder.nativeOrder()).asFloatBuffer();
        this.f18949d = asFloatBuffer;
        asFloatBuffer.put(new float[]{-1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f, -1.0f, 0.0f, 1.0f, 0.0f, -1.0f, 1.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 1.0f, 1.0f}).position(0);
    }

    public final void a() {
        GLES20.glDeleteProgram(this.f18952g);
        GLES20.glDeleteShader(this.f18950e);
        GLES20.glDeleteShader(this.f18951f);
        GLES20.glDeleteBuffers(1, new int[]{this.f18955l}, 0);
        this.f18952g = 0;
        this.f18950e = 0;
        this.f18951f = 0;
        this.f18955l = 0;
    }
}
