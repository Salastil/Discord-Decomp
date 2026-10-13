package hp;

import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;

/* loaded from: classes3.dex */
public final class n extends ir.n {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ String f10181b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Ref.ObjectRef f10182c;

    public n(String str, Ref.ObjectRef objectRef) {
        this.f10181b = str;
        this.f10182c = objectRef;
    }

    /* JADX WARN: Type inference failed for: r3v10, types: [T, hp.l] */
    /* JADX WARN: Type inference failed for: r3v4, types: [T, hp.l] */
    /* JADX WARN: Type inference failed for: r3v5, types: [T, hp.l] */
    /* JADX WARN: Type inference failed for: r3v6, types: [T, hp.l] */
    @Override // ir.n
    public final boolean d(Object obj) {
        ip.f javaClassDescriptor = (ip.f) obj;
        Intrinsics.checkNotNullParameter(javaClassDescriptor, "javaClassDescriptor");
        String Q = ki.b.Q(javaClassDescriptor, this.f10181b);
        boolean contains = r.f10194b.contains(Q);
        Ref.ObjectRef objectRef = this.f10182c;
        if (contains) {
            objectRef.element = l.f10175d;
        } else if (r.f10196d.contains(Q)) {
            objectRef.element = l.f10176e;
        } else if (r.f10195c.contains(Q)) {
            objectRef.element = l.f10177i;
        } else if (r.a.contains(Q)) {
            objectRef.element = l.f10179w;
        }
        return objectRef.element == 0;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // ir.n
    public final Object k() {
        l lVar = (l) this.f10182c.element;
        return lVar == null ? l.f10178v : lVar;
    }
}
