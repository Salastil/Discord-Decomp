package oq;

import ir.n;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;

/* loaded from: classes3.dex */
public final class d extends n {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Ref.ObjectRef f16179b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Function1 f16180c;

    public d(Ref.ObjectRef objectRef, Function1 function1) {
        this.f16179b = objectRef;
        this.f16180c = function1;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r3v1, types: [T, ip.d, java.lang.Object] */
    @Override // ir.n
    public final void c(Object obj) {
        ?? current = (ip.d) obj;
        Intrinsics.checkNotNullParameter(current, "current");
        Ref.ObjectRef objectRef = this.f16179b;
        if (objectRef.element == 0 && ((Boolean) this.f16180c.invoke(current)).booleanValue()) {
            objectRef.element = current;
        }
    }

    @Override // ir.n
    public final boolean d(Object obj) {
        ip.d current = (ip.d) obj;
        Intrinsics.checkNotNullParameter(current, "current");
        return this.f16179b.element == 0;
    }

    @Override // ir.n
    public final Object k() {
        return (ip.d) this.f16179b.element;
    }
}
