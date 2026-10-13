package lh;

import android.graphics.Matrix;
import android.graphics.Path;

/* loaded from: classes3.dex */
public final class s extends t {

    /* renamed from: b, reason: collision with root package name */
    public float f14038b;

    /* renamed from: c, reason: collision with root package name */
    public float f14039c;

    @Override // lh.t
    public final void a(Matrix matrix, Path path) {
        Matrix matrix2 = this.a;
        matrix.invert(matrix2);
        path.transform(matrix2);
        path.lineTo(this.f14038b, this.f14039c);
        path.transform(matrix);
    }
}
