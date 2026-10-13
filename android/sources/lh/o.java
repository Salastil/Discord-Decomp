package lh;

import android.graphics.Canvas;
import android.graphics.Matrix;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class o extends u {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ ArrayList f14025c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Matrix f14026d;

    public o(ArrayList arrayList, Matrix matrix) {
        this.f14025c = arrayList;
        this.f14026d = matrix;
    }

    @Override // lh.u
    public final void a(Matrix matrix, kh.a aVar, int i5, Canvas canvas) {
        Iterator it = this.f14025c.iterator();
        while (it.hasNext()) {
            ((u) it.next()).a(this.f14026d, aVar, i5, canvas);
        }
    }
}
