package me;

import android.graphics.SurfaceTexture;
import android.media.MediaFormat;
import android.opengl.EGL14;
import android.opengl.GLES20;
import com.google.android.exoplayer2.Format;
import com.google.android.gms.internal.play_billing.w1;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.concurrent.atomic.AtomicBoolean;
import ke.d0;
import ke.w;
import le.o;

/* loaded from: classes3.dex */
public final class i implements o, a {
    public int F;
    public SurfaceTexture G;
    public byte[] J;

    /* renamed from: d, reason: collision with root package name */
    public final AtomicBoolean f14465d = new AtomicBoolean();

    /* renamed from: e, reason: collision with root package name */
    public final AtomicBoolean f14466e = new AtomicBoolean(true);

    /* renamed from: i, reason: collision with root package name */
    public final g f14467i = new g();

    /* renamed from: v, reason: collision with root package name */
    public final a3.f f14468v = new a3.f(7, false);

    /* renamed from: w, reason: collision with root package name */
    public final w1 f14469w = new w1();

    /* renamed from: x, reason: collision with root package name */
    public final w1 f14470x = new w1();

    /* renamed from: y, reason: collision with root package name */
    public final float[] f14471y = new float[16];
    public final float[] E = new float[16];
    public volatile int H = 0;
    public int I = -1;

    @Override // me.a
    public final void a(long j, float[] fArr) {
        ((w1) this.f14468v.f58d).a(j, fArr);
    }

    @Override // me.a
    public final void b() {
        this.f14469w.b();
        a3.f fVar = this.f14468v;
        ((w1) fVar.f58d).b();
        fVar.a = false;
        this.f14466e.set(true);
    }

    public final SurfaceTexture c() {
        try {
            GLES20.glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
            ke.b.h();
            this.f14467i.a();
            ke.b.h();
            ke.b.i("No current context", !d0.a(EGL14.eglGetCurrentContext(), EGL14.EGL_NO_CONTEXT));
            int[] iArr = new int[1];
            GLES20.glGenTextures(1, iArr, 0);
            ke.b.h();
            int i5 = iArr[0];
            ke.b.d(36197, i5);
            this.F = i5;
        } catch (ke.h e9) {
            ke.b.s("SceneRenderer", "Failed to initialize the renderer", e9);
        }
        SurfaceTexture surfaceTexture = new SurfaceTexture(this.F);
        this.G = surfaceTexture;
        surfaceTexture.setOnFrameAvailableListener(new SurfaceTexture.OnFrameAvailableListener() { // from class: me.h
            @Override // android.graphics.SurfaceTexture.OnFrameAvailableListener
            public final void onFrameAvailable(SurfaceTexture surfaceTexture2) {
                i.this.f14465d.set(true);
            }
        });
        return this.G;
    }

    @Override // le.o
    public final void d(long j, long j5, Format format, MediaFormat mediaFormat) {
        int i5;
        ArrayList arrayList;
        int g6;
        this.f14469w.a(j5, Long.valueOf(j));
        byte[] bArr = format.S;
        int i6 = format.T;
        byte[] bArr2 = this.J;
        int i10 = this.I;
        this.J = bArr;
        if (i6 == -1) {
            i6 = this.H;
        }
        this.I = i6;
        if (i10 == i6 && Arrays.equals(bArr2, this.J)) {
            return;
        }
        byte[] bArr3 = this.J;
        f fVar = null;
        if (bArr3 != null) {
            int i11 = this.I;
            w wVar = new w(bArr3);
            try {
                wVar.G(4);
                g6 = wVar.g();
                wVar.F(0);
            } catch (ArrayIndexOutOfBoundsException unused) {
            }
            if (g6 == 1886547818) {
                wVar.G(8);
                int i12 = wVar.f13363b;
                int i13 = wVar.f13364c;
                while (i12 < i13) {
                    int g10 = wVar.g() + i12;
                    if (g10 <= i12 || g10 > i13) {
                        break;
                    }
                    int g11 = wVar.g();
                    if (g11 != 2037673328 && g11 != 1836279920) {
                        wVar.F(g10);
                        i12 = g10;
                    }
                    wVar.E(g10);
                    arrayList = io.sentry.config.a.x(wVar);
                    break;
                }
                arrayList = null;
            } else {
                arrayList = io.sentry.config.a.x(wVar);
            }
            if (arrayList != null) {
                int size = arrayList.size();
                if (size == 1) {
                    e eVar = (e) arrayList.get(0);
                    fVar = new f(eVar, eVar, i11);
                } else if (size == 2) {
                    fVar = new f((e) arrayList.get(0), (e) arrayList.get(1), i11);
                }
            }
        }
        if (fVar == null || !g.b(fVar)) {
            int i14 = this.I;
            float radians = (float) Math.toRadians(180.0f);
            float radians2 = (float) Math.toRadians(360.0f);
            float f2 = radians / 36;
            float f10 = radians2 / 72;
            float[] fArr = new float[15984];
            float[] fArr2 = new float[10656];
            int i15 = 0;
            int i16 = 0;
            int i17 = 0;
            for (int i18 = 36; i15 < i18; i18 = 36) {
                float f11 = radians / 2.0f;
                float f12 = (i15 * f2) - f11;
                int i19 = i15 + 1;
                float f13 = (i19 * f2) - f11;
                int i20 = 0;
                while (i20 < 73) {
                    int i21 = i19;
                    float f14 = f13;
                    float f15 = radians;
                    int i22 = i16;
                    int i23 = i17;
                    int i24 = 0;
                    int i25 = 2;
                    while (i24 < i25) {
                        float f16 = i24 == 0 ? f12 : f14;
                        float f17 = radians2;
                        float f18 = i20 * f10;
                        float f19 = f12;
                        float f20 = f2;
                        double d6 = 50.0f;
                        double d7 = (f18 + 3.1415927f) - (f17 / 2.0f);
                        double d8 = f16;
                        fArr[i22] = -((float) (Math.cos(d8) * Math.sin(d7) * d6));
                        fArr[i22 + 1] = (float) (Math.sin(d8) * d6);
                        int i26 = i22 + 3;
                        fArr[i22 + 2] = (float) (Math.cos(d8) * Math.cos(d7) * d6);
                        fArr2[i23] = f18 / f17;
                        int i27 = i23 + 2;
                        fArr2[i23 + 1] = ((i15 + i24) * f20) / f15;
                        if ((i20 != 0 || i24 != 0) && (i20 != 72 || i24 != 1)) {
                            i5 = 2;
                            i22 = i26;
                            i23 = i27;
                            i24++;
                            i25 = i5;
                            radians2 = f17;
                            f12 = f19;
                            f2 = f20;
                        }
                        System.arraycopy(fArr, i22, fArr, i26, 3);
                        i22 += 6;
                        i5 = 2;
                        System.arraycopy(fArr2, i23, fArr2, i27, 2);
                        i23 += 4;
                        i24++;
                        i25 = i5;
                        radians2 = f17;
                        f12 = f19;
                        f2 = f20;
                    }
                    i20++;
                    i16 = i22;
                    i17 = i23;
                    i19 = i21;
                    f13 = f14;
                    radians = f15;
                    radians2 = radians2;
                    f2 = f2;
                }
                i15 = i19;
            }
            e eVar2 = new e(new w1(fArr, fArr2, 0, 1));
            fVar = new f(eVar2, eVar2, i14);
        }
        this.f14470x.a(j5, fVar);
    }
}
