package r9;

import java.util.Date;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g {
    public final d a;

    /* renamed from: b, reason: collision with root package name */
    public final Date f17174b;

    public g(d frameLoader, Date insertedTime) {
        Intrinsics.checkNotNullParameter(frameLoader, "frameLoader");
        Intrinsics.checkNotNullParameter(insertedTime, "insertedTime");
        this.a = frameLoader;
        this.f17174b = insertedTime;
    }
}
