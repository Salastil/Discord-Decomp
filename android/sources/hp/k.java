package hp;

import java.util.List;
import kotlin.collections.b0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import yq.c0;

/* loaded from: classes3.dex */
public final class k implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10173d;

    /* renamed from: e, reason: collision with root package name */
    public final o f10174e;

    public /* synthetic */ k(o oVar, int i5) {
        this.f10173d = i5;
        this.f10174e = oVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f10173d) {
            case 0:
                List annotations = b0.c(jp.e.a(this.f10174e.a.g(), "This member is not fully supported by Kotlin compiler, so it may be absent or have different signature in next major version", "", "WARNING"));
                Intrinsics.checkNotNullParameter(annotations, "annotations");
                return annotations.isEmpty() ? jp.g.a : new jp.i(annotations, 0);
            default:
                c0 e9 = this.f10174e.a.g().e();
                Intrinsics.checkNotNullExpressionValue(e9, "getAnyType(...)");
                return e9;
        }
    }
}
