package r3;

import af.i;
import android.content.Context;
import android.graphics.Rect;
import android.os.Parcel;
import android.util.SparseArray;
import com.facebook.fresco.animation.factory.AnimatedFactoryV2Impl;
import di.n;
import di.o;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.concurrent.LinkedBlockingQueue;
import k2.r;
import kotlin.jvm.internal.Intrinsics;
import org.chromium.support_lib_boundary.WebViewProviderFactoryBoundaryInterface;
import org.chromium.support_lib_boundary.WebkitToCompatConverterBoundaryInterface;
import qa.s;
import qa.t;
import rd.u;
import th.a0;

/* loaded from: classes.dex */
public final class g implements f, i, uh.g, da.b, yb.b, o {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f17125d;

    /* renamed from: e, reason: collision with root package name */
    public Object f17126e;

    public /* synthetic */ g(int i5, Object obj) {
        this.f17125d = i5;
        this.f17126e = obj;
    }

    @Override // uh.g
    public Object a() {
        switch (this.f17125d) {
            case 4:
                return new a0(new uh.f(new u(7, (t) this.f17126e)));
            default:
                return new com.google.android.play.core.integrity.f((com.google.android.play.core.integrity.c) ((n) this.f17126e).a());
        }
    }

    @Override // af.i
    public void accept(Object obj, Object obj2) {
        sf.g gVar = (sf.g) this.f17126e;
        tf.f fVar = new tf.f((jg.g) obj2, 0);
        tf.d dVar = (tf.d) ((tf.e) obj).o();
        ze.f a = cg.b.a();
        Parcel obtain = Parcel.obtain();
        obtain.writeInterfaceToken("com.google.android.gms.identitycredentials.internal.IIdentityCredentialService");
        int i5 = cg.a.a;
        obtain.writeStrongBinder(fVar);
        cg.a.b(obtain, gVar);
        cg.a.b(obtain, a);
        ((tf.b) dVar).b(6, obtain);
    }

    @Override // da.b
    public da.a b(e4.i iVar, Rect rect) {
        AnimatedFactoryV2Impl animatedFactoryV2Impl = (AnimatedFactoryV2Impl) this.f17126e;
        if (animatedFactoryV2Impl.f4513g == null) {
            animatedFactoryV2Impl.f4513g = new s();
        }
        return new da.a(animatedFactoryV2Impl.f4513g, iVar, rect, animatedFactoryV2Impl.f4510d);
    }

    @Override // r3.f
    public String[] c() {
        return ((WebViewProviderFactoryBoundaryInterface) this.f17126e).getSupportedFeatures();
    }

    public ByteBuffer d(int i5) {
        ByteBuffer order = ByteBuffer.allocateDirect(i5).order(ByteOrder.LITTLE_ENDIAN);
        Intrinsics.checkNotNullExpressionValue(order, "{\n            ByteBuffer….LITTLE_ENDIAN)\n        }");
        return order;
    }

    @Override // javax.inject.Provider
    public Object get() {
        return new r((Context) ((u) this.f17126e).f17275e, new l8.a(6), new j8.c(), 27);
    }

    @Override // r3.f
    public WebkitToCompatConverterBoundaryInterface getWebkitToCompatConverter() {
        return (WebkitToCompatConverterBoundaryInterface) nt.a.e(WebkitToCompatConverterBoundaryInterface.class, ((WebViewProviderFactoryBoundaryInterface) this.f17126e).getWebkitToCompatConverter());
    }

    public g(int i5) {
        this.f17125d = i5;
        switch (i5) {
            case 2:
                this.f17126e = new SparseArray();
                break;
            case 9:
                this.f17126e = new LinkedBlockingQueue();
                break;
        }
    }
}
