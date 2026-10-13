package yq;

import java.util.Iterator;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class c0 extends b1 implements cr.f, cr.g {
    @Override // yq.b1
    /* renamed from: A0, reason: merged with bridge method [inline-methods] */
    public abstract c0 x0(boolean z5);

    @Override // yq.b1
    /* renamed from: B0, reason: merged with bridge method [inline-methods] */
    public abstract c0 z0(k0 k0Var);

    public String toString() {
        StringBuilder sb2 = new StringBuilder();
        Iterator it = getAnnotations().iterator();
        while (it.hasNext()) {
            String[] value = {"[", jq.f.f13048c.w((jp.b) it.next(), null), "] "};
            Intrinsics.checkNotNullParameter(sb2, "<this>");
            Intrinsics.checkNotNullParameter(value, "value");
            for (int i5 = 0; i5 < 3; i5++) {
                sb2.append(value[i5]);
            }
        }
        sb2.append(r0());
        if (!l0().isEmpty()) {
            CollectionsKt.N(l0(), sb2, ", ", "<", ">", null, 112);
        }
        if (t0()) {
            sb2.append("?");
        }
        return sb2.toString();
    }
}
