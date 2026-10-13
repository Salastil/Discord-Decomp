package kotlin.coroutines;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class b implements f {

    /* renamed from: d, reason: collision with root package name */
    public final Function1 f13533d;

    /* renamed from: e, reason: collision with root package name */
    public final f f13534e;

    public b(f baseKey, Function1 safeCast) {
        Intrinsics.checkNotNullParameter(baseKey, "baseKey");
        Intrinsics.checkNotNullParameter(safeCast, "safeCast");
        this.f13533d = safeCast;
        this.f13534e = baseKey instanceof b ? ((b) baseKey).f13534e : baseKey;
    }
}
