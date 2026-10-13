package jq;

import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;

/* loaded from: classes3.dex */
public final class q extends s {
    public q() {
        super("HTML", 1);
    }

    @Override // jq.s
    public final String a(String string) {
        Intrinsics.checkNotNullParameter(string, "string");
        return x.l(x.l(string, "<", "&lt;", false), ">", "&gt;", false);
    }
}
