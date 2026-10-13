package np;

import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;
import op.r;
import uq.m;

/* loaded from: classes3.dex */
public final class d implements m {

    /* renamed from: b, reason: collision with root package name */
    public static final d f15584b = new d();

    /* renamed from: c, reason: collision with root package name */
    public static final d f15585c = new d();

    @Override // uq.m
    public void a(ip.f descriptor, ArrayList unresolvedSuperClasses) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(unresolvedSuperClasses, "unresolvedSuperClasses");
        throw new IllegalStateException("Incomplete hierarchy for class " + descriptor.getName() + ", unresolved classes " + unresolvedSuperClasses);
    }

    public f b(yp.c javaElement) {
        Intrinsics.checkNotNullParameter(javaElement, "javaElement");
        return new f((r) javaElement);
    }

    @Override // uq.m
    public void c(ip.d descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        throw new IllegalStateException("Cannot infer visibility for " + descriptor);
    }
}
