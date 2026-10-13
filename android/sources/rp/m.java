package rp;

import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m {
    public static final m a = new m();

    public static final d0 a(String str, String str2, String str3, String str4) {
        ArrayList arrayList = h0.a;
        hq.e e9 = hq.e.e(str2);
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        return new d0(str, e9, str3, str4);
    }
}
