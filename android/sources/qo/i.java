package qo;

import java.io.File;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class i {
    public final File a;

    public i(File root) {
        Intrinsics.checkNotNullParameter(root, "root");
        this.a = root;
    }

    public abstract File a();
}
