package n1;

import android.os.Bundle;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class w {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Bundle f14728b;

    public w(String type, String requestJson, Bundle requestData) {
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(requestJson, "requestJson");
        Intrinsics.checkNotNullParameter(requestData, "requestData");
        this.a = type;
        this.f14728b = requestData;
    }
}
