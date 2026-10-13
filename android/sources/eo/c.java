package eo;

import android.graphics.Bitmap;
import java.io.File;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c implements a {
    @Override // eo.a
    public final boolean isSatisfied(File imageFile) {
        Intrinsics.checkParameterIsNotNull(imageFile, "imageFile");
        return Bitmap.CompressFormat.JPEG == co.c.a(imageFile);
    }

    @Override // eo.a
    public final File satisfy(File imageFile) {
        Intrinsics.checkParameterIsNotNull(imageFile, "imageFile");
        Bitmap d6 = co.c.d(imageFile);
        Bitmap.CompressFormat compressFormat = Bitmap.CompressFormat.JPEG;
        return co.c.e(imageFile, d6, 0, 8);
    }
}
