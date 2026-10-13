package app.rive.core;

import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import u.c;

@Metadata(d1 = {"\u0000\u0016\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\u001a%\u0010\u0005\u001a\u00020\u00042\u0014\u0010\u0003\u001a\u0010\u0012\u0004\u0012\u00020\u0001\u0012\u0006\u0012\u0004\u0018\u00010\u00020\u0000H\u0007¢\u0006\u0004\b\u0005\u0010\u0006¨\u0006\u0007"}, d2 = {"", "", "", "trackMap", "", "RebuggerWrapper", "(Ljava/util/Map;Lu/c;I)V", "kotlin_release"}, k = 2, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class RebuggerWrapperKt {
    public static final void RebuggerWrapper(@NotNull Map<String, ? extends Object> trackMap, c cVar, int i5) {
        Intrinsics.checkNotNullParameter(trackMap, "trackMap");
        cVar.m();
        if ((i5 & 1) == 0) {
            throw null;
        }
        throw null;
    }
}
