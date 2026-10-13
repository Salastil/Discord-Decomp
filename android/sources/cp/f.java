package cp;

import java.lang.reflect.Method;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f extends ys.l {

    /* renamed from: b, reason: collision with root package name */
    public final List f6896b;

    public f(Class jClass) {
        Intrinsics.checkNotNullParameter(jClass, "jClass");
        Method[] declaredMethods = jClass.getDeclaredMethods();
        Intrinsics.checkNotNullExpressionValue(declaredMethods, "getDeclaredMethods(...)");
        this.f6896b = kotlin.collections.x.E(declaredMethods, new e(0));
    }

    @Override // ys.l
    public final String d() {
        return CollectionsKt.O(this.f6896b, "", "<init>(", ")V", b.f6879y, 24);
    }
}
