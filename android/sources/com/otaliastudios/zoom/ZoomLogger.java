package com.otaliastudios.zoom;

import java.util.Arrays;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class ZoomLogger {
    public ZoomLogger(String str) {
    }

    public static String b(int i5, Object... objArr) {
        return 3 <= i5 ? x.A(objArr, " ", null, null, null, 62) : "";
    }

    public final void a(Object... data) {
        Intrinsics.checkNotNullParameter(data, "data");
        String message = b(1, Arrays.copyOf(data, data.length));
        Intrinsics.checkNotNullParameter(message, "message");
    }

    public final void c(Object... data) {
        Intrinsics.checkNotNullParameter(data, "data");
        String message = b(0, Arrays.copyOf(data, data.length));
        Intrinsics.checkNotNullParameter(message, "message");
    }

    public final void d(String message) {
        Intrinsics.checkNotNullParameter(message, "message");
    }
}
