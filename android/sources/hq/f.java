package hq;

import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;

/* loaded from: classes3.dex */
public abstract class f {
    public static final Regex a = new Regex("[^\\p{L}\\p{Digit}]");

    /* renamed from: b, reason: collision with root package name */
    public static final String f10211b = "$context_receiver";

    public static final e a(int i5) {
        e e9 = e.e(f10211b + '_' + i5);
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        return e9;
    }
}
