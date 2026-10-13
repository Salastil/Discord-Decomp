package qa;

import android.graphics.Matrix;
import android.graphics.PointF;
import android.media.MediaCodec;
import android.media.MediaCodecInfo;
import android.media.MediaCodecList;
import android.os.IBinder;
import android.os.IInterface;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import androidx.core.text.PrecomputedTextCompat;
import com.facebook.soloader.a0;
import com.facebook.soloader.b0;
import com.facebook.soloader.i0;
import com.facebook.soloader.z;
import di.d0;
import di.y;
import ie.m0;
import io.sentry.o4;
import java.nio.ByteBuffer;
import java.util.NoSuchElementException;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class s implements x, androidx.core.view.w, cd.x, tm.a, io.sentry.clientreport.f, lb.c, ks.g, pd.m, td.p, wk.a, d0, zc.f {

    /* renamed from: d, reason: collision with root package name */
    public static s f16716d;

    public static boolean B(float f2, float f10, View view) {
        return 0.0f <= f2 && f2 <= ((float) view.getWidth()) && 0.0f <= f10 && f10 <= ((float) view.getHeight());
    }

    public static void C(float f2, float f10, ViewGroup parent, View child, PointF outLocalPoint) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        Intrinsics.checkNotNullParameter(child, "child");
        Intrinsics.checkNotNullParameter(outLocalPoint, "outLocalPoint");
        float scrollX = (f2 + parent.getScrollX()) - child.getLeft();
        float scrollY = (f10 + parent.getScrollY()) - child.getTop();
        Matrix matrix = child.getMatrix();
        if (!matrix.isIdentity()) {
            float[] fArr = jm.g.f12896q;
            fArr[0] = scrollX;
            fArr[1] = scrollY;
            Matrix matrix2 = jm.g.f12897r;
            matrix.invert(matrix2);
            matrix2.mapPoints(fArr);
            float f11 = fArr[0];
            scrollY = fArr[1];
            scrollX = f11;
        }
        outLocalPoint.set(scrollX, scrollY);
    }

    public static final boolean v(int i5) {
        PointF pointF = jm.g.f12895p;
        return i5 == 3 || i5 == 1 || i5 == 5;
    }

    public static final boolean w(jm.f fVar, jm.f fVar2) {
        PointF pointF = jm.g.f12895p;
        if (!fVar.s(fVar2) || fVar == fVar2 || fVar.I(fVar2) || fVar2.I(fVar)) {
            return false;
        }
        if (fVar == fVar2) {
            return true;
        }
        if (fVar.M || fVar.f12878h == 4) {
            return fVar.G(fVar2);
        }
        return true;
    }

    public static final boolean x(jm.f handler, jm.f otherHandler) {
        km.i iVar;
        PointF pointF = jm.g.f12895p;
        if (handler != otherHandler) {
            handler.getClass();
            Intrinsics.checkNotNullParameter(otherHandler, "handler");
            if (otherHandler != handler && (iVar = handler.H) != null) {
                Intrinsics.checkNotNullParameter(handler, "handler");
                Intrinsics.checkNotNullParameter(otherHandler, "otherHandler");
                int[] iArr = (int[]) iVar.a.get(handler.f12874d);
                if (iArr != null) {
                    for (int i5 : iArr) {
                        if (i5 == otherHandler.f12874d) {
                            return true;
                        }
                    }
                }
            }
            if (otherHandler.J(handler)) {
                return true;
            }
        }
        return false;
    }

    public static final boolean y(float[] fArr, View view) {
        PointF pointF = jm.g.f12895p;
        return (!(view instanceof ViewGroup) || (view.getBackground() != null) || (view.getParent() instanceof km.f)) && B(fArr[0], fArr[1], view);
    }

    public static synchronized s z() {
        s sVar;
        synchronized (s.class) {
            try {
                if (f16716d == null) {
                    f16716d = new s();
                }
                sVar = f16716d;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return sVar;
    }

    public boolean A(CharSequence charSequence) {
        return charSequence instanceof PrecomputedTextCompat;
    }

    @Override // zc.f
    public long a(qc.k kVar) {
        return -1L;
    }

    @Override // cd.x
    public MediaCodecInfo b(int i5) {
        return MediaCodecList.getCodecInfoAt(i5);
    }

    @Override // pd.m
    public long c() {
        throw new NoSuchElementException();
    }

    @Override // tm.a
    public String d() {
        return "onDidAppear";
    }

    @Override // lb.c
    public boolean e(UnsatisfiedLinkError unsatisfiedLinkError, b0[] b0VarArr) {
        if (!(unsatisfiedLinkError instanceof a0) || (unsatisfiedLinkError instanceof z)) {
            return false;
        }
        String str = ((a0) unsatisfiedLinkError).f5086d;
        StringBuilder sb2 = new StringBuilder("Reunpacking NonApk UnpackingSoSources due to ");
        sb2.append(unsatisfiedLinkError);
        sb2.append(str == null ? "" : ", retrying for specific library ".concat(str));
        Log.e("SoLoader", sb2.toString());
        for (b0 b0Var : b0VarArr) {
            if (b0Var instanceof i0) {
                i0 i0Var = (i0) b0Var;
                if (i0Var instanceof com.facebook.soloader.b) {
                    continue;
                } else {
                    try {
                        Log.e("SoLoader", "Runpacking " + i0Var.b());
                        i0Var.d(2);
                    } catch (Exception e9) {
                        Log.e("SoLoader", "Encountered an exception while reunpacking " + i0Var.b() + " for library " + str + ": ", e9);
                        return false;
                    }
                }
            }
        }
        return true;
    }

    @Override // wk.a
    public void g(rk.a sourceFrame, rk.a targetFrame) {
        ByteBuffer byteBuffer = targetFrame.f17401b;
        Intrinsics.checkNotNullParameter(sourceFrame, "sourceFrame");
        Intrinsics.checkNotNullParameter(targetFrame, "targetFrame");
        ByteBuffer byteBuffer2 = sourceFrame.f17401b;
        if (byteBuffer2 == null || byteBuffer == null) {
            throw new IllegalArgumentException("Source or target frame doesn't have a buffer, cannot process it!");
        }
        byteBuffer.put(byteBuffer2);
        byteBuffer.flip();
        MediaCodec.BufferInfo bufferInfo = targetFrame.f17402c;
        bufferInfo.offset = 0;
        MediaCodec.BufferInfo bufferInfo2 = sourceFrame.f17402c;
        bufferInfo.size = bufferInfo2.size;
        bufferInfo.presentationTimeUs = bufferInfo2.presentationTimeUs;
        bufferInfo.flags = bufferInfo2.flags;
    }

    @Override // tm.a
    /* renamed from: getEventName */
    public String getName() {
        return "topDidAppear";
    }

    @Override // cd.x
    public boolean h(String str, String str2, MediaCodecInfo.CodecCapabilities codecCapabilities) {
        return "secure-playback".equals(str) && "video/avc".equals(str2);
    }

    @Override // pd.m
    public long i() {
        throw new NoSuchElementException();
    }

    @Override // td.p
    public m0 k(td.l lVar, td.i iVar) {
        return new td.o(lVar, iVar);
    }

    @Override // di.d0
    public Object l(IBinder iBinder) {
        int i5 = y.f7604g;
        if (iBinder == null) {
            return null;
        }
        IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.play.core.integrity.protocol.IIntegrityService");
        return queryLocalInterface instanceof di.z ? (di.z) queryLocalInterface : new di.x(iBinder, "com.google.android.play.core.integrity.protocol.IIntegrityService", 1);
    }

    @Override // zc.f
    public qc.s m() {
        return new qc.n(-9223372036854775807L);
    }

    @Override // pd.m
    public boolean next() {
        return false;
    }

    @Override // cd.x
    public boolean p(String str, MediaCodecInfo.CodecCapabilities codecCapabilities) {
        return false;
    }

    @Override // cd.x
    public int q() {
        return MediaCodecList.getCodecCount();
    }

    @Override // td.p
    public m0 r() {
        return new td.o(td.l.f18319n, null);
    }

    @Override // cd.x
    public boolean u() {
        return false;
    }

    @Override // wk.a
    public void release() {
    }

    @Override // io.sentry.clientreport.f
    public io.sentry.internal.debugmeta.c s(io.sentry.internal.debugmeta.c cVar) {
        return cVar;
    }

    @Override // zc.f
    public void t(long j) {
    }

    @Override // io.sentry.clientreport.f
    public void f(io.sentry.clientreport.d dVar, io.sentry.l lVar) {
    }

    @Override // io.sentry.clientreport.f
    public void j(io.sentry.clientreport.d dVar, io.sentry.internal.debugmeta.c cVar) {
    }

    @Override // io.sentry.clientreport.f
    public void o(io.sentry.clientreport.d dVar, o4 o4Var) {
    }

    @Override // io.sentry.clientreport.f
    public void n(io.sentry.clientreport.d dVar, io.sentry.l lVar, long j) {
    }

    @Override // androidx.core.view.w
    public void onScrollLimit(int i5, int i6, int i10, boolean z5) {
    }

    @Override // androidx.core.view.w
    public void onScrollProgress(int i5, int i6, int i10, int i11) {
    }
}
