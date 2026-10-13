package qo;

import java.io.File;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class d extends i {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(File rootDir) {
        super(rootDir);
        Intrinsics.checkNotNullParameter(rootDir, "rootDir");
    }
}
