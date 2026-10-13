package qo;

import bg.y0;
import java.io.File;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class p extends y0 {
    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public p(File file, File file2, String str, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        super(str, file, file2);
        file2 = (i5 & 2) != 0 ? null : file2;
        str = (i5 & 4) != 0 ? null : str;
        Intrinsics.checkNotNullParameter(file, "file");
    }
}
