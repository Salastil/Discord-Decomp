package eo;

import java.io.File;
import kotlin.jvm.internal.Intrinsics;
import qo.n;

/* loaded from: classes3.dex */
public final class b implements a {
    public final File a;

    public b(File destination) {
        Intrinsics.checkParameterIsNotNull(destination, "destination");
        this.a = destination;
    }

    @Override // eo.a
    public final boolean isSatisfied(File imageFile) {
        Intrinsics.checkParameterIsNotNull(imageFile, "imageFile");
        return Intrinsics.areEqual(imageFile.getAbsolutePath(), this.a.getAbsolutePath());
    }

    @Override // eo.a
    public final File satisfy(File imageFile) {
        Intrinsics.checkParameterIsNotNull(imageFile, "imageFile");
        File file = this.a;
        n.f(imageFile, file);
        return file;
    }
}
