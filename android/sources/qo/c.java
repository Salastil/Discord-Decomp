package qo;

import java.io.File;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c {
    public final File a;

    /* renamed from: b, reason: collision with root package name */
    public final List f16916b;

    public c(File root, List segments) {
        Intrinsics.checkNotNullParameter(root, "root");
        Intrinsics.checkNotNullParameter(segments, "segments");
        this.a = root;
        this.f16916b = segments;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof c)) {
            return false;
        }
        c cVar = (c) obj;
        return Intrinsics.areEqual(this.a, cVar.a) && Intrinsics.areEqual(this.f16916b, cVar.f16916b);
    }

    public final int hashCode() {
        return this.f16916b.hashCode() + (this.a.hashCode() * 31);
    }

    public final String toString() {
        return "FilePathComponents(root=" + this.a + ", segments=" + this.f16916b + ')';
    }
}
