package id.zelory.compressor.constraint;

import eo.a;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class Compression {
    public final ArrayList a = new ArrayList();

    public final void a(a constraint) {
        Intrinsics.checkParameterIsNotNull(constraint, "constraint");
        this.a.add(constraint);
    }
}
