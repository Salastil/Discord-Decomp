package wq;

import java.util.Iterator;
import java.util.List;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public class a implements jp.h {

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f19992e = {com.discord.chat.bridge.botuikit.a.o(a.class, "annotations", "getAnnotations()Ljava/util/List;", 0)};

    /* renamed from: d, reason: collision with root package name */
    public final xq.i f19993d;

    public a(xq.o storageManager, Function0 compute) {
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(compute, "compute");
        xq.l lVar = (xq.l) storageManager;
        lVar.getClass();
        this.f19993d = new xq.i(lVar, compute);
    }

    @Override // jp.h
    public final jp.b Q(hq.c cVar) {
        return ki.b.q(this, cVar);
    }

    @Override // jp.h
    public boolean isEmpty() {
        return ((List) ys.d.O(this.f19993d, f19992e[0])).isEmpty();
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        return ((List) ys.d.O(this.f19993d, f19992e[0])).iterator();
    }

    @Override // jp.h
    public final boolean r(hq.c cVar) {
        return ki.b.I(this, cVar);
    }
}
