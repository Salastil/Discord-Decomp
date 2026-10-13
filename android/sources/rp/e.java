package rp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class e extends h0 {

    /* renamed from: l, reason: collision with root package name */
    public static final /* synthetic */ int f17447l = 0;

    /* JADX WARN: Multi-variable type inference failed */
    public static final ip.v a(ip.v functionDescriptor) {
        Intrinsics.checkNotNullParameter(functionDescriptor, "functionDescriptor");
        hq.e name = ((lp.l) functionDescriptor).getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        if (b(name)) {
            return (ip.v) oq.e.b(functionDescriptor, d.f17436e);
        }
        return null;
    }

    public static boolean b(hq.e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        return h0.f17464e.contains(eVar);
    }
}
