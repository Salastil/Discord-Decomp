package androidx.fragment.app;

import android.view.View;
import androidx.core.performance.play.services.PlayServicesDevicePerformance;
import java.io.IOException;
import java.util.Collection;
import java.util.Map;
import java.util.WeakHashMap;
import java.util.concurrent.CancellationException;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class s extends Lambda implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2097d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f2098e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ s(int i5, Object obj) {
        super(1);
        this.f2097d = i5;
        this.f2098e = obj;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f2097d) {
            case 0:
                Map.Entry entry = (Map.Entry) obj;
                Intrinsics.checkNotNullParameter(entry, "entry");
                Collection collection = (Collection) this.f2098e;
                View view = (View) entry.getValue();
                WeakHashMap weakHashMap = androidx.core.view.s0.a;
                return Boolean.valueOf(CollectionsKt.E(collection, androidx.core.view.j0.f(view)));
            case 1:
                Throwable th2 = (Throwable) obj;
                if (th2 != null) {
                    qr.c0 c0Var = ((e2.z) this.f2098e).f7926f;
                    e2.e eVar = new e2.e(th2);
                    c0Var.getClass();
                    c0Var.i(null, eVar);
                }
                Object obj2 = e2.z.j;
                e2.z zVar = (e2.z) this.f2098e;
                synchronized (obj2) {
                    e2.z.f7921i.remove(zVar.b().getAbsolutePath());
                }
                return Unit.a;
            case 2:
                nr.x.w(kotlin.coroutines.g.f13538d, new h1.d((PlayServicesDevicePerformance) this.f2098e, (Integer) obj, null));
                return Unit.a;
            case 3:
                z.d it = (z.d) obj;
                Intrinsics.checkNotNullParameter(it, "it");
                ((v.d) this.f2098e).a(it);
                return Boolean.TRUE;
            case 4:
                Intrinsics.checkNotNullParameter((IOException) obj, "it");
                rs.g gVar = (rs.g) this.f2098e;
                byte[] bArr = qs.b.a;
                gVar.G = true;
                return Unit.a;
            case 5:
                return obj == ((s.r) this.f2098e) ? "(this)" : String.valueOf(obj);
            default:
                Throwable th3 = (Throwable) obj;
                v3.j jVar = (v3.j) this.f2098e;
                if (th3 == null) {
                    if (!jVar.f19205d.isDone()) {
                        throw new IllegalArgumentException("Failed requirement.");
                    }
                } else if (th3 instanceof CancellationException) {
                    jVar.f19205d.cancel(true);
                } else {
                    g4.j jVar2 = jVar.f19205d;
                    Throwable cause = th3.getCause();
                    if (cause != null) {
                        th3 = cause;
                    }
                    jVar2.k(th3);
                }
                return Unit.a;
        }
    }
}
