package b4;

import e4.o;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class e {
    public final c4.f a;

    public e(c4.f tracker) {
        Intrinsics.checkNotNullParameter(tracker, "tracker");
        this.a = tracker;
    }

    public abstract int a();

    public abstract boolean b(o oVar);

    public abstract boolean c(Object obj);
}
