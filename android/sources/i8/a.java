package i8;

import java.io.File;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a {
    public final File a;

    public a(File file) {
        this.a = file;
    }

    public final boolean equals(Object obj) {
        if (obj == null || !(obj instanceof a)) {
            return false;
        }
        return Intrinsics.areEqual(this.a, ((a) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }
}
